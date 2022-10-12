#include <Skill_1.h>
#include <skillsScriptingAPI.h>

#include <functional>
#include <iostream>


extern "C"{

    void testFunction2( UA_UInt32 const * const param1, UA_UInt32 const * const param2 ){
        UA_UInt32 param1_v = *param1;
        UA_UInt32 param2_v = *param2;
        std::vector<UA_CRCLCommandsParamsSetsUnionDataType> commands;

	std::cout << "<---------------- BEGIN testFunction2 ---------->" << std::endl;
	std::cout << *param1 << std::endl;
	std::cout << *param2 << std::endl;

	SAMYCoreAPI_dummy();

	std::cout << "Setting PENDING state" << std::endl;
        SAMYCoreAPI_dummyCommandState_Pending();

	std::cout << "Before Waiting 1" << std::endl;
	SAMYCoreAPI_dummyWait();

	std::cout << "Setting RUNNING state" << std::endl;
	SAMYCoreAPI_dummyCommandState_Running();

	std::cout << "Before Waiting 2" << std::endl;
	SAMYCoreAPI_dummyWait();

        std::cout << "<---------------- TESTING ACTUAL API ---------->" << std::endl;

        if( param1_v == 0 ){
	    
	    UA_InitCanonParamsSetDataType c1;
	    c1.name = UA_STRING( "UA_InitCanonParamsSetDataType" );
	    c1.realTimeParameter = false;
	    c1.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );

	    UA_CRCLCommandsParamsSetsUnionDataType commandsUnion1;
	    commandsUnion1.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_INITCANONPARAMSSET;
	    commandsUnion1.fields.initCanonParamsSet = c1;



	    UA_CRCL_PoseDataType pose1;
	    pose1.id = 743;
	    pose1.name = UA_STRING( "POSE1" );
	    pose1.point.id = 87;
	    pose1.point.name = UA_STRING( "POINT NAME" );
	    pose1.point.x = 0.987;
	    pose1.point.y = 6.543;
	    pose1.point.z = 1.467;
	    pose1.xAxis.id = 8711;
	    pose1.xAxis.name = UA_STRING( "xVector NAME" );
	    pose1.xAxis.i = 0.987;
	    pose1.xAxis.j = 6.543;
	    pose1.xAxis.k = 1.467;
	    pose1.zAxis.id = 8764;
	    pose1.zAxis.name = UA_STRING( "zVector NAME" );
	    pose1.zAxis.i = 5.987;
	    pose1.zAxis.j = 8.543;
	    pose1.zAxis.k = 121.467;

	    UA_MoveToParamsSetDataType c2;
	    c2.name = UA_STRING( "UA_MoveToParamsSetDataType" );
	    c2.realTimeParameter = false;
	    c2.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );
	    c2.endPosition = pose1;
	    c2.moveStraight = true;

	    UA_CRCLCommandsParamsSetsUnionDataType commandsUnion2;
	    commandsUnion2.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
	    commandsUnion2.fields.moveToParamsSet = c2;



	    commands.emplace_back( commandsUnion1 );
	    commands.emplace_back( commandsUnion2 );

        }else{
		std::cout << "Error executing skill" << std::endl;
	}

        setCommandsBuffer( commands );
        sendCommandsAndWait();

	std::cout << "<---------------- FINISHING testFunction2 ---------->" << std::endl;
    }

    void testFunction( UA_UInt32 param1, UA_UInt32 param2 ){
	std::cout << "<- testFunction ->" << std::endl;
    }

}
