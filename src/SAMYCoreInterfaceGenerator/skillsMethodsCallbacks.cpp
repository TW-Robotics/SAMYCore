#include <samycoreInterfaceGenerator.h>

namespace SAMY{

       static UA_StatusCode startMethodCallback(
                UA_Server* server,
                const UA_NodeId* sessionId,
                void* sessionHandle,
                const UA_NodeId* methodId,
                void* methodContext,
                const UA_NodeId* objectId,
                void* objectContext,
                size_t inputSize,
                const UA_Variant* input,
                size_t outputSize,
                UA_Variant* output
        ){
            if (!objectContext)
                return UA_STATUSCODE_BADINTERNALERROR;

            auto* robot = static_cast<SAMYRobot*>(objectContext);

            /* Locks the thread while is adding the skill to the robot */
     //       const std::lock_guard<std::mutex> lock( robot->planMutex );

            std::uint32_t reqSkillIdx =  robot->robotSkillsMap.at( objectId->identifier.numeric );

            // triggerTransitionEvent( server, from, eventType );
                if ( !robot->robotSkills[reqSkillIdx].isTransitionAllowed(robot->robotSkills[reqSkillIdx].getSkillCurrentState()->getNumber(),
                    ProgramStateNumber::RUNNING, true))
                {
                    return UA_STATUSCODE_BADSTATENOTACTIVE;
                }

                UA_Variant var;
                UA_NodeId aux = robot->robotSkills[reqSkillIdx].getSkillNodeID();
                UA_Variant_setScalar( &var, &aux, &UA_TYPES[UA_TYPES_NODEID]);
                UA_Server_writeValue(server, robot->robotNextSkillNodeId, var );
                if (!robot->robotSkills[reqSkillIdx].transition( server, ProgramStateNumber::RUNNING ))
                {
                    return UA_STATUSCODE_BADSTATENOTACTIVE;
                }

                robot->lastTransition = robot->robotSkills[reqSkillIdx].getSkillLastTransition();
                robot->currentState = robot->robotSkills[reqSkillIdx].getSkillCurrentState();

                robot->executedSkills.addElement( robot->robotSkills[reqSkillIdx].getSkillNodeID() );

                UA_Variant_init(&var);

                auto arr = (UA_NodeId*)UA_Array_new(robot->executedSkills.getSize(), &UA_TYPES[UA_TYPES_NODEID]);
                int i = 0;
                const auto& deque = robot->executedSkills.getDeque();
                for ( auto node : deque ) {
                    arr[i] = node;
                    i++;
                }

                UA_Variant_setArray( &var, arr, robot->executedSkills.getSize(), &UA_TYPES[UA_TYPES_NODEID]);
                UA_StatusCode retVal = UA_Server_writeValue( server, robot->executedSkillsNodeId, var );

                robot->executeSkill( reqSkillIdx ); // This will add an execution task to the threads pool

                return retVal;
        }

       static UA_StatusCode haltMethodCallback(
                UA_Server* server,
                const UA_NodeId* sessionId,
                void* sessionHandle,
                const UA_NodeId* methodId,
                void* methodContext,
                const UA_NodeId* objectId,
                void* objectContext,
                size_t inputSize,
                const UA_Variant* input,
                size_t outputSize,
                UA_Variant* output
        ){
           if (!objectContext)
               return UA_STATUSCODE_BADINTERNALERROR;

           auto* robot = static_cast<SAMYRobot*>(objectContext);
           /* Locks the thread while is adding the skill to the robot */
    //       const std::lock_guard<std::mutex> lock( robot->planMutex );

           auto it =  robot->robotSkillsMap.find( objectId->identifier.numeric );
           if( it == robot->robotSkillsMap.end() )
               return UA_STATUSCODE_BADOUTOFRANGE;

           std::uint32_t reqSkillIdx = it->second;

           if (!robot->robotSkills[reqSkillIdx].isTransitionAllowed(robot->robotSkills[reqSkillIdx].getSkillCurrentState()->getNumber(),
               ProgramStateNumber::HALTED, true))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           if (!robot->robotSkills[reqSkillIdx].transition( server, ProgramStateNumber::HALTED ))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           robot->lastTransition = robot->robotSkills[reqSkillIdx].getSkillLastTransition();
           robot->currentState = robot->robotSkills[reqSkillIdx].getSkillCurrentState();
           return UA_STATUSCODE_GOOD;
        }

