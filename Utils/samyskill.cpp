#include "samyskill.h"
#include <iostream>
#include <random> //temporary used for the ids
#include <typeinfo>

std::random_device dev;
std::mt19937 rng(dev());
std::uniform_int_distribution<std::mt19937::result_type> dist1(1,1000000); // distribution in range [1, 1000000]


namespace SAMY{

    void printCRCLSkill( const UA_CRCLSkillDataType* skill){
        std::cout << "Number of commands in Skill: " << skill->cRCLCommandsSize << std::endl;
        std::cout << "Commands: { " << std::endl;

        for(int i=0; i < skill->cRCLCommandsSize; i++){
            std::cout << "\tCommand " << i << ":{" << std::endl;

            int type = skill->cRCLCommands[i].switchField;
            std::cout<< "\t\tCRCLCommandsUnion  type: ";

            switch (type) {
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:
            {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_InitCanonDataType command = skill->cRCLCommands[i].fields.initCanonCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
            }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_EndCanonDataType command = skill->cRCLCommands[i].fields.endCanonCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_MessageDataType command = skill->cRCLCommands[i].fields.messageCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_MoveToDataType command = skill->cRCLCommands[i].fields.moveToCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_MoveScrewDataType command = skill->cRCLCommands[i].fields.moveScrewCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_MoveThroughToDataType command = skill->cRCLCommands[i].fields.moveThroughToCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_DwellDataType command = skill->cRCLCommands[i].fields.dwellCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_ActuateJointsDataType command = skill->cRCLCommands[i].fields.actuateJointsCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_ConfigureJointReportsDataType command = skill->cRCLCommands[i].fields.configureJointReportsCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetDefaultJointPositionsTolerancesDataType command = skill->cRCLCommands[i].fields.setDefaultJointPositionsTolerancesCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_GetStatusDataType command = skill->cRCLCommands[i].fields.getStatusCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_CloseToolChangerDataType command = skill->cRCLCommands[i].fields.closeToolChangerCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_OpenToolChangerDataType command = skill->cRCLCommands[i].fields.openToolChangerCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetRobotParametersDataType command = skill->cRCLCommands[i].fields.setRobotParametersCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetEndeffectorParametersDataType command = skill->cRCLCommands[i].fields.setEndeffectorParametersCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetEndeffectorDataType command = skill->cRCLCommands[i].fields.setEndeffectorCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetTransAccelDataType command = skill->cRCLCommands[i].fields.setTransAccelCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetTransSpeedDataType command = skill->cRCLCommands[i].fields.setTransSpeedCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetRotAccelDataType command = skill->cRCLCommands[i].fields.setRotAccelCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetRotSpeedDataType command = skill->cRCLCommands[i].fields.setRotSpeedCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetAngleUnitsDataType command = skill->cRCLCommands[i].fields.setAngleUnitsCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetEndPoseToleranceDataType command = skill->cRCLCommands[i].fields.setEndPoseToleranceCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetForceUnitsDataType command = skill->cRCLCommands[i].fields.setForceUnitsCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetIntermediatePoseToleranceDataType command = skill->cRCLCommands[i].fields.setIntermediatePoseToleranceCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetLengthUnitsDataType command = skill->cRCLCommands[i].fields.setLengthUnitsCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetMotionCoordinationDataType command = skill->cRCLCommands[i].fields.setMotionCoordinationCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_SetTorqueUnitsDataType command = skill->cRCLCommands[i].fields.setTorqueUnitsCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_StopMotionDataType command = skill->cRCLCommands[i].fields.stopMotionCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_ConfigureStatusReportDataType command = skill->cRCLCommands[i].fields.configureStatusReportCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_EnableSensorDataType command = skill->cRCLCommands[i].fields.enableSensorCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_DisableSensorDataType command = skill->cRCLCommands[i].fields.disableSensorCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_EnableGripperDataType command = skill->cRCLCommands[i].fields.enableGripperCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_DisableGripperDataType command = skill->cRCLCommands[i].fields.disableGripperCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_EnableRobotParameterStatusDataType command = skill->cRCLCommands[i].fields.enableRobotParameterStatusCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND:
                {
                std::cout<< "UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND "<< skill->cRCLCommands[i].switchField << std::endl;

                UA_DisableRobotParameterStatusDataType command = skill->cRCLCommands[i].fields.disableRobotParameterStatusCommand;
                UA_String str2;
                UA_String_init( &str2 );
                UA_print( &command, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE], &str2 );
                std::cout<< str2.data << std::endl;
                break;
                }
            default:
                std::cout<< "ERROR: CRCLCOMMANDSUNION WITH SWITCHFIELD " << type << " COULD NOT BE PRINTED" << std::endl;
                break;
            }
            std::cout<< "\t\t}" << std::endl ;
        }
        std::cout<< "\t}" << std::endl;
    }

    void SAMYSkill::setSkillTypeNodeId( const UA_NodeId& nodeId ){
        skillTypeNodeId = nodeId;
    }
    UA_NodeId SAMYSkill::getSkillTypeNodeId() const{
        return skillTypeNodeId;
    }

    void SAMYSkill::addNormalParameterNodeToSkill( const UA_NodeId& node){
        normalParameterNodes.emplace_back( node );
    }

    void SAMYSkill::addRealTimeParameterNodeToSkill( const UA_NodeId& node){
        realTimeParameterNodes.emplace_back( node );
    }

    UA_NodeId SAMYSkill::getSkillComponentNodeByBrowseName( UA_Server* server, char* browseName,
                                                                            const UA_UInt16 nameSpace) const {
        UA_UInt32 length = 1;
        char *paths[length] = { browseName };
        UA_UInt32 ids[length] = {UA_NS0ID_HASCOMPONENT};
        UA_UInt16 ns[length] = { nameSpace };

        UA_QualifiedName aux;
        UA_QualifiedName_init( &aux );
        UA_Server_readBrowseName( server, skillNodeID, &aux );

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = skillNodeID;
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(ns[i], paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw std::runtime_error("SKILL COMPONENT NODE COULD NOT BE FOUND IN BROWSEPATH");

        return res.targets->targetId.nodeId;
    }

    UA_NodeId SAMYSkill::getSkillParameterSetNode( UA_Server* server ) const{
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        return getSkillComponentNodeByBrowseName( server, "ParameterSet", diNS );
    }

    UA_NodeId SAMYSkill::getSkillParameterSetRealTimeNode( UA_Server* server ) const{
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );
        return getSkillComponentNodeByBrowseName( server, "ParameterSetRealTime", nsSkills );
    }

    /* Give a starting node (ParameterSet/ParameterSetRealTime) and finds and order the corresponding parameter nodes */
    UA_StatusCode SAMYSkill::setSkillParametersFromObjectComponentNodes( UA_Server* server,
                                                                            const UA_NodeId& startNode,
                                                                                 std::vector<UA_NodeId>& nodes ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        /* The browse service does not ensure that the read nodes are ordered in any way. Hence I infer the order based on the
        name and I add them to the vector using [] operator,
        so I need first to create a vector filled with empty UA_NodeIds*/
        nodes.assign( getSkillCommands().size(), UA_NodeId() );

        UA_BrowseDescription bd;
        UA_BrowseDescription_init(&bd);
        bd.nodeId = startNode;
        bd.browseDirection = UA_BROWSEDIRECTION_FORWARD;
        bd.nodeClassMask = UA_BROWSERESULTMASK_ALL;
        bd.referenceTypeId = UA_NODEID_NUMERIC( 0, UA_NS0ID_HASCOMPONENT );

        UA_BrowseResult br = UA_Server_browse(server, 0, &bd);
        UA_StatusCode res = br.statusCode;
        if(res != UA_STATUSCODE_GOOD) {
            UA_BrowseResult_clear(&br);
            throw std::runtime_error ( "ERROR ADDING TO ROBOT SKILL PARAMETER NODES THAT WERE ADDED TO THE SAMYCORE SERVER" );
            return res;
        }

        if( br.referencesSize > 0 )
        {
            UA_QualifiedName paramName;
            UA_QualifiedName_init( &paramName );
            for(int i=0; i < br.referencesSize; i++){
                UA_Server_readBrowseName( server, br.references[i].nodeId.nodeId, &paramName);
                std::string positionAndName = std::move( std::string( (char *)paramName.name.data ) );
                std::string::size_type pos = positionAndName.find('_');
                if (pos != std::string::npos)
                {
                    std::string numerOfCommand = positionAndName.substr(0, pos);
                    nodes[std::stoi(numerOfCommand)] = br.references[i].nodeId.nodeId;

                }else{
                    throw "PARAMETERS NODE IDS COULD NOT BE OBTAINED FOR THE SKILL";
                }
                UA_QualifiedName_clear(&paramName);
            }
        }
        return retVal;
    }

    UA_StatusCode SAMYSkill::setNormalParameterNodesInSkill( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal = setSkillParametersFromObjectComponentNodes( server, getSkillParameterSetNode(server),
                                                                                        normalParameterNodes );
        return retVal;
    }

    UA_StatusCode SAMYSkill::setRealTimeParameterNodesInSkill( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal = setSkillParametersFromObjectComponentNodes( server, getSkillParameterSetRealTimeNode(server),
                                                                                            realTimeParameterNodes );
        return retVal;
    }

    UA_StatusCode SAMYSkill::setParameterNodesInSkill( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal |= setNormalParameterNodesInSkill( server );
        std::cout << getSkillName() << std::endl;
        retVal |= setRealTimeParameterNodesInSkill( server );
        return retVal;
    }

    UA_NodeId AdderParameterNodesToSkillType::findSkillType( const char* skillName ){

        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_UInt32 length = 1;
        char *paths[length] = { const_cast<char*>( skillName ) };
        UA_UInt32 ids[length] = {UA_NS0ID_HASSUBTYPE};

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = UA_NODEID_NUMERIC(nsSkills, CRCLSKILLS_NODE_ID); /* CRCLSkillsNode */
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(nsSkills, paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "PARAMETER VARIABLE TYPE COULD NOT BE FOUND CRCLCOMMANDPARAMETERS TYPES: THE REQUIRED TYPE IS NOT IN THE BROWSEPATH";

        UA_NodeId typeNodeId = res.targets->targetId.nodeId;

        return typeNodeId;
    }

    UA_NodeId AdderParameterNodesToSkillType::findSkillParameterSetObject( const char *skillName ){
        std::cout << "findSkillParameterSetObject!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;

        UA_NodeId initNode = findSkillType( skillName );
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");

        UA_UInt32 length = 1;
        char *paths[length] = { "ParameterSet" };
        UA_UInt32 ids[length] = { UA_NS0ID_HASCOMPONENT };

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = initNode; /* SkillNode */
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(diNS, paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "SkillParameterSetObject COULD NOT BE FOUND IN SKILL TYPE: THE REQUIRED OBJECT NODE IS NOT IN THE BROWSEPATH";

        UA_NodeId objectNodeId = res.targets->targetId.nodeId;

        std::cout << "findSkillParameterSetObject!!!!!!!!!!!!!!!!!!!!!!!!---->FINAL" << std::endl;

        return objectNodeId;
    }

    UA_NodeId AdderParameterNodesToSkillType::findSkillParameterSetRealTimeObject( const char *skillName ){
        std::cout << "findSkillParameterSetRealTimeObject!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;

        UA_UInt32 length = 1;
        char *paths[length] = { "ParameterSetRealTime" };
        UA_UInt32 ids[length] = {UA_NS0ID_HASCOMPONENT};

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = skillTypeNode; /* SkillNode */
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(skillsNS, paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "SkillParameterSetObject COULD NOT BE FOUND IN SKILL TYPE: THE REQUIRED OBJECT NODE IS NOT IN THE BROWSEPATH";

        UA_NodeId objectNodeId = res.targets->targetId.nodeId;

        std::cout << "findSkillParameterSetRealTimeObject!!!!!!!!!!!!!!!!!!!!!!!!------>FINAL" << std::endl;

        return objectNodeId;
    }

    UA_NodeId findCommandParameterType( UA_Server* server, char* parameterTypeName ){

        std::cout << "findCommandParameterType!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;

        UA_Int16 crclNS = UA_Server_addNamespace( server, "https://crcl.org" );

        UA_UInt32 length = 2;
        char *paths[length] = { "CRCLCommandParameters", parameterTypeName };
        UA_UInt32 ids[length] = {UA_NS0ID_HASSUBTYPE, UA_NS0ID_HASSUBTYPE};

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = UA_NODEID_NUMERIC(0, 63); /* BaseDataVariableType node */
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

        return typeNodeId;
    }

    UA_StatusCode AdderParameterNodesToSkillType::addParameterNodesToServer(
                                                    const std::string& parameterTypeName ){

        UA_Int16 crclNS = UA_Server_addNamespace( server, "https://crcl.org" );
        std::string name = std::to_string(numberOfCommandInSkill) + "_" + parameterTypeName;

        UA_NodeId paramNodeId = UA_NODEID_NULL;
        UA_NodeId paramNodeIdRT = UA_NODEID_NULL;

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        UA_VariableAttributes vattr = UA_VariableAttributes_default;
        vattr.description = UA_LOCALIZEDTEXT("", (char*)name.c_str());
        vattr.displayName = UA_LOCALIZEDTEXT("", (char*)name.c_str());

        auto it = crclParameterName_DataTypeNodeId_Map.find( parameterTypeName );
        if( it != crclParameterName_DataTypeNodeId_Map.end()){
            UA_NodeId aux = it->second;
            std::cout << aux.namespaceIndex << "  " << aux.identifier.numeric << std::endl;
            vattr.dataType =  it->second;
        }else{
            throw "PARAMETER FOR SKILL COMMAND NOT FOUND";
        }

        vattr.valueRank = UA_VALUERANK_SCALAR;
        vattr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
/*
        retVal |= UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(skillsNS, 0),
                                  skillParametersSetNode,
                                  UA_NODEID_NUMERIC(0, 47LU),
                                  UA_QUALIFIEDNAME(skillsNS, const_cast<char*>( name.c_str() ) ),
                                  UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, &paramNodeId);
*/
        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_VARIABLE,
        UA_NODEID_NUMERIC(skillsNS, 0),
        skillParametersSetNode,
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(skillsNS, const_cast<char*>( name.c_str() ) ),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), (const UA_NodeAttributes*)&vattr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],
        NULL, &paramNodeId);

        retVal |= UA_Server_addReference( server, paramNodeId,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        retVal |= UA_Server_addNode_finish(server, paramNodeId );

        name = name + "_RealTime";

        UA_VariableAttributes attr2 = UA_VariableAttributes_default;
        attr2.description = UA_LOCALIZEDTEXT("", (char*)name.c_str());
        attr2.displayName = UA_LOCALIZEDTEXT("", (char*)name.c_str());
        auto it2 = crclParameterName_DataTypeNodeId_Map.find( parameterTypeName );
        if( it2 != crclParameterName_DataTypeNodeId_Map.end()){
            attr2.dataType =  it2->second;
        }else{
            throw "PARAMETER FOR SKILL COMMAND NOT FOUND";
        }
        attr2.valueRank = UA_VALUERANK_SCALAR;
        attr2.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
/*
        retVal |= UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(skillsNS, 0),
                                  skillRealTimeParametersSetNode,
                                  UA_NODEID_NUMERIC(0, 47LU),
                                  UA_QUALIFIEDNAME(skillsNS, const_cast<char*>( name.c_str() ) ),
                                  UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr2, NULL, &paramNodeIdRT);
*/

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_VARIABLE,
        UA_NODEID_NUMERIC(skillsNS, 0),
        skillRealTimeParametersSetNode,
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(skillsNS, const_cast<char*>( name.c_str() ) ),
        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), (const UA_NodeAttributes*)&attr2, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],
        NULL, &paramNodeIdRT);

        retVal |= UA_Server_addReference( server, paramNodeIdRT,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        retVal |= UA_Server_addNode_finish(server, paramNodeIdRT );

        return retVal;
    }

    SAMYSkill::SAMYSkill(const std::string& name,
                         const std::vector<UA_CRCLCommandsUnionDataType> &commands_, const UA_NodeId& id):
        skillNodeID( id ),
        skillName( name ),
        commands( commands_ )
    {}

    std::vector<UA_CRCLCommandsUnionDataType> SAMYSkill::skillToCRCLCommands( std::vector<SAMYSkill>& skills ){
        std::vector<UA_CRCLCommandsUnionDataType> skillCommands;
        for(int i=0; i < skills.size(); i++){
            for(int j=0; j < skills[i].commands.size(); j++){
                skillCommands.emplace_back(skills[i].getSkillCommands()[j]);
            }
        }
        return skillCommands;
    }

    SAMYSkill::SAMYSkill(const std::string& name, std::vector<SAMYSkill>& skills, const UA_NodeId& id):
        skillNodeID( id ),
        skillName( name ),
        commands( skillToCRCLCommands( skills ) )
    {}

    std::vector<UA_CRCLCommandsUnionDataType> SAMYSkill::getSkillCommands()  const {
        return commands;
    }

    std::string SAMYSkill::getSkillName() const{
        return skillName;
    }

