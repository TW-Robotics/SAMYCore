from CRCL_DataTypes import *
import worker
from opcua import Client
from opcua import ua

# These classes inherit from the classes in CRCL_DataTypes. 
# Here I have created sketchs only for the CRCL commands parameters classes (e.g classes in the CRCL_DataTypes containing ParametersSet in the name). This classes/information are the structures of 
# information you have to write in the SAMYCore.
# At the end of the file are listed other classes for which we would probbably need to create also _BPMN classes if we wanted to be able to use all the 35 CRCL commands.
# Most of this work of classes generation probbably could be automated, e.g write a script to generate the required classes automatically.

# I am not sure how Camunda works, but assuming topics are the blocks, func allows passing callbacks/functions, and vars are the variables displayed in the Graphical Using Interface, I would try to create a modular approach similar to what I did for the SAMYCore.

# An initial sketch could be something like this:


class Skill_BPMN():
    def __init__(self):
        self.name = ""
        self.commandsParameters = [] # Array of CRCL commands parameters
        self.parameterNodes = [] # Array of nodes IDs in the SAMYCore matching the parameters in the previous field commandsParameters.
        self.skillVariables = [] # List of variables to be set by the user
    
    def addTopicToWorker( worker ): # in the main function of BPMN for each skill we create a BPMN block. For each block we create a worker and we pass it to the skills so we "fill" it automaticall.
        for command in commandsParameters:
                command.addVariablesToWorker( self.variables ) # Here we should bind the BPMN/GUI with the variables of the CRCL Commands Parameters in the Skill_BPMN commandsParameters array. I do not know how this can be done with Camunda
      
        worker.subscribe(
                topic = self.name,
                func = self.setSAMYCoreParameters,
                variables = self.skillVariables
        )

    def setSAMYCoreParameters(SAMYCoreIpAddress): # This method writes in the SAMYCore the parameters of the skill (it is the OPC UA client)
	    client = Client(SAMYCoreIpAddress)
	    try:

		client.connect()
		client.load_type_definitions()  # scan server for custom structures and import them
                i = 0
                for command in self.commandsParameters:

			myvar = client.get_node( self.parameterNodes[i] )
			myvar.set_value( self.commandsParameters[i] )
	    finally:
		client.disconnect()


class MoveTo_BPMN(MoveToParametersSetDataType): # Inheritates from the corresponding class in CRCL_DataTypes.py
        def __init__(self):
              MoveToParametersSetDataType.__init__(self)

        def addVariablesToWorker( variables ):
		variables.append( RealTimeParameter )
		variables.append( MoveStraight )
 # RealTimeParameter or MoveStraight are of fundamental type (in this case bool), and they can be directly added. Structs variables need to call their corresponding method to append its variables.
		EndPosition.addVariablesToWorker( variables ) # CRCL_PoseDataType is not of fundamental type, hence we call its addVariablesToWorker method




class CRCL_PoseDataType_BPMN(CRCL_PointDataType): # Inheritates from the corresponding class in CRCL_DataTypes.py
        def __init__(self):
              CRCL_PointDataType.__init__(self)

        def addVariablesToWorker( variables ):
		point.addVariablesToWorker( variables ) # CRCL_PointDataType is not of fundamental type, hence we call its addVariablesToWorker method
		xAxis.addVariablesToWorker( variables ) # CRCL_VectorDataType is not of fundamental type, hence we call its addVariablesToWorker method
		zAxis.addVariablesToWorker( variables ) # CRCL_VectorDataType is not of fundamental type, hence we call its addVariablesToWorker method



class CRCL_PointDataType_BPMN(CRCL_PointDataType): # Inheritates from the corresponding class in CRCL_DataTypes.py
        def __init__(self):
              CRCL_PointDataType.__init__(self)

        def addVariablesToWorker( variables ):
		variables.append( x )
		variables.append( y )
		variables.append( z )


