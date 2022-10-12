#include <helpers.h>

namespace SAMY {

// Rewrite this using reflection!!
void printCRCLSkill( const UA_CRCLCommandsBufferDataType* skill){
    std::cout << "Number of commands in Skill: " << skill->crclCommandsSize << std::endl;
    std::cout << "Commands: { " << std::endl;

    for(int i=0; i < skill->crclCommandsSize; i++){
        std::cout << "\tCommand " << i << ":{" << std::endl;

        int type = skill->crclCommands[i].switchField;
        std::cout<< "\t\tcrclCommandsUnion  type: ";

// Rewrite this with a templated function!!
        switch (type) {
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:
        {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_InitCanonDataType command = skill->crclCommands[i].fields.initCanonCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
        }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_EndCanonDataType command = skill->crclCommands[i].fields.endCanonCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_MessageDataType command = skill->crclCommands[i].fields.messageCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_MoveToDataType command = skill->crclCommands[i].fields.moveToCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_MoveScrewDataType command = skill->crclCommands[i].fields.moveScrewCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_MoveThroughToDataType command = skill->crclCommands[i].fields.moveThroughToCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_DwellDataType command = skill->crclCommands[i].fields.dwellCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_ActuateJointsDataType command = skill->crclCommands[i].fields.actuateJointsCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_ConfigureJointReportsDataType command = skill->crclCommands[i].fields.configureJointReportsCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetDefaultJointPositionsTolerancesDataType command = skill->crclCommands[i].fields.setDefaultJointPositionsTolerancesCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_GetStatusDataType command = skill->crclCommands[i].fields.getStatusCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_CloseToolChangerDataType command = skill->crclCommands[i].fields.closeToolChangerCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_OpenToolChangerDataType command = skill->crclCommands[i].fields.openToolChangerCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetRobotParametersDataType command = skill->crclCommands[i].fields.setRobotParametersCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetEndeffectorParametersDataType command = skill->crclCommands[i].fields.setEndeffectorParametersCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetEndeffectorDataType command = skill->crclCommands[i].fields.setEndeffectorCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetTransAccelDataType command = skill->crclCommands[i].fields.setTransAccelCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetTransSpeedDataType command = skill->crclCommands[i].fields.setTransSpeedCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetRotAccelDataType command = skill->crclCommands[i].fields.setRotAccelCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetRotSpeedDataType command = skill->crclCommands[i].fields.setRotSpeedCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetAngleUnitsDataType command = skill->crclCommands[i].fields.setAngleUnitsCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetEndPoseToleranceDataType command = skill->crclCommands[i].fields.setEndPoseToleranceCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetForceUnitsDataType command = skill->crclCommands[i].fields.setForceUnitsCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetIntermediatePoseToleranceDataType command = skill->crclCommands[i].fields.setIntermediatePoseToleranceCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetLengthUnitsDataType command = skill->crclCommands[i].fields.setLengthUnitsCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetMotionCoordinationDataType command = skill->crclCommands[i].fields.setMotionCoordinationCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_SetTorqueUnitsDataType command = skill->crclCommands[i].fields.setTorqueUnitsCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_StopMotionDataType command = skill->crclCommands[i].fields.stopMotionCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_ConfigureStatusReportDataType command = skill->crclCommands[i].fields.configureStatusReportCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_EnableSensorDataType command = skill->crclCommands[i].fields.enableSensorCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_DisableSensorDataType command = skill->crclCommands[i].fields.disableSensorCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_EnableGripperDataType command = skill->crclCommands[i].fields.enableGripperCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_DisableGripperDataType command = skill->crclCommands[i].fields.disableGripperCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_EnableRobotParameterStatusDataType command = skill->crclCommands[i].fields.enableRobotParameterStatusCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND:
            {
            std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND "<< skill->crclCommands[i].switchField << std::endl;

            UA_DisableRobotParameterStatusDataType command = skill->crclCommands[i].fields.disableRobotParameterStatusCommand;
            UA_String str2;
            UA_String_init( &str2 );
            UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE], &str2 );
            std::cout<< str2.data << std::endl;
            UA_String_deleteMembers(&str2);
            break;
            }
        default:
            std::cout<< "ERROR: crclCommandsUNION WITH SWITCHFIELD " << type << " COULD NOT BE PRINTED" << std::endl;
            break;
        }
        std::cout<< "\t\t}" << std::endl ;
    }
    std::cout<< "\t}" << std::endl;
}

/*
UA_NodeId findCommandParameterType( UA_Server* server, char* parameterTypeName )
{
    UA_Int16 crclNS = UA_Server_addNamespace( server, "https://crcl.org" );

    UA_UInt32 length = 2;
    char *paths[length] = { "CRCLCommandParameters", parameterTypeName };
    UA_UInt32 ids[length] = {UA_NS0ID_HASSUBTYPE, UA_NS0ID_HASSUBTYPE};

    UA_BrowsePath browsePath;
    UA_BrowsePath_init(&browsePath);
    browsePath.startingNode = UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE);
    browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
    browsePath.relativePath.elementsSize = length;

    for(size_t i = 0; i < length; i++) {
        UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
        elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
        elem->targetName = UA_QUALIFIEDNAME_ALLOC(crclNS, paths[i]);
    }

    UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
    if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
        throw "PARAMETER VARIABLE TYPE COULD NOT BE FOUND CRCLCOMMANDPARAMETERS TYPES: THE REQUIRED TYPE IS NOT IN THE BROWSEPATH";

    UA_NodeId typeNodeId = res.targets->targetId.nodeId;

    UA_BrowsePathResult_deleteMembers(&res);
    UA_BrowsePath_deleteMembers(&browsePath);

    return typeNodeId;
}
*/

}
