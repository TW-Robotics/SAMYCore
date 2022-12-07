#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>

#include <samycore.h>
#include <crcl_Reflection.h>
#include <di_Reflection.h>
#include<robotics_Reflection.h>
#include <fortiss_di_Reflection.h>

namespace SAMY {

    void SAMYCore::run( bool& running ){
        while ( running ) {
            server->iterate();
            std::this_thread::yield();
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }

    void SAMYCore::generateSkills( const std::vector< SAMYSkillConfig >& skillsConfigs ){
        for( auto& skillConfig : skillsConfigs ){
            skills.emplace_back( SAMYSkill{ skillConfig, logger } );
        }
        logger->info("Skills succesfully generated");
    }

    void SAMYCore::fillConfig( const std::shared_ptr<spdlog::logger>& logger, const std::string& serverConfigFilePath )
    {
        Parsers::SAMYCoreConfigParser parserConfig{logger};
        parserConfig.parseSAMYCoreConfig( serverConfigFilePath, config );

        Parsers::DataBaseParser parserDataBase{logger};
        parserDataBase.parseDataBase( config.pathToDataBaseConfig, dataBaseTypes );

        Parsers::SkillsParser skillsParser{ config.pathToSkillsConfig, logger };
        skillsParser.parseSkills( );

        generateSkills( skillsParser.getSkillConfigs() );

        auto skillsConfigs = skillsParser.getSkillConfigs();

        Parsers::RobotsParser robotsParser{ logger };
        robotsParser.parseRobots( config.pathToRobotsConfig, skills, robots );

        Parsers::InformationSourcesParser infoParser{ logger };
        infoParser.parseInformationSources( config.pathToInformationSourcesConfig, informationSources );
    }

    void SAMYCore::generateThreadsPool(){
        threadsPool.reset( robots.size() );
    }

    void SAMYCore::setThreadsPoolInRobots(){
        for( auto& robot : robots )
            robot.setThreadsPool( &threadsPool );
    }

    void createRegistry(){
        set_typesids_in_registry_builtin();
        Reflection::set_typesids_in_registry_crcl();
        Reflection::set_typesids_in_registry_di();
        Reflection::set_typesids_in_registry_fortiss_di();
        Reflection::set_typesids_in_registry_robotics();

        //AUTOMATE THIS WITH SOMETHING SIMILAR TO THE FOLLOWING (AS IT IS DOES NOT WORK)
        /*
        UA_DataTypeArray typesArr = server.get()->getServerConfig()->customDataTypes;

        while( typesArr.types ){

            for(int i = 0; i < typesArr.typesSize; ++i ){
                const UA_DataType dt = typesArr.types[i];
                std::string name{ dt.typeName };
                Reflection::NodesIdsRegistry::addNodeId( name, dt.typeId );
            }
            typesArr = typesArr.next;
        }
*/
    }

    void SAMYCore::configure( const std::string &serverConfigFilePath )
    {
        if(configured){
            std::stringstream msg;
            msg << "THERE WAS AN ATTEMPT OF RECONFIGURING THE SAMYCORE DURING RUNTIME. SAMYCORE IS A SINGLETON AND THE CONFIGURE METHOD SHOULD BE USED ONLY ONCE. REVIEW THE CODE." << std::endl << std::endl;
            msg << "SAMYCORE WILL THROW NOW DUE TO THE PREVIOUS ERROR"  << std::endl << std::endl;
            logger->error(msg.str());
            throw;
        }

        logger = SAMY::Logging::LoggerFactory::createLogger("SAMYCore",
                                                           config.appLoggingLevel,
                                                           config.logsPath);

        fillConfig( logger, serverConfigFilePath );

        std::stringstream msg;
        msg <<"SKILLS SIZE: "<< skills.size() << "  ROBOTS SIZE: "<<robots.size()<<"   INFO SOURCES SIZE: "
            << informationSources.size() <<  "  ELEMENTS IN DATABASE: " << dataBaseTypes.size();
        logger->info(msg.str());


        generateThreadsPool();

        setThreadsPoolInRobots();

        server = std::make_unique<OPCUA::OpcUaServer>( config, logger );

        LockedServer ls = server->getLocked();

        SAMYCoreInterfaceGenerator generator{logger};

        UA_StatusCode retval = generator.addFixedInformationModels( ls.get(), robots );

        if( retval != UA_STATUSCODE_GOOD )
            throw;


        createRegistry();
        logger->info("The following types can be used as parameters of the skills. The used naming in the Skill config must match");
        const auto& availableTypes = Reflection::NodesIdsRegistry::getNodesIds();
        for( const auto& elem : availableTypes )
            logger->info( "Available skill parameter type:  {} ", elem.first );


        generator.generateSAMYCoreInterface( ls.get(), robots, skills, informationSources, dataBaseTypes );

        systemStatusNamesNodesMap = generator.getSystemStatusNamesNodesMap();

        std::stringstream msg2;
        msg2 <<"NUMBER OF RELEVANT NODES FOR DESCRIBING SYSTEM STATUS: " << systemStatusNamesNodesMap.size() << std::endl << std::endl;
        logger->info(msg2.str());

        retval |= initializeRobots();

        if( retval != UA_STATUSCODE_GOOD )
            return;

        configured = true;

        server->init();
    }

    void* SAMYCore::readSystemStatusNode( const std::string& nodeName )
    {
        auto search = systemStatusNamesNodesMap.find(nodeName);
        if( search == systemStatusNamesNodesMap.end() ){
            return nullptr;
        }

        LockedServer ls = server->getLocked();

        UA_Variant var;
        UA_Variant_init(&var);
     
        auto retval = UA_Server_readValue(ls.get(), search->second, &var ); // Reads the node that we want to read
        if( !retval == UA_STATUSCODE_GOOD){
            return nullptr;
        }

        return var.data;
    }

/*
    bool SAMYCore::writeSystemStatusNode( const std::string& nodeName, void** val )
    {
        if( !systemStatusNamesNodesMap.contains(nodeName) ){
            return false;
        }

        LockedServer ls = server->getLocked();

        UA_Variant var;
        UA_Variant_init(&var);
        auto retval = UA_Server_readValue(ls.get(), systemStatusNamesNodesMap[nodeName], &var ); // Reads the node that we want to read
        if( !retval == UA_STATUSCODE_GOOD){
            return false;
        }

        UA_NodeId* valNode = static_cast<UA_NodeId*>(var.data);
        UA_Variant_init(&var);
        auto |= UA_Server_writeValue(ls.get(), *valNode, *val ); // Reads the value of the node
        if( !retval == UA_STATUSCODE_GOOD){
            return false;
        }

        return true;
    }
*/

}