class CRCL_VectorDataType_BPMN(CRCL_VectorDataType): # Inheritates from the corresponding class in CRCL_DataTypes.py
        def __init__(self):
              CRCL_VectorDataType.__init__(self)

        def addVariablesToWorker( variables ):
		variables.append( i )
		variables.append( j )
		variables.append( k )





# --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------#

class InitCanon_BPMN(InitCanonParametersSetDataType):
        def __init__(self):
              InitCanonParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):
              


class EndCanon_BPMN(EndCanonParametersSetDataType):
        def __init__(self):
              EndCanonParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class GetStatus_BPMN(GetStatusParametersSetDataType):
        def __init__(self):
              GetStatusParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):



class CloseToolChanger_BPMN(CloseToolChangerParametersSetDataType):
        def __init__(self):
              CloseToolChangerParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):



class OpenToolChanger_BPMN(OpenToolChangerParametersSetDataType):
        def __init__(self):
              OpenToolChangerParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):



class Message_BPMN(MessageParametersSetDataType):
        def __init__(self):
              MessageParametersSetDataType.__init__(self)



class CRCL_PoseDataType_BPMN(CRCL_PoseDataType):
        def __init__(self):
              CRCL_PoseDataType.__init__(self)

        def addVariablesToWorker( worker ):
		



class MoveScrew_BPMN(MoveScrewParametersSetDataType):
        def __init__(self):
              MoveScrewParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):



class MoveThroughTo_BPMN(MoveThroughToParametersSetDataType):
        def __init__(self):
              MoveThroughToParametersSetDataType.__init__(self)



class Dwell_BPMN(DwellParametersSetDataType):
        def __init__(self):
              DwellParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class ActuateJoints_BPMN(ActuateJointsParametersSetDataType):
        def __init__(self):
              ActuateJointsParametersSetDataType.__init__(self)



class ConfigureJointReports_BPMN(ConfigureJointReportsParametersSetDataType):
        def __init__(self):
              ConfigureJointReportsParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetDefaultJointPositionsTolerances_BPMN(SetDefaultJointPositionsTolerancesParametersSetDataType):
        def __init__(self):
              SetDefaultJointPositionsTolerancesParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetRobotParameters_BPMN(SetRobotParametersParametersSetDataType):
        def __init__(self):
              SetRobotParametersParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetEndeffectorParameters_BPMN(SetEndeffectorParametersParametersSetDataType):
        def __init__(self):
              SetEndeffectorParametersParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetEndeffector_BPMN(SetEndeffectorParametersSetDataType):
        def __init__(self):
              SetEndeffectorParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetTransSpeed_BPMN(SetTransSpeedParametersSetDataType):
        def __init__(self):
              SetTransSpeedParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetTransAccel_BPMN(SetTransAccelParametersSetDataType):
        def __init__(self):
              SetTransAccelParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetRotSpeed_BPMN(SetRotSpeedParametersSetDataType):
        def __init__(self):
              SetRotSpeedParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetRotAccel_BPMN(SetRotAccelParametersSetDataType):
        def __init__(self):
              SetRotAccelParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetAngleUnits_BPMN(SetAngleUnitsParametersSetDataType):
        def __init__(self):
              SetAngleUnitsParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetEndPoseTolerance_BPMN(SetEndPoseToleranceParametersSetDataType):
        def __init__(self):
              SetEndPoseToleranceParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetForceUnits_BPMN(SetForceUnitsParametersSetDataType):
        def __init__(self):
              SetForceUnitsParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetIntermediatePoseTolerance_BPMN(SetIntermediatePoseToleranceParametersSetDataType):
        def __init__(self):
              SetIntermediatePoseToleranceParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetLengthUnits_BPMN(SetLengthUnitsParametersSetDataType):
        def __init__(self):
              SetLengthUnitsParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetMotionCoordination_BPMN(SetMotionCoordinationParametersSetDataType):
        def __init__(self):
              SetMotionCoordinationParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class SetTorqueUnits_BPMN(SetTorqueUnitsParametersSetDataType):
        def __init__(self):
              SetTorqueUnitsParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class StopMotion_BPMN(StopMotionParametersSetDataType):
        def __init__(self):
              StopMotionParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class ConfigureStatusReport_BPMN(ConfigureStatusReportParametersSetDataType):
        def __init__(self):
              ConfigureStatusReportParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class EnableSensor_BPMN(EnableSensorParametersSetDataType):
        def __init__(self):
              EnableSensorParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):



