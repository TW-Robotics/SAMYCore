#include <samycore.h>



#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>

namespace SAMY {

    void SAMYCore::run( bool& running ){
        while ( running ) {
            server->iterate();
            std::this_thread::yield();
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }

    SAMYCore::SAMYCore( const std::string& serverConfigFilePath )
    {
        logger = SAMY::Logging::LoggerFactory::createLogger("SAMYCore",
                                                           config.appLoggingLevel,
                                                           config.logsPath);

        Parsers::SAMYCoreConfigParser parserConfig{logger};
        parserConfig.parseSAMYCoreConfig( serverConfigFilePath, config );

        Parsers::SkillsParser skillsParser{ logger };
        skillsParser.parseSkills( config.pathToSkillsConfig, skills );

        Parsers::RobotsParser robotsParser{ logger };
        robotsParser.parseRobots( config.pathToRobotsConfig, skills, robots );

        Parsers::InformationSourcesParser infoParser{ logger };
        infoParser.parseInformationSources( config.pathToInformationSourcesConfig, informationSources );

         std::stringstream msg;
         msg <<"SKILLS SIZE: "<< skills.size() << "  ROBOTS SIZE: "<<robots.size()<<"   INFO SOURCES SIZE: "
            << informationSources.size() << std::endl << std::endl;
         logger->info(msg.str());

         server = std::make_shared<SAMY::OPCUA::OpcUaServer>( config, logger );

        LockedServer ls = server->getLocked();

        SAMY::SAMYCoreInterfaceGenerator generator{logger};
        generator.generateSAMYCoreInterface( ls.get(), &robots, &skills, &informationSources );





        systemStatusNodesAndNames = generator.getSystemStatusNodesAndNames();
        generator.addSystemStatusObject( ls.get() );

         std::stringstream msg2;
        msg2 <<"NUMBER OF RELEVANT NODES FOR DESCRIBING SYSTEM STATUS: " << systemStatusNodesAndNames.size() << std::endl << std::endl;
        logger->info(msg2.str());

       for( auto& nodeAndName : systemStatusNodesAndNames ){
            std::stringstream msg2;
            msg2 <<"NSIndex: " << nodeAndName.first.namespaceIndex << "   "
                 << nodeAndName.first.identifier.numeric << "   " << nodeAndName.second;
            logger->info(msg2.str());

            generator.addDataSourcesToSystemStatusVariable( ls.get(), nodeAndName );
        }

        server->init();
    }
}
