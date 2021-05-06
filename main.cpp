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

#include "namespace_kuka_iiwa_generated.h"


UA_Boolean running = true;
static void stopHandler(int sign){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

static void
stateCallback(UA_Client *client, UA_SecureChannelState channelState,
              UA_SessionState sessionState, UA_StatusCode recoveryStatus) {
    switch(channelState) {
    case UA_SECURECHANNELSTATE_CLOSED:
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "The SAMYCore is disconnected from the plugin");
        break;
    case UA_SECURECHANNELSTATE_HEL_SENT:
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Waiting for ack");
        break;
    case UA_SECURECHANNELSTATE_OPN_SENT:
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Waiting for OPN Response");
        break;
    case UA_SECURECHANNELSTATE_OPEN:
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "A SecureChannel to the Plugin is open");
        break;
    default:
        break;
    }

    switch(sessionState) {
    case UA_SESSIONSTATE_ACTIVATED: {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "A session with the Plugin is activated");
        }
        break;
    case UA_SESSIONSTATE_CLOSED:
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Session with the Plugin disconnected");
        break;
    default:
        break;
    }
}

static void
sendNextSkillInstanceToRobot(UA_Client *client, UA_UInt32 subId, void *subContext,
                           UA_UInt32 monId, void *monContext, UA_DataValue *value){

    UA_Boolean lastSkill_succeded = *(UA_Boolean*)value->value.data;
    if(lastSkill_succeded == true){
        SAMY::SAMYRobot* robot = (SAMY::SAMYRobot*)monContext;
        UA_SAMYRobotDataType robotOPCUA;

        robotOPCUA.id = robot->id;
        robotOPCUA.name = robot->name;

        UA_PubSubIPAddresses pubSubAddresses;
        pubSubAddresses.iPAddress_Skill = UA_STRING("None");
        pubSubAddresses.iPAddress_Status = UA_STRING("None");
        robotOPCUA.iPAddresses = pubSubAddresses;

        robotOPCUA.requested_Skill.cRCLCommands = robot->robotPlan[robot->lastRequestedSkill].cRCLCommands;
        robotOPCUA.requested_Skill.cRCLCommandsSize = robot->robotPlan[robot->lastRequestedSkill].cRCLCommandsSize;
        robotOPCUA.requested_Skill.id = robot->robotPlan[robot->lastRequestedSkill].id;;
        robotOPCUA.requested_Skill.name = robot->robotPlan[robot->lastRequestedSkill].name;

    for (int i=0; i<robotOPCUA.requested_Skill.cRCLCommandsSize; i++){
        UA_CRCLCommandsUnionDataType* val = &(robotOPCUA.requested_Skill.cRCLCommands[i]);
        printf("\n readSAMYRobot, COMMAND NUMBER %i \n", i);
        printf("\n readSAMYRobot, switchValue %i \n", val->switchField);

        if(val->switchField == 0){
        printf("\n switchValue empty \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND){
            printf("\n readSAMYRobot, UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND");
            UA_InitCanonDataType* canon = (UA_InitCanonDataType*)&(val->fields);
            printf("\n %i \n", canon->id);
            printf("\n %i \n", canon->commandID);
            printf("\n \n \n \n \n \n \n");

        }else if( val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND){
            UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
            printf("\n UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND");

            printf("\n %i \n", moveTo->id);
            printf("\n %i \n", moveTo->commandID);
            printf("\n %f \n", moveTo->endPosition.point.x);
            printf("\n %f \n", moveTo->endPosition.point.y);
            printf("\n %f \n", moveTo->endPosition.point.z);
            printf("\n %f \n", moveTo->endPosition.xAxis.i);
            printf("\n %f \n", moveTo->endPosition.xAxis.j);
            printf("\n %f \n", moveTo->endPosition.xAxis.k);
            printf("\n %f \n", moveTo->endPosition.zAxis.i);
            printf("\n %f \n", moveTo->endPosition.zAxis.j);
            printf("\n %f \n", moveTo->endPosition.zAxis.k);
            std::cout<< moveTo->name.data << std::endl;

            printf("\n \n \n \n \n \n \n");

        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND){
            printf("\n UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND");

            UA_SetTransSpeedDataType* setTransSpeed = (UA_SetTransSpeedDataType*)&(val->fields);
            std::cout<< setTransSpeed->name.data << std::endl;
            std::cout<< setTransSpeed->transSpeed.fields.transSpeedAbsoluteDataType.name.data << std::endl;
            std::cout<< setTransSpeed->transSpeed.fields.transSpeedAbsoluteDataType.setting << std::endl;
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND){
            printf("\n UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND");

            UA_SetEndeffectorDataType* setEndeffector = (UA_SetEndeffectorDataType*)&(val->fields);
            std::cout<< setEndeffector->name.data << std::endl;
            std::cout<< setEndeffector->setting.fraction << std::endl;

        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND){
            printf("\n readSAMYRobot, UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND");
            UA_EndCanonDataType* canon = (UA_EndCanonDataType*)&(val->fields);
            printf("\n %i \n", canon->id);
            printf("\n %i \n", canon->commandID);
            printf("\n \n \n \n \n \n \n");
        }
    }

        UA_Variant myVar;
        UA_Variant_init(&myVar);
        UA_Variant_setScalar(&myVar, &robotOPCUA,  &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);

        UA_StatusCode retVal = UA_Client_writeValueAttribute(robot->client,
                                                                robot->SAMYRobotVariableNodeId, &myVar);

        if(retVal == UA_STATUSCODE_GOOD){
            std::cout<<"ROBOT CORRECTLY WRITTEN IN SAMYPLUGIN"<< std::endl;
            robot->lastRequestedSkill = robot->lastRequestedSkill + 1;

            UA_Boolean skillFinished = false;

            UA_Variant var;
            UA_Variant_init(&var);
            UA_Variant_setScalar(&var, &skillFinished,  &UA_TYPES[UA_TYPES_BOOLEAN]);

            retVal = UA_Client_writeValueAttribute(robot->client, UA_NODEID_STRING(1, "lastSkill_succeeded"), &var);
        }else{
            std::cout<<"ROBOT FAILED WHEN WRITTING IN SAMYPLUGIN"<< std::endl;
        }
    }else{
        std::cout<<"PREVIOUS SKILL EXECUTION FAILED!!!"<< std::endl;
    }
}

UA_StatusCode createConnectionToPlugin(SAMY::SAMYRobot* robot, const char* address){
    UA_DataTypeArray customDataTypes = {NULL, UA_TYPES_CRCL_COUNT, UA_TYPES_CRCL};

    robot->client = UA_Client_new();
    UA_ClientConfig *cc = UA_Client_getConfig(robot->client);

    UA_ClientConfig_setDefault(cc);
    cc->customDataTypes = &customDataTypes;
    cc->stateCallback = stateCallback;

    UA_StatusCode retval = UA_Client_connect(robot->client, address);

    UA_CreateSubscriptionRequest request;
    UA_CreateSubscriptionRequest_init(&request);
    request.requestedPublishingInterval = 20.0;
    request.requestedLifetimeCount = 1000000;
    request.requestedMaxKeepAliveCount = 10;
    request.maxNotificationsPerPublish = 0;
    request.publishingEnabled = true;
    request.priority = 0;

    UA_CreateSubscriptionResponse response = UA_Client_Subscriptions_create(robot->client, request, NULL, NULL, NULL);

    UA_MonitoredItemCreateRequest requestMon;
    UA_MonitoredItemCreateRequest_init(&requestMon);
    requestMon.itemToMonitor.nodeId = UA_NODEID_STRING(1, "lastSkill_succeeded");
    requestMon.itemToMonitor.attributeId = UA_ATTRIBUTEID_VALUE;
    requestMon.monitoringMode = UA_MONITORINGMODE_REPORTING;
    requestMon.requestedParameters.samplingInterval = 10.0;
    requestMon.requestedParameters.discardOldest = true;
    requestMon.requestedParameters.queueSize = 1;

    UA_MonitoredItemCreateResult monResponse =
         UA_Client_MonitoredItems_createDataChange(robot->client, response.subscriptionId,
                                                  UA_TIMESTAMPSTORETURN_BOTH, requestMon,
                                                  (void*)robot, sendNextSkillInstanceToRobot, NULL);

    if(monResponse.statusCode == UA_STATUSCODE_GOOD)
    {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Monitoring %s, id %u",
                    (char*)robot->name.data,monResponse.monitoredItemId);
    }else{
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Error Monitoring %s, id %u",
                    (char*)robot->name.data,monResponse.monitoredItemId);
    }

    return retval;
}

