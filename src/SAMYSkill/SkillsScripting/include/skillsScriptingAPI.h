#pragma once

#include <types_crcl_generated.h>

#include <SAMYRobot.h>
#include <samycore.h>


    extern "C" {
        /*FOR WINDOWS I WILL HAVE TO ADD __declspec(dllexport)*/
        void SAMYCoreAPI_dummy(){
            std::cout << "Called SAMYCoreAPI_dummy!!!!!!!!!!!" << std::endl;
            SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
            auto* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
            std::cout << "Robot name print from call to SAMYCore API from scripted skill:  " << robot->name << std::endl;
        }

        void SAMYCoreAPI_dummyCommandState_Running(){
            std::cout << "Called SAMYCoreAPI_dummyCommandState_Running!!!!!!!!!!!" << std::endl;
            SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
            auto* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
            robot->writeBufferedCommandsState( UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_RUNNING );
        }

        void SAMYCoreAPI_dummyCommandState_Pending(){
            std::cout << "Called SAMYCoreAPI_dummyCommandState_Pending!!!!!!!!!!!" << std::endl;
            SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
            auto* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
            robot->writeBufferedCommandsState( UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_PENDING );
        }

        void SAMYCoreAPI_dummyCommandState_Awaiting(){
            std::cout << "Called SAMYCoreAPI_dummyCommandState_Awaiting!!!!!!!!!!!" << std::endl;
            SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
            auto* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
            robot->writeBufferedCommandsState( UA_CRCLCOMMANDSBUFFERSTATE_AWAITING );
        }

        void SAMYCoreAPI_dummyCommandState_Failed(){
            std::cout << "Called SAMYCoreAPI_dummyCommandState_Failed!!!!!!!!!!!" << std::endl;
            SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
            auto* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
            robot->writeBufferedCommandsState( UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_FAILED );
        }

        void SAMYCoreAPI_dummyWait(){
            std::cout << "Called SAMYCoreAPI_dummyWait!!!!!!!!!!!" << std::endl;
            SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
            auto* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
            robot->waitForCommandsBufferDone();
        }




        /* Adds a CRCL Command ParamsSet to the agent commandsParamsSets buffer */
        bool bufferCommand( const UA_CRCLCommandsParamsSetsUnionDataType& commandParams  );
        bool setCommandsBuffer( const std::vector< UA_CRCLCommandsParamsSetsUnionDataType >& commandsBuffer );
        bool addCommandsBuffer( const std::vector< UA_CRCLCommandsParamsSetsUnionDataType >& commandBuffer );

        /* Adds multiple CRCL Commands ParamsSets to the agent commandsParamsSets buffer */
  //      void bufferCRCLCommandsArray( const UA_CRCLCommandsParamsSetsUnionDataType* const commandParams, size_t length );

        bool popCommand( ); // Pops the last CRCLCommand from the commands buffer
        bool clearCommands( );
        bool sendBufferedCommands( ); /* This must be automatically added to the syntax tree at the end of each code block in the scripted skill */
        bool waitForBufferExecution( ); /* This must be automatically added to the syntax tree at the end of each code block in the scripted skill. */
        bool sendCommandsAndWait(); /* Sends the buffered commands and wait for them to be executed */

        //  Use the dynamic casting (CastersRegister) stuff here
     //   template< typename T >
     //   T readNode( const UA_NodeId& node ){

//        }

     //   template< typename T >
 //       void writeNode( const UA_NodeId& targetNode, const std::string& typeName, void* data ){

  //      }

    }
        /* We stop processing the scripted skill until we get feedback from the agent */
   //     void launchParallelSkill(  );
   //  template and return using forr casting the Reflection registry     void readNode( const UA_NodeId& node );
   //       void writeNode( const UA_NodeId& targetNode, const UA_NodeId& dataTypeNode, void* data );