/*void SAMYSkill::setSkillCommands(const std::vector<UA_CRCLCommandsUnionDataType>& commands_){
    commands = commands_;
}*/

// TODO!!!!!!!!!!!! Check wether a vector of given parameters fits the required parameters types for the skill (whether they allow creating
// the corresponding CRCL Command instance)
/*bool SAMYSkill::checkSkillParameters(const SAMYSkillParameters &commandsParameters) const {
    auto comParmas = commandsParameters.getSkillParameters();
    if(comParmas.size() == commands.size()){
        for(int i=0; comParmas.size(); i++){
            if(std::visit(GetParameterTypeCode{},comParmas[i]) == commands[i].switchField){return false;}
        }
    }else{
        return false;
    }
    return true;
}*/

UA_NodeId SAMYSkill::getSkillNodeID() const{
    return skillNodeID;
}

void SAMYSkill::setSkillNodeID( const UA_NodeId& nodeId){
    skillNodeID = nodeId;
}

bool SAMYSkill::createSkillInstance( UA_Server* server, UA_CRCLSkillDataType* opcuaSkill ){
    CRCLCommandsParametersVariant auxParameter;
    UA_CRCLCommandsUnionDataType *commandsArray = (UA_CRCLCommandsUnionDataType*)UA_Array_new(getSkillCommands().size(),
                                                                &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);

//    const std::lock_guard<std::mutex> lock(skillInstantiationMutex);

    InstantiateCRCLCommandFromServerParameters crclCommandsInstantiator{ server, UA_NODEID_NULL, UA_NODEID_NULL };


/*
    std::unique_ptr< UA_Client, SAMY::SAMYRobot::ClientDeleter > client;
    std::string address = "opc.tcp://localhost:4567";
    UA_DataTypeArray customDataTypes = {NULL, UA_TYPES_CRCL_COUNT, UA_TYPES_CRCL};

    client.reset( UA_Client_new() );
    UA_ClientConfig *cc = UA_Client_getConfig( client.get() );

    UA_ClientConfig_setDefault(cc);
    cc->customDataTypes = &customDataTypes;

    UA_StatusCode retvalAux = UA_Client_connect( client.get(), address.c_str() );

    if( retvalAux != UA_STATUSCODE_GOOD )
        std::cout<< "ERROR CONNECTING TO TEST SERVER" << std::endl;
    else{
        std::cout<< "Succesfully connected to test server" << std::endl;
    }
*/

    for(int j=0; j < commands.size(); j++)
    {
        auto it = crclCommandSwitchfield_ParameterType_Map.find( commands[j].switchField );
        if( it != crclCommandSwitchfield_ParameterType_Map.end()){
            auxParameter = it->second;
            crclCommandsInstantiator.normalParameterNodeId = normalParameterNodes[j];
            crclCommandsInstantiator.realTimeParameterNodeId = realTimeParameterNodes[j];
            UA_CRCLCommandsUnionDataType commandAux = std::move( std::visit(crclCommandsInstantiator, auxParameter) );
/*
            UA_Variant varTest;
            UA_Variant_init( &varTest );
            UA_Variant_setScalar( &varTest, &commandAux, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE] );

            retvalAux |= UA_Client_writeValueAttribute( client.get(), UA_NODEID_NUMERIC(1, 1214), &varTest);

            if( retvalAux != UA_STATUSCODE_GOOD ){
                std::cout<< "ERROR WRITTING CommandsUnionDataType TO TEST SERVER" << std::endl;
            }else{
                std::cout<< "success WRITTING CommandsUnionDataType TO TEST SERVER" << std::endl;
            }
*/
            UA_CRCLCommandsUnionDataType_copy( &commandAux , &commandsArray[j] );
        }else{
            throw std::runtime_error("INSTANCE OF THE SKILL COULD NOT BE CREATED");
        }

        opcuaSkill->cRCLCommands = commandsArray;
        opcuaSkill->cRCLCommandsSize = commands.size();
        opcuaSkill->id = skillNodeID.identifier.numeric;
        opcuaSkill->name = UA_STRING( const_cast<char*>( skillName.c_str() ) );
    }

    /*
    UA_Variant varTest;
    UA_Variant_init( &varTest );
    UA_Variant_setScalar( &varTest, opcuaSkill, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE] );

    retvalAux |= UA_Client_writeValueAttribute( client.get(), UA_NODEID_NUMERIC(1, 1300), &varTest);

    if( retvalAux != UA_STATUSCODE_GOOD ){
        std::cout<< "ERROR WRITTING SAMYSKILL TO TEST SERVER" << std::endl;
    }else{
        std::cout<< "success WRITTING SAMYSKILL TO TEST SERVER" << std::endl;
    }

    std::cout<< "createSkillInstance end"<<std::endl;*/

    return true;
}

}/* namespace SAMY */
