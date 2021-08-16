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
            for( int i = 0; i < robot->robotSkills.size(); i++ )
            {
                if( robot->robotSkills[i].getSkillNodeID().identifier.numeric == objectId->identifier.numeric ){

                    if (!robot->robotSkills[i].isTransitionAllowed(robot->robotSkills[i].getSkillCurrentState()->getNumber(),
                        ProgramStateNumber::RUNNING, true))
                    {
                        return UA_STATUSCODE_BADSTATENOTACTIVE;
                    }
                    if (!robot->robotSkills[i].transition( server, ProgramStateNumber::RUNNING ))
                    {
                        return UA_STATUSCODE_BADSTATENOTACTIVE;
                    }
                    UA_CRCLSkillDataType skill;
                    UA_CRCLSkillDataType_init( &skill );
                    if( robot->robotSkills[i].createSkillInstance( server, &skill ) ){
                        robot->robotPlan.emplace_back( skill );
                        auto logger = robot->robotSkills[i].getLogger();
                        std::stringstream msg;
                        msg << "ADDED " << skill.name.data << " TO ROBOT " << robot->name.data;
                        logger->info( msg.str() );
                    }else{
                        throw std::runtime_error( "COULD NOT ADD SKILL TO ROBOT PLAN" );
                    }
                    return UA_STATUSCODE_GOOD;
                }
            }
            return UA_STATUSCODE_GOOD;
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
           for( int i = 0; i < robot->robotSkills.size(); i++ )
           {
               if (!robot->robotSkills[i].isTransitionAllowed(robot->robotSkills[i].getSkillCurrentState()->getNumber(),
                   ProgramStateNumber::HALTED, true))
               {
                   return UA_STATUSCODE_BADSTATENOTACTIVE;
               }
               if (!robot->robotSkills[i].transition( server, ProgramStateNumber::HALTED ))
               {
                   return UA_STATUSCODE_BADSTATENOTACTIVE;
               }
               return UA_STATUSCODE_GOOD;
           }
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
           for( int i = 0; i < robot->robotSkills.size(); i++ )
           {
               if (!robot->robotSkills[i].isTransitionAllowed(robot->robotSkills[i].getSkillCurrentState()->getNumber(),
                   ProgramStateNumber::RUNNING, true))
               {
                   return UA_STATUSCODE_BADSTATENOTACTIVE;
               }
               if (!robot->robotSkills[i].transition( server, ProgramStateNumber::RUNNING ))
               {
                   return UA_STATUSCODE_BADSTATENOTACTIVE;
               }
               return UA_STATUSCODE_GOOD;
           }
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
           for( int i = 0; i < robot->robotSkills.size(); i++ )
           {
               if( robot->robotSkills[i].getSkillNodeID().identifier.numeric == objectId->identifier.numeric )
               {
                   if (!robot->robotSkills[i].isTransitionAllowed(robot->robotSkills[i].getSkillCurrentState()->getNumber(),
                       ProgramStateNumber::SUSPENDED, true))
                   {
                       return UA_STATUSCODE_BADSTATENOTACTIVE;
                   }
                   if (!robot->robotSkills[i].transition( server, ProgramStateNumber::SUSPENDED ))
                   {
                       return UA_STATUSCODE_BADSTATENOTACTIVE;
                   }
                   return UA_STATUSCODE_GOOD;
               }
           }
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
        ){
           if (!objectContext)
               return UA_STATUSCODE_BADINTERNALERROR;

           auto* robot = static_cast<SAMYRobot*>(objectContext);
           /* Locks the thread while is adding the skill to the robot */
    //       const std::lock_guard<std::mutex> lock( robot->planMutex );
           for( int i = 0; i < robot->robotSkills.size(); i++ )
           {
               if( robot->robotSkills[i].getSkillNodeID().identifier.numeric == objectId->identifier.numeric )
               {
                   if (!robot->robotSkills[i].isTransitionAllowed(robot->robotSkills[i].getSkillCurrentState()->getNumber(),
                       ProgramStateNumber::READY, true))
                   {
                       return UA_STATUSCODE_BADSTATENOTACTIVE;
                   }
                   if (!robot->robotSkills[i].transition( server, ProgramStateNumber::READY ))
                   {
                       return UA_STATUSCODE_BADSTATENOTACTIVE;
                   }
                   return UA_STATUSCODE_GOOD;
               }
           }
           return UA_STATUSCODE_GOOD;
        }

       UA_StatusCode SAMYCoreInterfaceGenerator::setStartMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot )
       {
           UA_StatusCode retVal = UA_STATUSCODE_GOOD;
            const std::shared_ptr<UA_NodeId> methodNode = UA_Server_getObjectComponentId(server, skillNode,
                                                                                        UA_QUALIFIEDNAME(0, const_cast<char*>("Start")));
            retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &startMethodCallback);

            return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setHaltMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Halt")));
             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &haltMethodCallback);

             return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setResumeMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Resume")));
             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &resumeMethodCallback);

             return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setSuspendMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Suspend")));
             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &suspendMethodCallback);

             return retVal;
        }
        UA_StatusCode SAMYCoreInterfaceGenerator::setResetMethodCallback( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
             const std::shared_ptr<UA_NodeId> methodNode = UA_Server_getObjectComponentId(server, skillNode,
                                                                                         UA_QUALIFIEDNAME(0, const_cast<char*>("Reset")));
             retVal = UA_Server_setMethodNode_callback( server, *(methodNode.get()), &resetMethodCallback);

             return retVal;
        }

} /*SAMY*/