       static UA_StatusCode resumeMethodCallback(
                UA_Server* server,
                const UA_NodeId* sessionId,
                void* sessionHandle,
                const UA_NodeId* methodId,
                void* methodContext,
                const UA_NodeId* objectId,
                void* objectContext,
                size_t inputSize,
                const UA_Variant* input,
                size_t outputSize,
                UA_Variant* output
        ){
           if (!objectContext)
               return UA_STATUSCODE_BADINTERNALERROR;

           auto* robot = static_cast<SAMYRobot*>(objectContext);
           /* Locks the thread while is adding the skill to the robot */
    //       const std::lock_guard<std::mutex> lock( robot->planMutex );

           auto it =  robot->robotSkillsMap.find( objectId->identifier.numeric );
           if( it == robot->robotSkillsMap.end() )
               return UA_STATUSCODE_BADOUTOFRANGE;

           std::uint32_t reqSkillIdx = it->second;

           if (!robot->robotSkills[reqSkillIdx].isTransitionAllowed(robot->robotSkills[reqSkillIdx].getSkillCurrentState()->getNumber(),
               ProgramStateNumber::RUNNING, true))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           if (!robot->robotSkills[reqSkillIdx].transition( server, ProgramStateNumber::RUNNING ))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           robot->lastTransition = robot->robotSkills[reqSkillIdx].getSkillLastTransition();
           robot->currentState = robot->robotSkills[reqSkillIdx].getSkillCurrentState();
           return UA_STATUSCODE_GOOD;
        }

       static UA_StatusCode suspendMethodCallback(
                UA_Server* server,
                const UA_NodeId* sessionId,
                void* sessionHandle,
                const UA_NodeId* methodId,
                void* methodContext,
                const UA_NodeId* objectId,
                void* objectContext,
                size_t inputSize,
                const UA_Variant* input,
                size_t outputSize,
                UA_Variant* output
        ){
           if (!objectContext)
               return UA_STATUSCODE_BADINTERNALERROR;

           auto* robot = static_cast<SAMYRobot*>(objectContext);
           /* Locks the thread while is adding the skill to the robot */
    //       const std::lock_guard<std::mutex> lock( robot->planMutex );

           auto it =  robot->robotSkillsMap.find( objectId->identifier.numeric );
           if( it == robot->robotSkillsMap.end() )
               return UA_STATUSCODE_BADOUTOFRANGE;

           std::uint32_t reqSkillIdx = it->second;

           if (!robot->robotSkills[reqSkillIdx].isTransitionAllowed(robot->robotSkills[reqSkillIdx].getSkillCurrentState()->getNumber(),
               ProgramStateNumber::SUSPENDED, true))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           if (!robot->robotSkills[reqSkillIdx].transition( server, ProgramStateNumber::SUSPENDED ))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           robot->lastTransition = robot->robotSkills[reqSkillIdx].getSkillLastTransition();
           robot->currentState = robot->robotSkills[reqSkillIdx].getSkillCurrentState();
           return UA_STATUSCODE_GOOD;
       }

       static UA_StatusCode resetMethodCallback(
                UA_Server* server,
                const UA_NodeId* sessionId,
                void* sessionHandle,
                const UA_NodeId* methodId,
                void* methodContext,
                const UA_NodeId* objectId,
                void* objectContext,
                size_t inputSize,
                const UA_Variant* input,
                size_t outputSize,
                UA_Variant* output
        )
       {
           if (!objectContext)
               return UA_STATUSCODE_BADINTERNALERROR;

           auto* robot = static_cast<SAMYRobot*>(objectContext);
           /* Locks the thread while is adding the skill to the robot */
    //       const std::lock_guard<std::mutex> lock( robot->planMutex );


           auto it =  robot->robotSkillsMap.find( objectId->identifier.numeric );
           if( it == robot->robotSkillsMap.end() )
               return UA_STATUSCODE_BADOUTOFRANGE;

           std::uint32_t reqSkillIdx = it->second;

           if (!robot->robotSkills[reqSkillIdx].isTransitionAllowed(robot->robotSkills[reqSkillIdx].getSkillCurrentState()->getNumber(),
               ProgramStateNumber::READY, true))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           if (!robot->robotSkills[reqSkillIdx].transition( server, ProgramStateNumber::READY ))
           {
               return UA_STATUSCODE_BADSTATENOTACTIVE;
           }
           robot->lastTransition = robot->robotSkills[reqSkillIdx].getSkillLastTransition();
           robot->currentState = robot->robotSkills[reqSkillIdx].getSkillCurrentState();
           return UA_STATUSCODE_GOOD;
        }

       UA_StatusCode SAMYCoreInterfaceGenerator::setStartMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot )
       {
           UA_StatusCode retVal = UA_STATUSCODE_GOOD;
            const std::shared_ptr<UA_NodeId> methodNode = SAMY::OPCUA::UA_Server_getObjectComponentId(server, skillNode,
                                                                                        UA_QUALIFIEDNAME(0, const_cast<char*>("Start")));

            retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &startMethodCallback);

            return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setHaltMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot )
        {
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = SAMY::OPCUA::UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Halt")));
             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &haltMethodCallback);

             return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setResumeMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = OPCUA::UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Resume")));

             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &resumeMethodCallback);

             return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setSuspendMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = SAMY::OPCUA::UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Suspend")));
             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &suspendMethodCallback);

             return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setResetMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = SAMY::OPCUA::UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Reset")));
             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &resetMethodCallback);

             return retVal;
        }

} /*SAMY*/
