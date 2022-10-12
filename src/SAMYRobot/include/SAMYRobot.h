#ifndef SAMYROBOT_H
#define SAMYROBOT_H

#include <algorithm>
#include <mutex>
#include <memory>
#include <vector>
#include <thread>

#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/client_subscriptions.h>
#include <open62541/plugin/log_stdout.h>
#include <types_crcl_generated_handling.h>
#include <BS_thread_pool.hpp>

#include <namespace_crcl_generated.h>
#include <samyskill.h>
#include <helper.hpp>
#include <helpers.h>

namespace SAMY{
    namespace OPCUA{} // Forward definition

    /* TODO:
     * MAKE CHANGES TO MAKE THIS CLASS THREAD SAFE ( probbably mutex + condition_variable in SAMYRobot, and use these in waitForCommandsBufferDone() and onBufferedCommandsStateChange ).
     * I leave it like this temporaly so Felix can already start working on the SAMYPlugin templates
     */
    struct SAMYRobot{

            SAMYRobot( std::shared_ptr<spdlog::logger> logger_ ):
                logger( logger_ )
            {}

            UA_UInt16 id = 0;
            std::string name = "";
            std::unordered_map< std::uint32_t, std::uint32_t > robotSkillsMap; // Identifier of the skill in the information model to index of the skill in robotSkills
            std::vector< SAMYSkill > robotSkills; // Vector of the skills (later will be "coordinated" with robotSkillsMap)

     //       std::future< void > executingFuture;

            UA_NodeId requested_skill;
            UA_CRCLStatusDataType robot_status;
     //       UA_PubSubIPAddresses ipAddresses;
            std::string address;

            UA_Server * server = nullptr;

            UA_NodeId robotNodeIdInSAMYCore = UA_NODEID_NULL;
            UA_NodeId robotControllerNodeIdInSAMYCore = UA_NODEID_NULL;
            UA_NodeId robotNextSkillNodeId = UA_NODEID_NULL;
            int lastRequestedSkill = 0;
            std::shared_ptr<spdlog::logger> logger;


            UA_NodeId commandsBufferNodeId = UA_NODEID_NULL;
            UA_NodeId commandsBufferStateNodeId = UA_NODEID_NULL;
            UA_NodeId currentStateNodeId = UA_NODEID_NULL;
            UA_NodeId lastTransitionNodeId = UA_NODEID_NULL;
            UA_NodeId executedSkillsNodeId = UA_NODEID_NULL;
            FiniteDeque<UA_NodeId> executedSkills = FiniteDeque<UA_NodeId>{100};
            ProgramState const * currentState = nullptr;
            ProgramTransition const * lastTransition = nullptr;
            std::vector<ProgramState> states;
            std::vector<ProgramTransition> transitions;

            UA_StatusCode initializeRobotSkills( );
            UA_StatusCode initializeRobot( );

            inline void addCommandParamsSetToBuffer( const UA_CRCLCommandsParamsSetsUnionDataType& cp ){ commandsParamsSetsBuffer.emplace_back( cp ); }

            inline void setCommandsBuffer( const std::vector<UA_CRCLCommandsParamsSetsUnionDataType>& buffer ){ commandsParamsSetsBuffer = buffer; }
            inline void appendCommandsBuffer( const std::vector< UA_CRCLCommandsParamsSetsUnionDataType >& commandBuffer ){
                                                                    commandsParamsSetsBuffer.insert( commandsParamsSetsBuffer.end(), commandBuffer.begin(), commandBuffer.end() ); }

            inline void popCommandFromBuffer(){ commandsParamsSetsBuffer.pop_back(); }
            inline void clearCommandsBuffer(){ commandsParamsSetsBuffer.clear(); }

            bool waitForCommandsBufferDone();
           // bool waitForCommandsBufferDone_impl();
            UA_StatusCode writeBufferedCommands();
            UA_StatusCode writeBufferedCommandsState( UA_CRCLCommandsBufferState state );
            UA_StatusCode writeBufferedCommandsAndUpdateState( );

            void setSkillInSkillsMap(int skillVectorIdx, const UA_NodeId& skillNode );

            /* Monitored context callback (callback when monitoring commandsBufferStateNodeId, which is the communication mechanism between SAMYCore and SAMYPlugin */
            static void onBufferedCommandsStateChange(UA_Server *server,
                                                   UA_UInt32 monitoredItemId,
                                                   void *monitoredItemContext,
                                                   const UA_NodeId *nodeId,
                                                   void *nodeContext,
                                                   UA_UInt32 attributeId,
                                                   const UA_DataValue *value);

            inline void setThreadsPool( BS::thread_pool* threadsPool_ ){ threadsPool = threadsPool_; threadsPoolSet = true;  }

            bool executeSkill(uint32_t skillIdx);

            inline void setCommandsBufferState( UA_CRCLCommandsBufferState st ){ commandsBufferState = st; }

    private:
            bool initialized = false;
            std::vector< UA_CRCLCommandsParamsSetsUnionDataType > commandsParamsSetsBuffer; /* The array of CLRC commands parameters that
            will be used for instantiating CRCL commands in the plugin and then robot specific commands */
            UA_CRCLCommandsBufferState commandsBufferState = UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_PENDING;
            bool threadsPoolSet = false;
            BS::thread_pool* threadsPool;

            UA_StatusCode addSkillDataSources( const UA_NodeId& skillNodeID );
            UA_StatusCode addRobotDataSources( );

            static UA_StatusCode readSkillCurrentStateId(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );
            static UA_StatusCode readSkillCurrentState(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );
            static UA_StatusCode readSkillLastTransition(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );
            static UA_StatusCode readSkillLastTransitionId(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );
            static UA_StatusCode readRobotCurrentState(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );
            static UA_StatusCode readRobotCurrentStateId(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );
            static UA_StatusCode readRobotLastTransition(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );
            static UA_StatusCode readRobotLastTransitionId(
                    UA_Server* server,
                    const UA_NodeId* sessionId,
                    void* sessionContext,
                    const UA_NodeId* nodeId,
                    void* nodeContext,
                    UA_Boolean sourceTimeStamp,
                    const UA_NumericRange* range,
                    UA_DataValue* dataValue
            );

        };
}

#endif /* SAMYROBOT_H */
