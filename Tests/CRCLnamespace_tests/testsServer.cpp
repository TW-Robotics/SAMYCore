#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch_all.hpp>

#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
/* Files namespace_foo_flt_generated.h and namespace_foo_flt_generated.c are created from FooFlt.NodeSet2.xml in the
 * /src_generated directory by CMake */

#include "SAMYRobot.h"

#include <thread>

#include <signal.h>

#include <yaml_parser.h>

#include <samyskill.h>

#include <iostream>

#include <chrono>

#include <open62541/plugin/log_stdout.h>

#include "serverGenerator.h";

/*
TEST_CASE("Test main", "[TestTag]"){

    UA_Boolean running = true;

        UA_Server* server = UA_Server_new();
        UA_ServerConfig *config = UA_Server_getConfig(server);
        UA_ServerConfig_setMinimal(config, 4841, NULL);

        SAMY::Parsers::SkillsParser skillsParser;
        REQUIRE( 1 ==  skillsParser.parse( "../Skills.yaml" ) );
        std::vector<SAMY::SAMYSkill>* skills = skillsParser.getParsedSkills();

        SAMY::Parsers::RobotsConfigurationParser robotsParser;
        REQUIRE( 1 == robotsParser.parse( "../RobotsConfiguration.yaml", *skills ));
        std::vector<SAMY::SAMYRobot>* robots = robotsParser.getParsedRobots();

        UA_StatusCode retVal = SAMY::ServerGenerator::generateSAMYCoreServer( server, robots, skills );
        REQUIRE( retVal == 0 );

        std::thread SAMYCoreOPCUAInterface(UA_Server_run, server, &running);
        SAMYCoreOPCUAInterface.detach();

        std::this_thread::sleep_for(std::chrono::milliseconds( 3000 ));
        running = false;

        UA_Server_delete( server );

        std::cout << "END TEST 1 ---------------------------------------------------------------------------" << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds( 1000 ));

        REQUIRE( retVal == 0);
}

TEST_CASE("Server for testing nodes addition", "[TestTag]"){
        UA_Boolean running = true;

        UA_Server* server = UA_Server_new();
        UA_ServerConfig *config = UA_Server_getConfig(server);
        UA_ServerConfig_setMinimal(config, 4841, NULL);

        REQUIRE( 0 == namespace_crcl_generated( server ) );

        std::vector<UA_NodeId> typesNodesVector;
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE].typeId );
        typesNodesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE].typeId );

        std::vector<UA_NodeId> outputNodesVector( typesNodesVector.size(), UA_NODEID_NULL );
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        UA_VariableAttributes vattr = UA_VariableAttributes_default;
        vattr.description = UA_LOCALIZEDTEXT("", "testNode");
        vattr.displayName = UA_LOCALIZEDTEXT("", "testNode");
        vattr.valueRank = UA_VALUERANK_SCALAR;
        vattr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

        for(int i = 0; i < typesNodesVector.size(); i++ ){

        UA_NodeId_init( &vattr.dataType );
                vattr.dataType = typesNodesVector[i];

                    retVal |= UA_Server_addVariableNode( server,
                                                         UA_NODEID_NUMERIC(1, 0),
                                                         UA_NODEID_NUMERIC( 0, UA_NS0ID_OBJECTSFOLDER ),
                                                         UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT ),
                                                         UA_QUALIFIEDNAME(0, "testNode" ),
                                                         UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                                         vattr, NULL, &(outputNodesVector[i])
                                                         );
                    REQUIRE( retVal == 0 );
                }

        std::thread SAMYCoreOPCUAInterface(UA_Server_run, server, &running);
        SAMYCoreOPCUAInterface.detach();

        std::this_thread::sleep_for(std::chrono::milliseconds( 3000 ));
        SAMYCoreOPCUAInterface.detach();

        running = false;

        UA_Server_delete( server );

        std::cout << "END TEST 2 ---------------------------------------------------------------------------" << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds( 1000 ));

        REQUIRE( retVal == 0);
}
*/