int main(int argc, char** argv){

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server* server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, 4840, NULL);

    UA_Server* externalInformationServer = UA_Server_new();
    UA_ServerConfig *configExternalInfoServer = UA_Server_getConfig(externalInformationServer);
    UA_ServerConfig_setMinimal(config, 4841, NULL);

    // std::thread serverThread(UA_Server_run, externalInformationServer, &running);
    // serverThread.detach();

    bool correctParsing = true;

    SAMY::Parsers::SkillsParser skillsParser;
    correctParsing |= skillsParser.parse( "../Skills.yaml" );
    std::vector<SAMY::SAMYSkill>* skills = skillsParser.getParsedSkills();

    SAMY::Parsers::RobotsConfigurationParser robotsParser;
    correctParsing |= robotsParser.parse( "../RobotsConfiguration.yaml", *skills );
    std::vector<SAMY::SAMYRobot>* robots = robotsParser.getParsedRobots();

    if( correctParsing == false )
        return 0;

    for(int i=0; i < skills->size(); i++){
        std::cout << "Number of commands in skill " << (*skills)[i].getSkillName() << "  :  " << (*skills)[i].getSkillCommands().size() << std::endl;
        std::cout << "Skill NodeTypeID " << (*skills)[i].getSkillTypeNodeId().identifier.numeric << std::endl;
    }
    std::cout << "Number of parsed skills: " << skills->size() << std::endl;

    std::cout << "Robots size: " << robots->size() << std::endl;

    for(int i=0; i < robots->size(); i++){
        std::cout << "Robot skills: " << std::endl;
        for(int j=0; j < (*robots)[i].robotSkills.size(); j++){
            std::cout << "Skill: " << (*robots)[i].robotSkills[j].getSkillName() << "  Number of commands: "
                      << (*robots)[i].robotSkills[j].getSkillCommands().size() << std::endl;
        }
    }

    /* generateSAMYCoreServer
     * Create the SAMYCore OPC UA Server exposing the system:
     * create nodes from fixed nodesets (OPCUA DI and Robotics, Fortiss DI and Robotics, extended CRCL),
     * add the robots, add the skill types, add the skills instances to the robots, and adds the required nodes
     * to the external information server so skills requests can "accumulate" (plans) and their parameters can
     * be read at execution time from external information server if required.
     * TODO:  Additional information can be included for the robot descriptions (Fortiss KUKA Iiwa example)
     */
    UA_StatusCode retVal = SAMY::ServerGenerator::generateSAMYCoreServer( server, robots, skills );
    if( retVal != UA_STATUSCODE_GOOD ){
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the fixed information nodesets. "
        "Check previous output for any error.");
        retVal = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/
        std::thread SAMYCoreOPCUAInterface(UA_Server_run, server, &running);
        SAMYCoreOPCUAInterface.detach();

        while(running){
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }

    UA_Server_delete( server );
    UA_Server_delete( externalInformationServer );

    return retVal == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
