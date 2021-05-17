#include "SAMYRobot.h"

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
            /*

            UA_InitCanonDataType* canon = (UA_InitCanonDataType*)&(val->fields);
            printf("\n %i \n", canon->id);
            printf("\n %i \n", canon->commandID);
            printf("\n \n \n \n \n \n \n");*/

        }else if( val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND){
            UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
            printf("\n UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND");
/*
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
*/
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND){
            printf("\n UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND");

            UA_SetTransSpeedDataType* setTransSpeed = (UA_SetTransSpeedDataType*)&(val->fields);
/*            std::cout<< setTransSpeed->name.data << std::endl;
            std::cout<< setTransSpeed->transSpeed.fields.transSpeedAbsoluteDataType.name.data << std::endl;
            std::cout<< setTransSpeed->transSpeed.fields.transSpeedAbsoluteDataType.setting << std::endl;*/
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND){
            printf("\n UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND");

            UA_SetEndeffectorDataType* setEndeffector = (UA_SetEndeffectorDataType*)&(val->fields);
            /*
            std::cout<< setEndeffector->name.data << std::endl;
            std::cout<< setEndeffector->setting.fraction << std::endl;
*/
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND){
            printf("\n readSAMYRobot, UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND");
            UA_EndCanonDataType* canon = (UA_EndCanonDataType*)&(val->fields);
    /*        printf("\n %i \n", canon->id);
            printf("\n %i \n", canon->commandID);
            printf("\n \n \n \n \n \n \n"); */
        }
    }

        UA_Variant myVar;
        UA_Variant_init(&myVar);
        UA_Variant_setScalar(&myVar, &robotOPCUA,  &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);

        UA_StatusCode retVal = UA_Client_writeValueAttribute(robot->client.get(),
                                                                robot->SAMYRobotVariableNodeId, &myVar);

        if(retVal == UA_STATUSCODE_GOOD){
            std::cout<<"ROBOT CORRECTLY WRITTEN IN SAMYPLUGIN |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<< std::endl;
            robot->lastRequestedSkill = robot->lastRequestedSkill + 1;

            UA_Boolean skillFinished = false;

            UA_Variant var;
            UA_Variant_init(&var);
            UA_Variant_setScalar(&var, &skillFinished,  &UA_TYPES[UA_TYPES_BOOLEAN]);

            retVal = UA_Client_writeValueAttribute(robot->client.get(), UA_NODEID_STRING(1, "lastSkill_succeeded"), &var);
        }else{
            std::cout<<"ROBOT FAILED WHEN WRITTING IN SAMYPLUGIN  |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<< std::endl;
        }
    }else{
        std::cout<<"PREVIOUS SKILL EXECUTION FAILED!!!"<< std::endl;
    }
}

namespace SAMY {

UA_StatusCode SAMYRobot::createConnectionToPlugin( ){
    UA_DataTypeArray customDataTypes = {NULL, UA_TYPES_CRCL_COUNT, UA_TYPES_CRCL};

    client.reset( UA_Client_new() );
    UA_ClientConfig *cc = UA_Client_getConfig( client.get() );

    UA_ClientConfig_setDefault(cc);
    cc->customDataTypes = &customDataTypes;
    cc->stateCallback = stateCallback;

    UA_StatusCode retval = UA_Client_connect( client.get(), address.c_str() );

    UA_CreateSubscriptionRequest request;
    UA_CreateSubscriptionRequest_init(&request);
    request.requestedPublishingInterval = 20.0;
    request.requestedLifetimeCount = 1000000;
    request.requestedMaxKeepAliveCount = 10;
    request.maxNotificationsPerPublish = 0;
    request.publishingEnabled = true;
    request.priority = 0;

    UA_CreateSubscriptionResponse response = UA_Client_Subscriptions_create(client.get(), request, NULL, NULL, NULL);

    UA_MonitoredItemCreateRequest requestMon;
    UA_MonitoredItemCreateRequest_init(&requestMon);
    requestMon.itemToMonitor.nodeId = UA_NODEID_STRING(1, "lastSkill_succeeded");
    requestMon.itemToMonitor.attributeId = UA_ATTRIBUTEID_VALUE;
    requestMon.monitoringMode = UA_MONITORINGMODE_REPORTING;
    requestMon.requestedParameters.samplingInterval = 10.0;
    requestMon.requestedParameters.discardOldest = true;
    requestMon.requestedParameters.queueSize = 1;

    UA_MonitoredItemCreateResult monResponse =
         UA_Client_MonitoredItems_createDataChange(client.get(), response.subscriptionId,
                                                  UA_TIMESTAMPSTORETURN_BOTH, requestMon,
                                                  (void*)this, sendNextSkillInstanceToRobot, NULL);

    if(monResponse.statusCode == UA_STATUSCODE_GOOD)
    {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Monitoring %s, id %u",
                    (char*)name.data,monResponse.monitoredItemId);
    }else{
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Error Monitoring %s, id %u",
                    (char*)name.data,monResponse.monitoredItemId);
    }

    return retval;
}

}

