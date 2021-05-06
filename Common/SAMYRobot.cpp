#include "SAMYRobot.h"

namespace SAMY {
/*
    UA_StatusCode SAMYRobot::addSkillToRobotPlan( UA_Server* server, const UA_NodeId& serverCallerSkill )
    {
            auto it = std::find( robotSkills.begin(), robotSkills.end(), [&serverCallerSkill]( const SAMYSkill& skill){
            UA_NodeId aux = std::move( skill.getSkillNodeID() );
            return aux.identifier.numeric == serverCallerSkill.identifier.numeric;
        });

        if( it != robotSkills.end() ){
            int index = std::distance(robotSkills.begin(), it);
            robotPlan.emplace_back( std::move( robotSkills[index].createSkillInstance( server ) ) );
        }
    }
*/
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
