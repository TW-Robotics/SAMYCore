#include <skillsScriptingAPI.h>
#include <SAMYRobot.h>
#include <samycore.h>


extern "C"{
    /* Adds a CRCL Command ParamsSet to the agent commandsParamsSets buffer */
    bool bufferCommand( const UA_CRCLCommandsParamsSetsUnionDataType& commandParams ){
        SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
        SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
        robot->addCommandParamsSetToBuffer( commandParams );
        return true;
    }
    bool setCommandsBuffer( const std::vector< UA_CRCLCommandsParamsSetsUnionDataType >& commandsBuffer ){
        SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
        SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
        robot->setCommandsBuffer( commandsBuffer );
        return true;
    }
    bool appendCommandsBuffer( const std::vector< UA_CRCLCommandsParamsSetsUnionDataType >& commandBuffer ){
        SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
        SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
        robot->appendCommandsBuffer( commandBuffer );
        return true;
    }

    /* Pops the last CRCLCommand from the commands buffer */
    bool popCommand(){
        SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
        SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
        robot->popCommandFromBuffer();
        return true;
    }

    bool clearCommands(){
        SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
        SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
        robot->clearCommandsBuffer();
        return true;
    }

    /* This must be automatically added to the syntax tree at the end of each code block in the scripted skill */
    bool sendBufferedCommands()
    {
        SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
        SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
        UA_StatusCode retval = robot->writeBufferedCommands();
        if( retval == UA_STATUSCODE_GOOD )
            return true;
        else
            return false;
    }

    /* This must be automatically added to the syntax tree at the end of each code block in the scripted skill. */
    bool waitForBufferExecution(){
        SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
        SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
        return robot->waitForCommandsBufferDone();
    }

    bool sendCommandsAndWait(){
            SAMY::SAMYCore& core = SAMY::SAMYCore::getInstance();
            SAMY::SAMYRobot* robot = core.getRobotFromThreadID( std::this_thread::get_id() );
            UA_StatusCode retval = robot->writeBufferedCommandsAndUpdateState();
            if( retval == UA_STATUSCODE_GOOD ){
                return robot->waitForCommandsBufferDone();
            }else
                return false;
    }

    /* We stop processing the scripted skill until we get feedback from the agent */
    void launchParallelSkill( void *robotTarget ){

    }

}