UA_Boolean running = true;
static void stopHandler(int sign){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

TEST_CASE("Server for testing clients against it", "[ServerTest]"){

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server* server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, 4841, NULL);

    SAMY::Parsers::SkillsParser skillsParser;
    REQUIRE( 1 ==  skillsParser.parse( "../Skills.yaml" ) );
    std::vector<SAMY::SAMYSkill>* skills = skillsParser.getParsedSkills();

    SAMY::Parsers::RobotsConfigurationParser robotsParser;
    REQUIRE( 1 == robotsParser.parse( "../RobotsConfiguration.yaml", *skills ));
    std::vector<SAMY::SAMYRobot>* robots = robotsParser.getParsedRobots();

    UA_StatusCode retVal = SAMY::ServerGenerator::generateSAMYCoreServer( server, robots, skills );
    REQUIRE( retVal == 0 );

    std::vector<UA_DataType> typesVector;
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE] );
    typesVector.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE] );

    std::vector<UA_NodeId> outputNodesVector( typesVector.size(), UA_NODEID_NULL );

    UA_VariableAttributes vattr = UA_VariableAttributes_default;
    vattr.valueRank = UA_VALUERANK_SCALAR;
    vattr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    /* Adds one variable node for each command */
    for(int i = 0; i < typesVector.size(); i++ ){
        UA_LocalizedText_init( &vattr.description );
        UA_LocalizedText_init( &vattr.displayName );
        vattr.description = UA_LOCALIZEDTEXT("", const_cast<char*>( typesVector[i].typeName )  );
        vattr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>( typesVector[i].typeName ) );
        UA_NodeId_init( &vattr.dataType );
        vattr.dataType = typesVector[i].typeId;

        retVal |= UA_Server_addVariableNode( server,
                                                     UA_NODEID_NUMERIC(1, i+1000),
                                                     UA_NODEID_NUMERIC( 0, UA_NS0ID_OBJECTSFOLDER ),
                                                     UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT ),
                                                     UA_QUALIFIEDNAME(0, const_cast<char*>( typesVector[i].typeName ) ),
                                                     UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                                     vattr, NULL, &(outputNodesVector[i])
                                                     );
            REQUIRE( retVal == 0 );
    }

    /* Add one CRCLCommandsUnion variable node by each command, so all the commands can be tested */
    for(int i = 0; i < typesVector.size(); i++ ){
        UA_LocalizedText_init( &vattr.description );
        UA_LocalizedText_init( &vattr.displayName );
        vattr.description = UA_LOCALIZEDTEXT("", const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE].typeName )  );
        vattr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE].typeName ) );
        UA_NodeId_init( &vattr.dataType );
        vattr.dataType = UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE].typeId;

        retVal |= UA_Server_addVariableNode( server,
                                                     UA_NODEID_NUMERIC(1, i+1200),
                                                     UA_NODEID_NUMERIC( 0, UA_NS0ID_OBJECTSFOLDER ),
                                                     UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT ),
                                                     UA_QUALIFIEDNAME(0, const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE].typeName ) ),
                                                     UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                                     vattr, NULL, NULL
                                                     );
            REQUIRE( retVal == 0 );
    }

    /* Add a CRCLSkill variable node */
    UA_LocalizedText_init( &vattr.description );
    UA_LocalizedText_init( &vattr.displayName );
    vattr.description = UA_LOCALIZEDTEXT("", const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE].typeName )  );
    vattr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE].typeName ) );
    UA_NodeId_init( &vattr.dataType );
    vattr.dataType = UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE].typeId;

    retVal |= UA_Server_addVariableNode( server,
                                                 UA_NODEID_NUMERIC(1, 1300),
                                                 UA_NODEID_NUMERIC( 0, UA_NS0ID_OBJECTSFOLDER ),
                                                 UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT ),
                                                 UA_QUALIFIEDNAME(0, const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE].typeName ) ),
                                                 UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                                 vattr, NULL, NULL
                                                 );
    REQUIRE( retVal == 0 );

    /* Add a SAMYRobot variable node */
    UA_LocalizedText_init( &vattr.description );
    UA_LocalizedText_init( &vattr.displayName );
    vattr.description = UA_LOCALIZEDTEXT("", const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE].typeName )  );
    vattr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE].typeName ) );
    UA_NodeId_init( &vattr.dataType );
    vattr.dataType = UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE].typeId;

    retVal |= UA_Server_addVariableNode( server,
                                                 UA_NODEID_NUMERIC(1, 1400),
                                                 UA_NODEID_NUMERIC( 0, UA_NS0ID_OBJECTSFOLDER ),
                                                 UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT ),
                                                 UA_QUALIFIEDNAME(0, const_cast<char*>( UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE].typeName ) ),
                                                 UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                                 vattr, NULL, NULL
                                                 );
    REQUIRE( retVal == 0 );


    /* Add a Command Parameters variable node */

    std::vector<UA_DataType> typesVectorParams;
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE] );
    typesVectorParams.emplace_back( UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE] );


    for(int i = 0; i < typesVectorParams.size(); i++ ){
        UA_LocalizedText_init( &vattr.description );
        UA_LocalizedText_init( &vattr.displayName );
        vattr.description = UA_LOCALIZEDTEXT("", const_cast<char*>( typesVectorParams[i].typeName )  );
        vattr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>( typesVectorParams[i].typeName ) );
        UA_NodeId_init( &vattr.dataType );
        vattr.dataType = typesVectorParams[i].typeId;

        retVal |= UA_Server_addVariableNode( server,
                                                     UA_NODEID_NUMERIC(1, i+1500),
                                                     UA_NODEID_NUMERIC( 0, UA_NS0ID_OBJECTSFOLDER ),
                                                     UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT ),
                                                     UA_QUALIFIEDNAME(0, const_cast<char*>( typesVectorParams[i].typeName ) ),
                                                     UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                                     vattr, NULL, NULL
                                                     );
       REQUIRE( retVal == 0 );
    }


    std::thread SAMYCoreOPCUAInterface(UA_Server_run, server, &running);
    SAMYCoreOPCUAInterface.detach();

    while( running && retVal == UA_STATUSCODE_GOOD ){
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    UA_Server_delete( server );

    std::cout << "END TEST 3 ---------------------------------------------------------------------------" << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds( 1000 ));

    REQUIRE( retVal == 0);
}


