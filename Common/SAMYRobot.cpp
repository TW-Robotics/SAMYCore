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

        robot->SAMYRobotVariableNodeId = UA_NODEID_NUMERIC( 1, 111 );
        robot->ipAddresses.iPAddress_Skill = UA_STRING( "Not set!" );
        robot->ipAddresses.iPAddress_Status = UA_STRING( "Not set!" );

        UA_SAMYRobotDataType opcuaRobot;
        opcuaRobot.active = UA_TRUE;
        opcuaRobot.id = robot->id;
        opcuaRobot.iPAddresses = robot->ipAddresses;
        UA_String_copy( &robot->name, &opcuaRobot.name );
        opcuaRobot.online = UA_TRUE;
        opcuaRobot.requested_Skill_Success = UA_TRUE;

        UA_copy( &(robot->robotPlan[robot->lastRequestedSkill]),
                                &opcuaRobot.requested_Skill,
                                        &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE] );

    //    SAMY::printCRCLSkill( &opcuaRobot.requested_Skill );

        UA_String str2;
        UA_String_init( &str2 );
        UA_print( &opcuaRobot.requested_Skill, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE], &str2 );
        std::cout<< str2.data << std::endl;

        UA_Variant var;
        UA_Variant_init( &var );
        UA_Variant_setScalar( &var, &opcuaRobot, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE] );
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        retVal |= UA_Client_writeValueAttribute(robot->client.get(), UA_NODEID_STRING(1, "Robot"), &var);


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
