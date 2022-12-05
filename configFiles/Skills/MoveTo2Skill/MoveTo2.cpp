#include <MoveTo2.h>
#include <skillsScriptingAPI.h>
#include <functional>
#include <iostream>


extern "C"{ // This is important, since avoid name mangling of the symbols, so the SAMYCore can find the correct chunck of compiled assembly code

    /* The parameters that receives the function are the parameters exposed in the skill parametersSet of the SAMYCore. 
	When you click "Start" method of the matching skill, the values are read and passed as arguments of this function, and this function 
	is then executed from a thread.
	At the moment, arguments has to be constant pointers to constant data, aka TypeName const * const parameterName 
	(e.g. UA_UInt32 const * const param1). T
	his is due to the fact that libffi has problems handing unions and I cannot pass them by value correctly in a portable way. 
	I will try to fix this but I am not sure is possible.
	What you should do is just at the very beggining of the skill copy them into a value and then doing with them whatever you want. E.g.:

	    void testFunction2( UA_UInt32 const * const param1, UA_UInt32 const * const param2 ){
		UA_UInt32 param1_v = *param1; // You can do whatevery you want with param1_v now
		UA_UInt32 param2_v = *param2; // You can do whatevery you want with param2_v now

	I am planning to write a compiler-preprocessor based on Clang for automating these stuff so you can write code without these artifacts, 
	but for the moment should be fine like this.
    */
    void moveTo2Skill( UA_CRCL_PoseDataType const * const goalPose,
					  UA_CRCL_ParameterSettingDataType const * const moveType ){
        UA_CRCL_PoseDataType pose = *goalPose;
		UA_CRCL_ParameterSettingDataType move = *moveType;
        std::vector<UA_CRCLCommandsParamsSetsUnionDataType> commands;

	    UA_MoveToParamsSetDataType moveTo;
	    moveTo.name = UA_STRING( "UA_MoveToParamsSetDataType" );
            if (std::string((char *)move.parameterValue.data, move.parameterValue.length) == "False"){
                moveTo.moveStraight = false;
            }else{
                moveTo.moveStraight = true;
            }

	    moveTo.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );
	    moveTo.endPosition = pose;
            moveTo.realTimeParameter = false;

	    UA_CRCLCommandsParamsSetsUnionDataType moveToUnion;
	    moveToUnion.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
	    moveToUnion.fields.moveToParamsSet = moveTo;
        
           UA_SetTransSpeedParamsSetDataType speed;
           speed.name = UA_STRING( "SpeedTest" );
           speed.realTimeParameter = false;
           speed.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );
           speed.transSpeed.switchField = UA_CRCL_TRANSSPEEDDATATYPESWITCH_TRANSSPEEDABSOLUTEDATATYPE;
           speed.transSpeed.fields.transSpeedAbsoluteDataType.id = 10;
           speed.transSpeed.fields.transSpeedAbsoluteDataType.name = UA_STRING( "SpeedData" );
           speed.transSpeed.fields.transSpeedAbsoluteDataType.setting = 2.0;

           UA_CRCLCommandsParamsSetsUnionDataType speedUnion;
           speedUnion.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_SETTRANSSPEEDPARAMSSET;
           speedUnion.fields.setTransSpeedParamsSet = speed;

           UA_MessageParamsSetDataType message;
           message.name =  UA_STRING( "Message" );
           message.realTimeParameter = false;
           message.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );
           message.message = UA_STRING( "This is a test message" );

           UA_InitCanonParamsSetDataType c1;
           c1.name = UA_STRING( "UA_InitCanonParamsSetDataType" );
           c1.realTimeParameter = false;
           c1.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );

           UA_CRCLCommandsParamsSetsUnionDataType messageUnion;
           messageUnion.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MESSAGEPARAMSSET;
           messageUnion.fields.messageParamsSet = message;

           commands.push_back(speedUnion);
           commands.push_back(messageUnion);

           for( int i = 0; i < 10; ++i){
               commands.push_back( moveToUnion );
           }
        
           setCommandsBuffer( commands ); /* Sets the buffer of commands to be executed by the robot to be the previously created vector
           of commands "commands". It does not send them yet nor modifies the CommandsBuffer variable in the SAMYCore.
           It sets the value in the internal class representing the robot
           (this way commands can be accumulated without requesting yet the execution). */
           sendCommandsAndWait(); /*Writes the values currently stored for the robot in the CommandsBuffer node of the robot in the SAMYCore,
           sets the node CommandStateBuffer to value PROCESSING_PENDING, and waits until the value of CommandStateBuffer is changed
           (usually by the SAMYPlugin) either to PROCESSING_FAILED or to AWAITING. */
    }
}
