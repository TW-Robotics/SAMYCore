#ifndef SAMYSKILL_H
#define SAMYSKILL_H

#include <vector>
#include "crcl_nodeids.h"
#include "namespace_crcl_generated.h"
#include "SAMYRobot.h"
#include <variant>
#include <exception>
#include <stdexcept>
#include <type_traits>
#include <iostream>
#include <map>
#include <mutex>

#define CRCLSKILLS_NODE_ID 9999

namespace SAMY{

/* Variant for dealing with the polymorphy of the parameters required by the polymorphic CRCL commands.
* Since polymorphy "cannot be sent over the network", I use a union of CRCL commands for that purpose.
* Due to this I use a similar approach with the parameters required by the commands, to keep symmetry between
* SAMYCore code and open62541 code. Due to this I do not use inheritance or alike construcs, but
* the pattern I use for polymorphism is a c++17 variant equipped with different visitors.*/
using CRCLCommandsParametersVariant = std::variant<std::monostate,
                                           UA_InitCanonParametersSetDataType,
                                           UA_EndCanonParametersSetDataType,
                                           UA_MessageParametersSetDataType,
                                           UA_MoveToParametersSetDataType,
                                           UA_MoveScrewParametersSetDataType,
                                           UA_MoveThroughToParametersSetDataType,
                                           UA_DwellParametersSetDataType,
                                           UA_ActuateJointsParametersSetDataType,
                                           UA_ConfigureJointReportsParametersSetDataType,
                                           UA_SetDefaultJointPositionsTolerancesParametersSetDataType,
                                           UA_GetStatusParametersSetDataType,
                                           UA_CloseToolChangerParametersSetDataType,
                                           UA_OpenToolChangerParametersSetDataType,
                                           UA_SetRobotParametersParametersSetDataType,
                                           UA_SetEndeffectorParametersParametersSetDataType,
                                           UA_SetEndeffectorParametersSetDataType,
                                           UA_SetTransAccelParametersSetDataType,
                                           UA_SetTransSpeedParametersSetDataType,
                                           UA_SetRotAccelParametersSetDataType,
                                           UA_SetRotSpeedParametersSetDataType,
                                           UA_SetAngleUnitsParametersSetDataType,
                                           UA_SetEndPoseToleranceParametersSetDataType,
                                           UA_SetForceUnitsParametersSetDataType,
                                           UA_SetIntermediatePoseToleranceParametersSetDataType,
                                           UA_SetLengthUnitsParametersSetDataType,
                                           UA_SetMotionCoordinationParametersSetDataType,
                                           UA_SetTorqueUnitsParametersSetDataType,
                                           UA_StopMotionParametersSetDataType,
                                           UA_ConfigureStatusReportParametersSetDataType,
                                           UA_EnableSensorParametersSetDataType,
                                           UA_DisableSensorParametersSetDataType,
                                           UA_EnableGripperParametersSetDataType,
                                           UA_DisableGripperParametersSetDataType,
                                           UA_EnableRobotParameterStatusParametersSetDataType,
                                           UA_DisableRobotParameterStatusParametersSetDataType
                                           >;

/* This map connects the numbering in the union of the Server and the Parameters of the SAMYCore, so we can
* modify the (XML) OPC UA CRCL Information Model without problem, since automatically matches CRCLCommandsUnion
*  numbering and parameters types, so we do not have to hardcode anything. */
static const std::map<int, CRCLCommandsParametersVariant> crclCommandSwitchfield_ParameterType_Map = {
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND , CRCLCommandsParametersVariant( UA_InitCanonParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND , CRCLCommandsParametersVariant( UA_EndCanonParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND , CRCLCommandsParametersVariant( UA_MessageParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND , CRCLCommandsParametersVariant( UA_MoveToParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND , CRCLCommandsParametersVariant( UA_MoveScrewParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND , CRCLCommandsParametersVariant( UA_MoveThroughToParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND , CRCLCommandsParametersVariant( UA_DwellParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND , CRCLCommandsParametersVariant( UA_ActuateJointsParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND ,
                           CRCLCommandsParametersVariant( UA_ConfigureJointReportsParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND ,
                           CRCLCommandsParametersVariant( UA_SetDefaultJointPositionsTolerancesParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND , CRCLCommandsParametersVariant( UA_GetStatusParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND , CRCLCommandsParametersVariant( UA_CloseToolChangerParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND , CRCLCommandsParametersVariant( UA_OpenToolChangerParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND , CRCLCommandsParametersVariant( UA_SetRobotParametersParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND ,
                           CRCLCommandsParametersVariant( UA_SetEndeffectorParametersParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND , CRCLCommandsParametersVariant( UA_SetEndeffectorParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND , CRCLCommandsParametersVariant( UA_SetTransAccelParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND , CRCLCommandsParametersVariant( UA_SetTransSpeedParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND , CRCLCommandsParametersVariant( UA_SetRotAccelParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND , CRCLCommandsParametersVariant( UA_SetRotSpeedParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND , CRCLCommandsParametersVariant( UA_SetAngleUnitsParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND ,
                           CRCLCommandsParametersVariant( UA_SetEndPoseToleranceParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND , CRCLCommandsParametersVariant( UA_SetForceUnitsParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND ,
                           CRCLCommandsParametersVariant( UA_SetIntermediatePoseToleranceParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND , CRCLCommandsParametersVariant( UA_SetLengthUnitsParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND ,
                           CRCLCommandsParametersVariant( UA_SetMotionCoordinationParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND , CRCLCommandsParametersVariant( UA_SetTorqueUnitsParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND , CRCLCommandsParametersVariant( UA_StopMotionParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND ,
                           CRCLCommandsParametersVariant( UA_ConfigureStatusReportParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND , CRCLCommandsParametersVariant( UA_EnableSensorParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND , CRCLCommandsParametersVariant( UA_DisableSensorParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND , CRCLCommandsParametersVariant( UA_EnableGripperParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND , CRCLCommandsParametersVariant( UA_DisableGripperParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND ,
                           CRCLCommandsParametersVariant( UA_EnableRobotParameterStatusParametersSetDataType() )},
   { UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND,
                           CRCLCommandsParametersVariant( UA_DisableRobotParameterStatusParametersSetDataType() )}
};

/* Visitor for the CRCLCommandParametersVariant instantiating a specific UA_CRCLCommandsUnionDataType
* for a skill command given the corresponding parameter. It reads the corresponding parameter in the server
* and generates the UA_CRCLCommandsUnionDataType with the read values. */
/* TODO: DEAL WITH COMMAND IDS AND NAMES!!!*/
struct InstantiateCRCLCommandFromServerParameters{
   InstantiateCRCLCommandFromServerParameters( UA_Server* server_,
                                                       const UA_NodeId& normalNode,
                                                           const UA_NodeId& realTimeNode ):
       server( server_ ),
       normalParameterNodeId( normalNode ),
       realTimeParameterNodeId( realTimeNode ){}
public:
   UA_NodeId realTimeParameterNodeId;
   UA_NodeId normalParameterNodeId;


   UA_CRCLCommandsUnionDataType operator()(const std::monostate& param)const{
       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_NONE;
       return command;
   }
   UA_CRCLCommandsUnionDataType operator()(const UA_InitCanonParametersSetDataType& param)const{
       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND;
       command.fields.initCanonCommand.cRCLRealTimeCommand = UA_FALSE;
       command.fields.initCanonCommand.cRCLRealTimeParameterNode = UA_NODEID_NULL;
       command.fields.initCanonCommand.commandID = 0;
       command.fields.initCanonCommand.guard = NULL;
       command.fields.initCanonCommand.guardSize = 0;
       command.fields.initCanonCommand.id = 12345;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.initCanonCommand.name);

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()(const UA_EndCanonParametersSetDataType& param)const{
       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND;
       command.fields.endCanonCommand.cRCLRealTimeCommand = UA_FALSE;
       command.fields.endCanonCommand.cRCLRealTimeParameterNode = UA_NODEID_NULL;
       command.fields.endCanonCommand.commandID = 0;
       command.fields.endCanonCommand.guard = NULL;
       command.fields.endCanonCommand.guardSize = 0;
       command.fields.endCanonCommand.id = 12345;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.endCanonCommand.name);

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_MessageParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_MessageParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND;
       command.fields.messageCommand.cRCLRealTimeCommand = UA_FALSE;
       command.fields.messageCommand.cRCLRealTimeParameterNode = UA_NODEID_NULL;
       command.fields.messageCommand.commandID = 0;
       command.fields.messageCommand.guard = NULL;
       command.fields.messageCommand.guardSize = 0;
       command.fields.messageCommand.id = 12345;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.messageCommand.name);

       command.fields.messageCommand.message = std::move( params.cRCLMessage );
       command.fields.messageCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.messageCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_MoveToParametersSetDataType& params )const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_MoveToParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND;
       command.fields.moveToCommand.commandID = 0;
       command.fields.moveToCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.moveToCommand.name);
       command.fields.moveToCommand.guard = NULL;
       command.fields.moveToCommand.guardSize = 0;

       command.fields.moveToCommand.moveStraight = std::move(  params.cRCLMoveStraight );
       command.fields.moveToCommand.endPosition = std::move( params.cRCLEndPosition );
       command.fields.moveToCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.moveToCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_MoveScrewParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_MoveScrewParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND;
       command.fields.moveScrewCommand.commandID = 0;
       command.fields.moveScrewCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.moveScrewCommand.name);
       command.fields.moveScrewCommand.guard = NULL;
       command.fields.moveScrewCommand.guardSize = 0;

       command.fields.moveScrewCommand.axialDistanceFree = params.cRCLAxialDistanceFree;
       command.fields.moveScrewCommand.axialDistanceScrew = params.cRCLAxialDistanceScrew;
       command.fields.moveScrewCommand.axisPoint = std::move( params.cRCLAxisPoint );
       command.fields.moveScrewCommand.startPosition = std::move( params.cRCLStartPosition );
       command.fields.moveScrewCommand.turn = params.cRCLTurn;

       command.fields.moveScrewCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.moveScrewCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_MoveThroughToParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_MoveThroughToParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND;
       command.fields.moveThroughToCommand.commandID = 0;
       command.fields.moveThroughToCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.moveThroughToCommand.name);
       command.fields.moveThroughToCommand.guard = NULL;
       command.fields.moveThroughToCommand.guardSize = 0;

       command.fields.moveThroughToCommand.moveStraight = params.cRCLMoveStraight;
       command.fields.moveThroughToCommand.numPositions = params.cRCLNumPositions;
       command.fields.moveThroughToCommand.waypointSize = params.cRCLWaypointSize;
       command.fields.moveThroughToCommand.waypoint = params.cRCLWaypoint;

       command.fields.moveThroughToCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.moveThroughToCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_DwellParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_DwellParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND;
       command.fields.dwellCommand.commandID = 0;
       command.fields.dwellCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.dwellCommand.name);
       command.fields.dwellCommand.guard = NULL;
       command.fields.dwellCommand.guardSize = 0;

       command.fields.dwellCommand.dwellTime = params.cRCLDwellTime;

       command.fields.dwellCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.dwellCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_ActuateJointsParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_ActuateJointsParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND;
       command.fields.actuateJointsCommand.commandID = 0;
       command.fields.actuateJointsCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.actuateJointsCommand.name);
       command.fields.actuateJointsCommand.guard = NULL;
       command.fields.actuateJointsCommand.guardSize = 0;

/* TODO: FIX THIS COMMAND, I THING SOMETHING IS NOT RIGHT IN THE INFORMATION MODELLING!!!!!*/

       command.fields.actuateJointsCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.actuateJointsCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_ConfigureJointReportsParametersSetDataType& params)const{
/*        UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       params = std::move( *((UA_ConfigureJointReportsParametersSetDataType*)(&var)) );
*/
       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND;

       /* TODO: FIX THIS COMMAND, I THING SOMETHING IS NOT RIGHT IN THE INFORMATION MODELLING!!!!!*/

       /*
       command.fields.configureJointReportsCommand.commandID = 0;
       command.fields.configureJointReportsCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.configureJointReportsCommand.name);
       command.fields.configureJointReportsCommand.guard = NULL;
       command.fields.configureJointReportsCommand.guardSize = 0;

       command.fields.configureJointReportsCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.configureJointReportsCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;
*/
       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetDefaultJointPositionsTolerancesParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetDefaultJointPositionsTolerancesParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND;
       command.fields.setDefaultJointPositionsTolerancesCommand.commandID = 0;
       command.fields.setDefaultJointPositionsTolerancesCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setDefaultJointPositionsTolerancesCommand.name);
       command.fields.setDefaultJointPositionsTolerancesCommand.guard = NULL;
       command.fields.setDefaultJointPositionsTolerancesCommand.guardSize = 0;

       command.fields.setDefaultJointPositionsTolerancesCommand.jointTolerances = params.cRCLJointTolerances;

       command.fields.setDefaultJointPositionsTolerancesCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setDefaultJointPositionsTolerancesCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_GetStatusParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_GetStatusParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND;
       command.fields.getStatusCommand.commandID = 0;
       command.fields.getStatusCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.getStatusCommand.name);
       command.fields.getStatusCommand.guard = NULL;
       command.fields.getStatusCommand.guardSize = 0;

       command.fields.getStatusCommand.cRCLRealTimeCommand = UA_FALSE;
       command.fields.getStatusCommand.cRCLRealTimeParameterNode = UA_NODEID_NULL;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_CloseToolChangerParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_CloseToolChangerParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND;
       command.fields.closeToolChangerCommand.commandID = 0;
       command.fields.closeToolChangerCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.closeToolChangerCommand.name);
       command.fields.closeToolChangerCommand.guard = NULL;
       command.fields.closeToolChangerCommand.guardSize = 0;

       command.fields.closeToolChangerCommand.cRCLRealTimeCommand = UA_FALSE;
       command.fields.closeToolChangerCommand.cRCLRealTimeParameterNode = UA_NODEID_NULL;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_OpenToolChangerParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_OpenToolChangerParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND;
       command.fields.openToolChangerCommand.commandID = 0;
       command.fields.openToolChangerCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.openToolChangerCommand.name);
       command.fields.openToolChangerCommand.guard = NULL;
       command.fields.openToolChangerCommand.guardSize = 0;

       command.fields.openToolChangerCommand.cRCLRealTimeCommand = UA_FALSE;
       command.fields.openToolChangerCommand.cRCLRealTimeParameterNode = UA_NODEID_NULL;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetRobotParametersParametersSetDataType& params )const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetRobotParametersParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND;
       command.fields.setRobotParametersCommand.commandID = 0;
       command.fields.setRobotParametersCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setRobotParametersCommand.name);
       command.fields.setRobotParametersCommand.guard = NULL;
       command.fields.setRobotParametersCommand.guardSize = 0;

       command.fields.setRobotParametersCommand.parameterSettingSize = params.cRCLParameterSettingSize;
       UA_CRCL_ParameterSettingDataType* paramsArray =
                       (UA_CRCL_ParameterSettingDataType *)UA_Array_new(params.cRCLParameterSettingSize,
                                              &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
       for(int i=0; i < params.cRCLParameterSettingSize; i++){
           paramsArray[i] = params.cRCLParameterSetting[i];
       }
       command.fields.setRobotParametersCommand.parameterSetting = paramsArray;

       command.fields.setRobotParametersCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setRobotParametersCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }

   UA_CRCLCommandsUnionDataType operator()( UA_SetEndeffectorParametersParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetEndeffectorParametersParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND;
       command.fields.setEndeffectorParametersCommand.commandID = 0;
       command.fields.setEndeffectorParametersCommand.id = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setEndeffectorParametersCommand.name);
       command.fields.setEndeffectorParametersCommand.guard = NULL;
       command.fields.setEndeffectorParametersCommand.guardSize = 0;

       command.fields.setEndeffectorParametersCommand.parameterSetting = std::move( params.cRCLParameterSetting );
       command.fields.setEndeffectorParametersCommand.parameterSettingSize = params.cRCLParameterSettingSize;

       command.fields.setEndeffectorParametersCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setEndeffectorParametersCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }

   UA_CRCLCommandsUnionDataType operator()( UA_SetEndeffectorParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetEndeffectorParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND;
       command.fields.setEndeffectorCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setEndeffectorCommand.name);
       command.fields.setEndeffectorCommand.commandID = 0;
       command.fields.setEndeffectorCommand.id = 0;
       command.fields.setEndeffectorCommand.guard = NULL;
       command.fields.setEndeffectorCommand.guardSize = 0;

       command.fields.setEndeffectorCommand.setting = params.cRCLSetting;

       command.fields.setEndeffectorCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setEndeffectorCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetTransAccelParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetTransAccelParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND;
       command.fields.setTransAccelCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setTransAccelCommand.name);
       command.fields.setTransAccelCommand.commandID = 0;
       command.fields.setTransAccelCommand.id = 0;
       command.fields.setTransAccelCommand.guard = NULL;
       command.fields.setTransAccelCommand.guardSize = 0;

       command.fields.setTransAccelCommand.transAccel = params.cRCLTransAccel;

       command.fields.setTransAccelCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setTransAccelCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetTransSpeedParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetTransSpeedParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND;
       command.fields.setTransSpeedCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setTransSpeedCommand.name);
       command.fields.setTransSpeedCommand.commandID = 0;
       command.fields.setTransSpeedCommand.id = 0;
       command.fields.setTransSpeedCommand.guard = NULL;
       command.fields.setTransSpeedCommand.guardSize = 0;
       command.fields.setTransSpeedCommand.transSpeed = params.cRCLTransSpeed;

       command.fields.setTransSpeedCommand.transSpeed = params.cRCLTransSpeed;

       command.fields.setTransSpeedCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setTransSpeedCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetRotAccelParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetRotAccelParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND;
       command.fields.setTransSpeedCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setRotAccelCommand.name);
       command.fields.setRotAccelCommand.commandID = 0;
       command.fields.setRotAccelCommand.id = 0;
       command.fields.setRotAccelCommand.guard = NULL;
       command.fields.setRotAccelCommand.guardSize = 0;

       command.fields.setRotAccelCommand.rotAccel = params.cRCLRotAccel;

       command.fields.setRotAccelCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setRotAccelCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetRotSpeedParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetRotSpeedParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND;
       command.fields.setRotSpeedCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setRotSpeedCommand.name);
       command.fields.setRotSpeedCommand.commandID = 0;
       command.fields.setRotSpeedCommand.id = 0;
       command.fields.setRotSpeedCommand.guard = NULL;
       command.fields.setRotSpeedCommand.guardSize = 0;

       command.fields.setRotSpeedCommand.rotSpeed = params.cRCLRotSpeed;

       command.fields.setRotSpeedCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setRotSpeedCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetAngleUnitsParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetAngleUnitsParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND;
       command.fields.setAngleUnitsCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setAngleUnitsCommand.name);
       command.fields.setAngleUnitsCommand.commandID = 0;
       command.fields.setAngleUnitsCommand.id = 0;
       command.fields.setAngleUnitsCommand.guard = NULL;
       command.fields.setAngleUnitsCommand.guardSize = 0;

       command.fields.setAngleUnitsCommand.unitName = params.cRCLUnitName;

       command.fields.setAngleUnitsCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setAngleUnitsCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetEndPoseToleranceParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetEndPoseToleranceParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND;
       command.fields.setEndPoseToleranceCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setEndPoseToleranceCommand.name);
       command.fields.setEndPoseToleranceCommand.commandID = 0;
       command.fields.setEndPoseToleranceCommand.id = 0;
       command.fields.setEndPoseToleranceCommand.guard = NULL;
       command.fields.setEndPoseToleranceCommand.guardSize = 0;

       command.fields.setEndPoseToleranceCommand.tolerance = params.cRCLTolerance;

       command.fields.setEndPoseToleranceCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setEndPoseToleranceCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;
       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetForceUnitsParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetForceUnitsParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND;
       command.fields.setForceUnitsCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setForceUnitsCommand.name);
       command.fields.setForceUnitsCommand.commandID = 0;
       command.fields.setForceUnitsCommand.id = 0;
       command.fields.setForceUnitsCommand.guard = NULL;
       command.fields.setForceUnitsCommand.guardSize = 0;

       command.fields.setForceUnitsCommand.unitName = params.cRCLUnitName;

       command.fields.setForceUnitsCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setForceUnitsCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;
       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetIntermediatePoseToleranceParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       params = std::move( *((UA_SetIntermediatePoseToleranceParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND;
       command.fields.setIntermediatePoseToleranceCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setIntermediatePoseToleranceCommand.name);
       command.fields.setIntermediatePoseToleranceCommand.commandID = 0;
       command.fields.setIntermediatePoseToleranceCommand.id = 0;
       command.fields.setIntermediatePoseToleranceCommand.guard = NULL;
       command.fields.setIntermediatePoseToleranceCommand.guardSize = 0;

       command.fields.setIntermediatePoseToleranceCommand.tolerance = params.cRCLTolerance;

       command.fields.setIntermediatePoseToleranceCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setIntermediatePoseToleranceCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetLengthUnitsParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetLengthUnitsParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND;
       command.fields.setLengthUnitsCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setLengthUnitsCommand.name);
       command.fields.setLengthUnitsCommand.commandID = 0;
       command.fields.setLengthUnitsCommand.id = 0;
       command.fields.setLengthUnitsCommand.guard = NULL;
       command.fields.setLengthUnitsCommand.guardSize = 0;

       command.fields.setLengthUnitsCommand.unitName = params.cRCLUnitName;

       command.fields.setLengthUnitsCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setLengthUnitsCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetMotionCoordinationParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetMotionCoordinationParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND;
       command.fields.setMotionCoordinationCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setMotionCoordinationCommand.name);
       command.fields.setMotionCoordinationCommand.commandID = 0;
       command.fields.setMotionCoordinationCommand.id = 0;
       command.fields.setMotionCoordinationCommand.guard = NULL;
       command.fields.setMotionCoordinationCommand.guardSize = 0;

       command.fields.setMotionCoordinationCommand.coordinated = params.cRCLCoordinated;

       command.fields.setMotionCoordinationCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setMotionCoordinationCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_SetTorqueUnitsParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_SetTorqueUnitsParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND;
       command.fields.setTorqueUnitsCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.setTorqueUnitsCommand.name);
       command.fields.setTorqueUnitsCommand.commandID = 0;
       command.fields.setTorqueUnitsCommand.id = 0;
       command.fields.setTorqueUnitsCommand.guard = NULL;
       command.fields.setTorqueUnitsCommand.guardSize = 0;

       command.fields.setTorqueUnitsCommand.unitName = params.cRCLUnitName;

       command.fields.setTorqueUnitsCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.setTorqueUnitsCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_StopMotionParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_StopMotionParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND;
       command.fields.stopMotionCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.stopMotionCommand.name);
       command.fields.stopMotionCommand.commandID = 0;
       command.fields.stopMotionCommand.id = 0;
       command.fields.stopMotionCommand.guard = NULL;
       command.fields.stopMotionCommand.guardSize = 0;

       command.fields.stopMotionCommand.stopCondition = params.cRCLStopCondition;

       command.fields.stopMotionCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.stopMotionCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_ConfigureStatusReportParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_ConfigureStatusReportParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND;
       command.fields.configureStatusReportCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.configureStatusReportCommand.name);
       command.fields.configureStatusReportCommand.commandID = 0;
       command.fields.configureStatusReportCommand.id = 0;
       command.fields.configureStatusReportCommand.guard = NULL;
       command.fields.configureStatusReportCommand.guardSize = 0;

       command.fields.configureStatusReportCommand.reportGripperStatus = params.cRCLReportGripperStatus;
       command.fields.configureStatusReportCommand.reportGuardsStatus = params.cRCLReportGuardsStatus;
       command.fields.configureStatusReportCommand.reportJointStatuses = params.cRCLReportJointStatuses;
       command.fields.configureStatusReportCommand.reportPoseStatus = params.cRCLReportPoseStatus;
       command.fields.configureStatusReportCommand.reportSensorsStatus = params.cRCLReportSensorsStatus;
       command.fields.configureStatusReportCommand.reportSettingsStatus = params.cRCLReportSettingsStatus;

       command.fields.configureStatusReportCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.configureStatusReportCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_EnableSensorParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_EnableSensorParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       /* TODO: FIX THIS COMMAND, I THING SOMETHING IS NOT RIGHT IN THE INFORMATION MODELLING!!!!!*/

       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND;
       command.fields.enableSensorCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.enableSensorCommand.name);
       command.fields.enableSensorCommand.commandID = 0;
       command.fields.enableSensorCommand.id = 0;
       command.fields.enableSensorCommand.guard = NULL;
       command.fields.enableSensorCommand.guardSize = 0;

       command.fields.enableSensorCommand.sensorID = params.cRCLSensorID;
       command.fields.enableSensorCommand.sensorOption = params.cRCLSensorOption;
       command.fields.enableSensorCommand.sensorOptionSize = params.cRCLSensorOptionSize;

       command.fields.enableSensorCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.enableSensorCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_DisableSensorParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_DisableSensorParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND;
       command.fields.disableSensorCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.configureStatusReportCommand.name);
       command.fields.disableSensorCommand.commandID = 0;
       command.fields.disableSensorCommand.id = 0;
       command.fields.disableSensorCommand.guard = NULL;
       command.fields.disableSensorCommand.guardSize = 0;

       command.fields.disableSensorCommand.sensorID= params.cRCLSensorID;

       command.fields.disableSensorCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.disableSensorCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_EnableGripperParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_EnableGripperParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND;
       command.fields.enableGripperCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.enableGripperCommand.name);
       command.fields.enableGripperCommand.commandID = 0;
       command.fields.enableGripperCommand.id = 0;
       command.fields.enableGripperCommand.guard = NULL;
       command.fields.enableGripperCommand.guardSize = 0;

       command.fields.enableGripperCommand.gripperName= params.cRCLGripperName;
       command.fields.enableGripperCommand.gripperOption= params.cRCLGripperOption;
       command.fields.enableGripperCommand.gripperOptionSize= params.cRCLGripperOptionSize;

       command.fields.enableGripperCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.enableGripperCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_DisableGripperParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_DisableGripperParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND;
       command.fields.disableGripperCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.disableGripperCommand.name);
       command.fields.disableGripperCommand.commandID = 0;
       command.fields.disableGripperCommand.id = 0;
       command.fields.disableGripperCommand.guard = NULL;
       command.fields.disableGripperCommand.guardSize = 0;

       command.fields.disableGripperCommand.gripperName= params.cRCLGripperName;

       command.fields.disableGripperCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.disableGripperCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_EnableRobotParameterStatusParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_EnableRobotParameterStatusParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND;
       command.fields.enableRobotParameterStatusCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.enableRobotParameterStatusCommand.name);
       command.fields.enableRobotParameterStatusCommand.commandID = 0;
       command.fields.enableRobotParameterStatusCommand.id = 0;
       command.fields.enableRobotParameterStatusCommand.guard = NULL;
       command.fields.enableRobotParameterStatusCommand.guardSize = 0;

       command.fields.enableRobotParameterStatusCommand.robotParameterName = std::move(
                                                                               params.cRCLRobotParameterName );

       command.fields.enableRobotParameterStatusCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.enableRobotParameterStatusCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }
   UA_CRCLCommandsUnionDataType operator()( UA_DisableRobotParameterStatusParametersSetDataType& params)const{
       UA_Variant var;
       UA_Variant_init(&var);
       UA_StatusCode retVal = UA_Server_readValue( server, normalParameterNodeId, &var );
       if( retVal != UA_STATUSCODE_GOOD )
           throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

       params = std::move( *((UA_DisableRobotParameterStatusParametersSetDataType*)(&var)) );

       UA_CRCLCommandsUnionDataType command;
       command.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND;
       command.fields.disableRobotParameterStatusCommand.commandID = 0;
       UA_String aux = UA_STRING( " " );
       UA_String_copy(&aux, &command.fields.disableRobotParameterStatusCommand.name);
       command.fields.disableRobotParameterStatusCommand.commandID = 0;
       command.fields.disableRobotParameterStatusCommand.id = 0;
       command.fields.disableRobotParameterStatusCommand.guard = NULL;
       command.fields.disableRobotParameterStatusCommand.guardSize = 0;

       command.fields.disableRobotParameterStatusCommand.robotParameterName = std::move(
                                                                               params.cRCLRobotParameterName );

       command.fields.disableRobotParameterStatusCommand.cRCLRealTimeCommand = params.cRCLRealTimeParameter;
       command.fields.disableRobotParameterStatusCommand.cRCLRealTimeParameterNode = realTimeParameterNodeId;

       return command;
   }

private:
   UA_Server* server;
};



UA_NodeId findCommandParameterType( UA_Server* server, char* parameterTypeName );



/* Visitor for given a SkillType, adding two matching nodes ("static" and "real time") to the server */
struct AdderParameterNodesToSkillType{
private:
   /* Once this structure is created, the server and the skill remain fixed (hence, this
    * structure only allows adding the parameter nodes to a particular skill type)*/
   std::string nameOfSkill;
   UA_Server* server;
   int skillsNS;
   int crclNS;
   UA_NodeId skillParametersSetNode;
   UA_NodeId skillRealTimeParametersSetNode;
   UA_NodeId skillTypeNode;

   UA_NodeId findSkillType( const char *skillName );
   UA_NodeId findSkillParameterSetObject( const char *skillName );
   UA_NodeId findSkillParameterSetRealTimeObject( const char *skillName );
   UA_StatusCode addParameterNodesToServer( std::string parameterTypeName, UA_NodeId variableTypeNode );

public:
   int numberOfCommandInSkill;

   AdderParameterNodesToSkillType(std::string nameOfSkill_, int numberOfCommandInSkill_, UA_Server* server_):
       nameOfSkill(nameOfSkill_),
       numberOfCommandInSkill(numberOfCommandInSkill_),
       server(server_),
       crclNS( UA_Server_addNamespace( server, "https://crcl.org" ) ),
       skillsNS( UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" ) ),
       skillTypeNode( findSkillType( nameOfSkill_.c_str() ) )
       {
           skillParametersSetNode = findSkillParameterSetObject( nameOfSkill_.c_str() );
           skillRealTimeParametersSetNode = findSkillParameterSetRealTimeObject( nameOfSkill_.c_str() ) ;
       }

   UA_StatusCode operator()(const std::monostate& param)const{
       UA_StatusCode retVal = UA_STATUSCODE_BADNOTSUPPORTED;
       std::cout<< "NODES FOR THE PARAMETERS OF THE COMMAND COULD NOT BE ADDED:" << std::endl <<
                   "SkillTypes Namespace: " << skillsNS << std::endl <<
                   "skillParameterSetNodeID: " << skillParametersSetNode.identifier.numeric << std::endl <<
                   "numberOfCommandInSkill: " << numberOfCommandInSkill << std::endl << std::endl;
       return retVal;
   }
   UA_StatusCode operator()(const UA_InitCanonParametersSetDataType& param){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "InitCanonParameters" );
       retVal |= addParameterNodesToServer( "InitCanonParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_EndCanonParametersSetDataType& param){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "EndCanonParameters" );
       retVal |= addParameterNodesToServer( "EndCanonParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_MessageParametersSetDataType& param){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "MessageParameters" );
       retVal |= addParameterNodesToServer( "MessageParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_MoveToParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "MoveToParameters" );
       retVal |= addParameterNodesToServer( "MoveToParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_MoveScrewParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "MoveScrewParameters" );
       retVal |= addParameterNodesToServer( "MoveScrewParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_MoveThroughToParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "MoveThroughToParameters" );
       retVal |= addParameterNodesToServer( "MoveThroughToParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_DwellParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "DwellParameters" );
       retVal |= addParameterNodesToServer( "DwellParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_ActuateJointsParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "ActuateJointsParameters" );
       retVal |= addParameterNodesToServer( "ActuateJointsParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_ConfigureJointReportsParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "ConfigureJointReportsParameters" );
       retVal |= addParameterNodesToServer( "ConfigureJointReportsParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetDefaultJointPositionsTolerancesParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetDefaultJointPositionsTolerancesParameters" );
       retVal |= addParameterNodesToServer( "SetDefaultJointPositionsTolerancesParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_GetStatusParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "GetStatusParameters" );
       retVal |= addParameterNodesToServer( "GetStatusParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_CloseToolChangerParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "CloseToolChangerParameters" );
       retVal |= addParameterNodesToServer( "CloseToolChangerParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_OpenToolChangerParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "OpenToolChangerParameters" );
       retVal |= addParameterNodesToServer( "OpenToolChangerParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetRobotParametersParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetRobotParametersParameters" );
       retVal |= addParameterNodesToServer( "SetRobotParametersParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetEndeffectorParametersParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetEndeffectorParametersParameters" );
       retVal |= addParameterNodesToServer( "SetEndeffectorParametersParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetEndeffectorParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetEndeffectorParameters" );
       retVal |= addParameterNodesToServer( "SetEndeffectorParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetTransAccelParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetTransAccelParameters" );
       retVal |= addParameterNodesToServer( "SetTransAccelParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetTransSpeedParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetTransSpeedParameters" );
       retVal |= addParameterNodesToServer( "SetTransSpeedParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetRotAccelParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetRotAccelParameters" );
       retVal |= addParameterNodesToServer( "SetRotAccelParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetRotSpeedParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetRotSpeedParameters" );
       retVal |= addParameterNodesToServer( "SetRotSpeedParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetAngleUnitsParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetAngleUnitsParameters" );
       retVal |= addParameterNodesToServer( "SetAngleUnitsParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetEndPoseToleranceParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetEndPoseToleranceParameters" );
       retVal |= addParameterNodesToServer( "SetEndPoseToleranceParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetForceUnitsParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetForceUnitsParameters" );
       retVal |= addParameterNodesToServer( "SetForceUnitsParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetIntermediatePoseToleranceParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetIntermediatePoseToleranceParameters" );
       retVal |= addParameterNodesToServer( "SetIntermediatePoseToleranceParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetLengthUnitsParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetLengthUnitsParameters" );
       retVal |= addParameterNodesToServer( "SetLengthUnitsParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetMotionCoordinationParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetMotionCoordinationParameters" );
       retVal |= addParameterNodesToServer( "SetMotionCoordinationParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_SetTorqueUnitsParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "SetTorqueUnitsParameters" );
       retVal |= addParameterNodesToServer( "SetTorqueUnitsParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_StopMotionParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "StopMotionParameters" );
       retVal |= addParameterNodesToServer( "StopMotionParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_ConfigureStatusReportParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "ConfigureStatusReportParameters" );
       retVal |= addParameterNodesToServer( "ConfigureStatusReportParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_EnableSensorParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "EnableSensorParameters" );
       retVal |= addParameterNodesToServer( "EnableSensorParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_DisableSensorParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "DisableSensorParameters" );
       retVal |= addParameterNodesToServer( "DisableSensorParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_EnableGripperParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "EnableGripperParameters" );
       retVal |= addParameterNodesToServer( "EnableGripperParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_DisableGripperParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "DisableGripperParameters" );
       retVal |= addParameterNodesToServer( "DisableGripperParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_EnableRobotParameterStatusParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "EnableRobotParameterStatusParameters" );
       retVal |= addParameterNodesToServer( "EnableRobotParameterStatusParameters", parameterTypeId);
       return retVal;
   }
   UA_StatusCode operator()(const UA_DisableRobotParameterStatusParametersSetDataType& params){
       UA_StatusCode retVal = UA_STATUSCODE_GOOD;
       UA_NodeId parameterTypeId = findCommandParameterType( server, "DisableRobotParameterStatusParameters" );
       retVal |= addParameterNodesToServer( "DisableRobotParameterStatusParameters", parameterTypeId);
       return retVal;
   }
};

   class SAMYSkill
   {
   public:
       SAMYSkill( const std::string& name,
                       const std::vector<UA_CRCLCommandsUnionDataType>& commands_,
                           const UA_NodeId& id);
       SAMYSkill(const std::string& name, std::vector<SAMYSkill>& skills, const UA_NodeId &id);
       std::vector<UA_CRCLCommandsUnionDataType> skillToCRCLCommands( std::vector<SAMYSkill>& skills );
       std::vector<UA_CRCLCommandsUnionDataType> getSkillCommands() const;
       bool createSkillInstance(UA_Server *server, UA_CRCLSkillDataType *opcuaSkill);
       std::string getSkillName() const;
       UA_NodeId getSkillNodeID() const;
       void addNormalParameterNodeToSkill( const UA_NodeId& node);
       void addRealTimeParameterNodeToSkill( const UA_NodeId& node);
       void setSkillNodeID( const UA_NodeId& nodeId);
       void setSkillTypeNodeId( const UA_NodeId& nodeId );
       UA_NodeId getSkillTypeNodeId() const;
       UA_NodeId getSkillParameterSetNode( UA_Server* server ) const;
       UA_NodeId getSkillParameterSetRealTimeNode( UA_Server* server ) const;
       UA_StatusCode setParameterNodesInSkill( UA_Server* server );
   private:
       UA_NodeId getSkillComponentNodeByBrowseName( UA_Server* server, char* browseName,
                                                               const UA_UInt16 nameSpace ) const;
       UA_StatusCode setNormalParameterNodesInSkill( UA_Server* server );
       UA_StatusCode setRealTimeParameterNodesInSkill( UA_Server* server );
       /* From a ParameterSet/RealTimeParameterSet Object, it stores the NodeIds of the components of this objects
        * (which are the nodes of the parameters)*/
       UA_StatusCode setSkillParametersFromObjectComponentNodes(UA_Server *server,
                                                                           const UA_NodeId& startNode,
                                                                                    std::vector<UA_NodeId>& nodes );
       UA_NodeId skillTypeNodeId;
       UA_NodeId skillNodeID;
       std::string skillName;
       std::vector<UA_NodeId> normalParameterNodes;
       std::vector<UA_NodeId> realTimeParameterNodes;
       std::vector<UA_CRCLCommandsUnionDataType> commands;
   //    std::shared_ptr<spdlog::logger> logger;
  //     std::mutex skillInstantiationMutex;
   };
}  /* namespace SAMY */
#endif // SAMYSKILL_H
