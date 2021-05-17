#ifndef SAMYROBOT_H
#define SAMYROBOT_H

#include "crcl_nodeids.h"
#include "namespace_crcl_generated.h"
#include "samyskill.h"
#include <algorithm>
#include <mutex>
#include <memory>

#ifndef PubSub
#include <vector>
#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/client_subscriptions.h>
#include <open62541/plugin/log_stdout.h>
#else
#include <Publisher.h>
#include <Subscriber.h>
#endif

namespace SAMY{
    struct SAMYSkill;
}
    #ifndef PubSub
namespace SAMY{

    struct SAMYRobot{
        struct ClientDeleter {
          void operator()(UA_Client* client) { UA_Client_delete(client); }
        };

        /*The same fields than the SAMYRobot modelled in OPC UA (UA_SAMYRobot)*/
        UA_UInt16 id = 0;
        UA_String name = UA_STRING_NULL;
        std::vector<SAMY::SAMYSkill> robotSkills;
        UA_CRCLSkillDataType requested_skill;
        UA_CRCLStatusDataType robot_status;
        UA_PubSubIPAddresses ipAddresses;
        std::string address;
        std::vector<UA_CRCLSkillDataType> robotPlan;
        UA_UInt32 lastRequestedSkill = 0;
        UA_NodeId SAMYRobotVariableNodeId = UA_NODEID_NULL;
        std::unique_ptr< UA_Client, ClientDeleter > client;

        UA_StatusCode createConnectionToPlugin( );
  //      std::shared_ptr<spdlog::logger> logger;
  //      std::mutex planMutex;
    };

}

    #else
namespace SAMY{

    typedef struct {
        /*The same fields than the SAMYRobot modelled in OPC UA (UA_SAMYRobot)*/
        UA_UInt16 id;
        UA_String name;
        std::vector<SAMYSkill> robotSkills;
        UA_CRCLSkillDataType requested_skill;
        UA_Boolean requested_Skill_success;
        UA_Boolean active;
        UA_Boolean online;
        UA_CRCLStatusDataType robot_status;
        UA_PubSubIPAddresses ipAddresses;
        /*The same fields than the SAMYRobot modelled in OPC UA (UA_SAMYRobot)*/
        UA_NodeId SAMYRobotVariableNodeId;
        Publisher publisher; /*Publisher is a Union of Publisher_UADP and Publisher_MQTT*/
        Subscriber subscriber;
    } SAMYRobot;


    void configureSAMYRobotPublisherUADP(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount);
    #ifdef UA_ENABLE_JSON_ENCODING
    void configureSAMYRobotPublisherMQTT_WithoutLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                                    UA_Boolean JSONEncoding);
    void configureSAMYRobotPublisherMQTT_WithLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                                UA_Boolean JSONEncoding, MQTT_LoginData login);
    #else
    void configureSAMYRobotPublisherMQTT_WithoutLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount);
    void configureSAMYRobotPublisherMQTT_WithLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                                MQTT_LoginData login);
    #endif

    UA_StatusCode addSAMYRobotPublisherToServer(UA_Server *server, SAMYRobot* robot);

    void configureSAMYRobotSubscriberUADP(SAMYRobot* robot);
    UA_StatusCode addSAMYRobotSubscriberToServer(UA_Server *server, SAMYRobot* robot);
}
    #endif

#endif /* SAMYROBOT_H */