class DisableSensor_BPMN(DisableSensorParametersSetDataType):
        def __init__(self):
              DisableSensorParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class EnableGripper_BPMN(EnableGripperParametersSetDataType):
        def __init__(self):
              EnableGripperParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class DisableGripper_BPMN(DisableGripperParametersSetDataType):
        def __init__(self):
              DisableGripperParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class EnableRobotParameterStatus_BPMN(EnableRobotParameterStatusParametersSetDataType):
        def __init__(self):
              EnableRobotParameterStatusParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class DisableRobotParameterStatus_BPMN(DisableRobotParameterStatusParametersSetDataType):
        def __init__(self):
              DisableRobotParameterStatusParametersSetDataType.__init__(self)

        def addVariablesToWorker( worker ):




class CRCL_StopConditionEnumDataType(IntEnum):
class CRCL_AngleUnitEnumDataType(IntEnum):
class CRCL_ForceUnitEnumDataType(IntEnum):
class CRCL_LengthUnitEnumDataType(IntEnum):
class CRCL_TorqueUnitEnumDataType(IntEnum):
class CRCL_GuardLimitEnumDataType(IntEnum):
class CRCL_CommandStateEnumDataType(IntEnum):
class CRCL_FractionDataType(object):
class CRCL_DataThingDataType(object):
class CRCL_TwistDataType(object):
class CRCL_WrenchDataType(object):
class CRCL_PoseToleranceDataType(object):
class CRCL_ParameterSettingDataType(object):
class CRCL_RotAccelAbsoluteDataType(object):
class CRCL_RotAccelRelativeDataType(object):
class CRCL_RotAccelDataType(object):
class CRCL_RotSpeedAbsoluteDataType(object):
class CRCL_RotSpeedRelativeDataType(object):
class CRCL_RotSpeedDataType(object):
class CRCL_TransAccelAbsoluteDataType(object):
class CRCL_TransAccelRelativeDataType(object):
class CRCL_TransAccelDataType(object):
class CRCL_TransSpeedAbsoluteDataType(object):
class CRCL_TransSpeedRelativeDataType(object):
class CRCL_TransSpeedDataType(object):
class CRCL_ConfigureJointReportDataType(object):
class CRCL_GuardDataType(object):
class CRCL_JointPositionToleranceSettingDataType(object):
class CRCL_JointPositionsTolerancesDataType(object):
class CRCL_PoseAndSetDataType(object):
class CRCL_JointDetailsDataType(object):
class CRCL_ActuateJointDataType(object):
class CRCL_JointForceTorqueDataType(object):
class CRCL_JointSpeedAccelDataType(object):
class CRCL_CommandStatusDataType(object):
class CRCL_SensorStatusDataType(object):
class CRCL_CountSensorStatusDataType(object):
class CRCL_OnOffSensorStatusDataType(object):
class CRCL_ScalarSensorStatusDataType(object):
class CRCL_ForceTorqueSensorStatusDataType(object):
class CRCL_SensorStatusesDataType(object):
class CRCL_GripperStatusDataType(object):
class CRCL_ParallelGripperStatusDataType(object):
class CRCL_ThreeFingerGripperStatusDataType(object):
class CRCL_VacuumGripperStatusDataType(object):
class CRCL_SettingsStatusDataType(object):
class CRCL_PoseStatusDataType(object):
class CRCL_JointLimitDataType(object):
class CRCL_JointStatusDataType(object):
class CRCL_JointStatusesDataType(object):