#if pubsub
void configureSAMYRobotPublisherUADP(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount){
    robot->publisher.switchField = PublisherTypeSwitch_PUBLISHER_UADP;
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , robot->ipAddresses.iPAddress_Skill};
    configurePublisherUADP(&(robot->publisher.publishers.publisherUADP), robot->id, robot->name,
                                publishingInterval, keyFrameCount, networkAddressUrl, robot->SAMYRobotVariableNodeId);
}

#ifdef UA_ENABLE_JSON_ENCODING

void configureSAMYRobotPublisherMQTT_WithoutLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                                UA_Boolean JSONEncoding)
{
    robot->publisher.switchField = PublisherTypeSwitch_PUBLISHER_MQTT;
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , robot->ipAddresses.iPAddress_Skill};
    configurePublisherMQTT_WithoutLogin(&(robot->publisher.publishers.publisherMQTT), robot->id, robot->name,
                                            publishingInterval, keyFrameCount, networkAddressUrl,
                                                robot->SAMYRobotVariableNodeId, JSONEncoding);
}
void configureSAMYRobotPublisherMQTT_WithLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                         UA_Boolean JSONEncoding, MQTT_LoginData login)
{
    robot->publisher.switchField = PublisherTypeSwitch_PUBLISHER_MQTT;
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , robot->ipAddresses.iPAddress_Skill};
    configurePublisherMQTT_WithLogin(&(robot->publisher.publishers.publisherMQTT), robot->id, robot->name,
                                      publishingInterval, keyFrameCount, networkAddressUrl,
                                        robot->SAMYRobotVariableNodeId, JSONEncoding, login);
}
#else
void configureSAMYRobotPublisherMQTT_WithoutLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount)
{
    robot->publisher.switchField = PublisherTypeSwitch_PUBLISHER_MQTT;
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , robot->ipAddresses.iPAddress_Skill};
    configurePublisherMQTT_WithoutLogin(&(robot->publisher.publishers.publisherMQTT), robot->id, robot->name,
                                            publishingInterval, keyFrameCount, networkAddressUrl,
                                                robot->SAMYRobotVariableNodeId);
}
void configureSAMYRobotPublisherMQTT_WithLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                            MQTT_LoginData login)
{
    robot->publisher.switchField = PublisherTypeSwitch_PUBLISHER_MQTT;
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , robot->ipAddresses.iPAddress_Skill};
    configurePublisherMQTT_WithLogin(&(robot->publisher.publishers.publisherMQTT), robot->id, robot->name,
                                      publishingInterval, keyFrameCount, networkAddressUrl,
                                        robot->SAMYRobotVariableNodeId, login);
}
#endif

UA_StatusCode addSAMYRobotPublisherToServer(UA_Server* server, SAMYRobot* robot){
    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    if(robot->publisher.switchField == PublisherTypeSwitch_PUBLISHER_UADP){
        retval |= addPublisherUADP_ToServer(server, &(robot->publisher.publishers.publisherUADP));
    }else{
        retval |= addPublisherMQTT_ToServer(server, &(robot->publisher.publishers.publisherMQTT));
    }
    return retval;
}

void configureSAMYRobotSubscriberUADP(SAMYRobot* robot){
    robot->subscriber.switchField = SubscriberTypeSwitch_SUBSCRIBER_UADP;
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , robot->ipAddresses.iPAddress_Status};
    configureSubscriberUADP(&(robot->subscriber.subscribers.subscriberUADP), robot->id, robot->name, networkAddressUrl);
}

UA_StatusCode addSAMYRobotSubscriberToServer(UA_Server* server, SAMYRobot* robot){
    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    if(robot->subscriber.switchField == SubscriberTypeSwitch_SUBSCRIBER_UADP){
        retval |= addSubscriberUADP_ToServer(server, &(robot->subscriber.subscribers.subscriberUADP));
    }else{
        printf("MQTT SUBSCRIBER Not implemented yet!!");
    }
    return retval;
}
#endif
