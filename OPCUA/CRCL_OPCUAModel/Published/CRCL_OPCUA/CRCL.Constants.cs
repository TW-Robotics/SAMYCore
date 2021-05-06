/* ========================================================================
 * Copyright (c) 2005-2019 The OPC Foundation, Inc. All rights reserved.
 *
 * OPC Foundation MIT License 1.00
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * The complete license agreement can be found here:
 * http://opcfoundation.org/License/MIT/1.00/
 * ======================================================================*/

using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.Xml;
using System.Runtime.Serialization;
using Opc.Ua;

namespace CRCL
{
    #region DataType Identifiers
    /// <summary>
    /// A class that declares constants for all DataTypes in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class DataTypes
    {
        /// <summary>
        /// The identifier for the CRCL_StopConditionEnumDataType DataType.
        /// </summary>
        public const uint CRCL_StopConditionEnumDataType = 15103;

        /// <summary>
        /// The identifier for the CRCL_AngleUnitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_AngleUnitEnumDataType = 15002;

        /// <summary>
        /// The identifier for the CRCL_ForceUnitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_ForceUnitEnumDataType = 15004;

        /// <summary>
        /// The identifier for the CRCL_FractionDataType DataType.
        /// </summary>
        public const uint CRCL_FractionDataType = 15006;

        /// <summary>
        /// The identifier for the CRCL_LengthUnitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_LengthUnitEnumDataType = 15007;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType DataType.
        /// </summary>
        public const uint CRCL_DataThingDataType = 15009;

        /// <summary>
        /// The identifier for the CRCL_PointDataType DataType.
        /// </summary>
        public const uint CRCL_PointDataType = 15011;

        /// <summary>
        /// The identifier for the CRCL_VectorDataType DataType.
        /// </summary>
        public const uint CRCL_VectorDataType = 15012;

        /// <summary>
        /// The identifier for the CRCL_PoseDataType DataType.
        /// </summary>
        public const uint CRCL_PoseDataType = 15013;

        /// <summary>
        /// The identifier for the CRCL_PositiveDecimalDataType DataType.
        /// </summary>
        public const uint CRCL_PositiveDecimalDataType = 15014;

        /// <summary>
        /// The identifier for the CRCL_TorqueUnitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_TorqueUnitEnumDataType = 15015;

        /// <summary>
        /// The identifier for the CRCL_TwistDataType DataType.
        /// </summary>
        public const uint CRCL_TwistDataType = 15017;

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType DataType.
        /// </summary>
        public const uint CRCL_WrenchDataType = 15018;

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType DataType.
        /// </summary>
        public const uint CRCL_PoseToleranceDataType = 15019;

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType DataType.
        /// </summary>
        public const uint CRCL_ParameterSettingDataType = 15020;

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType DataType.
        /// </summary>
        public const uint CRCL_RotAccelAbsoluteDataType = 15022;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType DataType.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType = 15023;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType DataType.
        /// </summary>
        public const uint CRCL_RotAccelDataType = 15021;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType DataType.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType = 15025;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType DataType.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType = 15026;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType DataType.
        /// </summary>
        public const uint CRCL_RotSpeedDataType = 15024;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType DataType.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType = 15028;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType DataType.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType = 15029;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType DataType.
        /// </summary>
        public const uint CRCL_TransAccelDataType = 15027;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType DataType.
        /// </summary>
        public const uint CRCL_TransSpeedAbsoluteDataType = 15030;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType DataType.
        /// </summary>
        public const uint CRCL_TransSpeedRelativeDataType = 15031;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType DataType.
        /// </summary>
        public const uint CRCL_TransSpeedDataType = 15033;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType DataType.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType = 15105;

        /// <summary>
        /// The identifier for the CRCL_GuardLimitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_GuardLimitEnumDataType = 15034;

        /// <summary>
        /// The identifier for the CRCL_GuardDataType DataType.
        /// </summary>
        public const uint CRCL_GuardDataType = 15036;

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType DataType.
        /// </summary>
        public const uint CRCL_JointPositionToleranceSettingDataType = 15037;

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType DataType.
        /// </summary>
        public const uint CRCL_JointPositionsTolerancesDataType = 15038;

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType DataType.
        /// </summary>
        public const uint CRCL_PoseAndSetDataType = 15039;

        /// <summary>
        /// The identifier for the CRCLCommandDataType DataType.
        /// </summary>
        public const uint CRCLCommandDataType = 15040;

        /// <summary>
        /// The identifier for the MiddleCommandDataType DataType.
        /// </summary>
        public const uint MiddleCommandDataType = 15041;

        /// <summary>
        /// The identifier for the EndCanonDataType DataType.
        /// </summary>
        public const uint EndCanonDataType = 15042;

        /// <summary>
        /// The identifier for the InitCanonDataType DataType.
        /// </summary>
        public const uint InitCanonDataType = 15043;

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType DataType.
        /// </summary>
        public const uint CRCL_JointDetailsDataType = 15044;

        /// <summary>
        /// The identifier for the ActuateJointDataType DataType.
        /// </summary>
        public const uint ActuateJointDataType = 15032;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType DataType.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType = 15128;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType DataType.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType = 15266;

        /// <summary>
        /// The identifier for the ActuateJointsDataType DataType.
        /// </summary>
        public const uint ActuateJointsDataType = 15048;

        /// <summary>
        /// The identifier for the MoveToDataType DataType.
        /// </summary>
        public const uint MoveToDataType = 15049;

        /// <summary>
        /// The identifier for the CloseToolChangerDataType DataType.
        /// </summary>
        public const uint CloseToolChangerDataType = 15050;

        /// <summary>
        /// The identifier for the DwellDataType DataType.
        /// </summary>
        public const uint DwellDataType = 15051;

        /// <summary>
        /// The identifier for the GetStatusDataType DataType.
        /// </summary>
        public const uint GetStatusDataType = 15052;

        /// <summary>
        /// The identifier for the MessageDataType DataType.
        /// </summary>
        public const uint MessageDataType = 15053;

        /// <summary>
        /// The identifier for the MoveScrewDataType DataType.
        /// </summary>
        public const uint MoveScrewDataType = 15054;

        /// <summary>
        /// The identifier for the MoveThroughToDataType DataType.
        /// </summary>
        public const uint MoveThroughToDataType = 15055;

        /// <summary>
        /// The identifier for the OpenToolChangerDataType DataType.
        /// </summary>
        public const uint OpenToolChangerDataType = 15056;

        /// <summary>
        /// The identifier for the RunProgramDataType DataType.
        /// </summary>
        public const uint RunProgramDataType = 15057;

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType DataType.
        /// </summary>
        public const uint SetAngleUnitsDataType = 15058;

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType DataType.
        /// </summary>
        public const uint SetEndEffectorParametersDataType = 15059;

        /// <summary>
        /// The identifier for the SetEndEffectorDataType DataType.
        /// </summary>
        public const uint SetEndEffectorDataType = 15060;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType DataType.
        /// </summary>
        public const uint SetEndPoseToleranceDataType = 15061;

        /// <summary>
        /// The identifier for the SetForceUnitsDataType DataType.
        /// </summary>
        public const uint SetForceUnitsDataType = 15062;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType DataType.
        /// </summary>
        public const uint SetIntermediatePoseToleranceDataType = 15063;

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType DataType.
        /// </summary>
        public const uint SetLengthUnitsDataType = 15064;

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType DataType.
        /// </summary>
        public const uint SetMotionCoordinationDataType = 15065;

        /// <summary>
        /// The identifier for the SetRobotParametersDataType DataType.
        /// </summary>
        public const uint SetRobotParametersDataType = 15066;

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType DataType.
        /// </summary>
        public const uint SetTorqueUnitsDataType = 15067;

        /// <summary>
        /// The identifier for the StopMotionDataType DataType.
        /// </summary>
        public const uint StopMotionDataType = 15068;

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType DataType.
        /// </summary>
        public const uint ConfigureStatusReportDataType = 15069;

        /// <summary>
        /// The identifier for the EnableSensorDataType DataType.
        /// </summary>
        public const uint EnableSensorDataType = 15070;

        /// <summary>
        /// The identifier for the DisableSensorDataType DataType.
        /// </summary>
        public const uint DisableSensorDataType = 15071;

        /// <summary>
        /// The identifier for the EnableGripperDataType DataType.
        /// </summary>
        public const uint EnableGripperDataType = 15072;

        /// <summary>
        /// The identifier for the DisableGripperDataType DataType.
        /// </summary>
        public const uint DisableGripperDataType = 15073;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType DataType.
        /// </summary>
        public const uint EnableRobotParameterStatusDataType = 15075;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType DataType.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType = 15076;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType DataType.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType = 15267;

        /// <summary>
        /// The identifier for the SetRotAccelDataType DataType.
        /// </summary>
        public const uint SetRotAccelDataType = 15078;

        /// <summary>
        /// The identifier for the SetTransAccelDataType DataType.
        /// </summary>
        public const uint SetTransAccelDataType = 15079;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType DataType.
        /// </summary>
        public const uint SetRotSpeedDataType = 15080;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType DataType.
        /// </summary>
        public const uint SetTransSpeedDataType = 15081;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType DataType.
        /// </summary>
        public const uint ConfigureJointReportsDataType = 15268;

        /// <summary>
        /// The identifier for the CRCL_CommandStateEnumDataType DataType.
        /// </summary>
        public const uint CRCL_CommandStateEnumDataType = 15083;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType DataType.
        /// </summary>
        public const uint CRCL_CommandStatusDataType = 15085;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_SensorStatusDataType = 15086;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType = 15087;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType = 15088;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType = 15089;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType = 15090;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType DataType.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType = 15091;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_GripperStatusDataType = 15092;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType = 15093;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType = 15094;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType = 15095;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType DataType.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType = 15096;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType DataType.
        /// </summary>
        public const uint CRCL_PoseStatusDataType = 15097;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType DataType.
        /// </summary>
        public const uint CRCL_JointLimitDataType = 15098;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType DataType.
        /// </summary>
        public const uint CRCL_JointStatusDataType = 15099;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType DataType.
        /// </summary>
        public const uint CRCL_JointStatusesDataType = 15100;

        /// <summary>
        /// The identifier for the CRCLStatusDataType DataType.
        /// </summary>
        public const uint CRCLStatusDataType = 15101;

        /// <summary>
        /// The identifier for the PubSubIPAddresses DataType.
        /// </summary>
        public const uint PubSubIPAddresses = 15001;

        /// <summary>
        /// The identifier for the SAMYRobotDataType DataType.
        /// </summary>
        public const uint SAMYRobotDataType = 15010;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType DataType.
        /// </summary>
        public const uint CRCLCommandsUnionDataType = 15102;

        /// <summary>
        /// The identifier for the CRCLSkillDataType DataType.
        /// </summary>
        public const uint CRCLSkillDataType = 15074;
    }
    #endregion

    #region Object Identifiers
    /// <summary>
    /// A class that declares constants for all Objects in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class Objects
    {
        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_FractionDataType_Encoding_DefaultBinary = 15107;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_DataThingDataType_Encoding_DefaultBinary = 15108;

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PointDataType_Encoding_DefaultBinary = 15110;

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_VectorDataType_Encoding_DefaultBinary = 15111;

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseDataType_Encoding_DefaultBinary = 15112;

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TwistDataType_Encoding_DefaultBinary = 15113;

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_WrenchDataType_Encoding_DefaultBinary = 15114;

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseToleranceDataType_Encoding_DefaultBinary = 15115;

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ParameterSettingDataType_Encoding_DefaultBinary = 15116;

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotAccelAbsoluteDataType_Encoding_DefaultBinary = 15118;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType_Encoding_DefaultBinary = 15119;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotAccelDataType_Encoding_DefaultBinary = 15117;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultBinary = 15121;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType_Encoding_DefaultBinary = 15122;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotSpeedDataType_Encoding_DefaultBinary = 15120;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType_Encoding_DefaultBinary = 15124;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType_Encoding_DefaultBinary = 15125;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransAccelDataType_Encoding_DefaultBinary = 15123;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultBinary = 15126;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransSpeedRelativeDataType_Encoding_DefaultBinary = 15127;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransSpeedDataType_Encoding_DefaultBinary = 15129;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType_Encoding_DefaultBinary = 15195;

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_GuardDataType_Encoding_DefaultBinary = 15130;

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultBinary = 15131;

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointPositionsTolerancesDataType_Encoding_DefaultBinary = 15132;

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseAndSetDataType_Encoding_DefaultBinary = 15133;

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandDataType_Encoding_DefaultBinary = 15134;

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MiddleCommandDataType_Encoding_DefaultBinary = 15135;

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EndCanonDataType_Encoding_DefaultBinary = 15136;

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint InitCanonDataType_Encoding_DefaultBinary = 15137;

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointDetailsDataType_Encoding_DefaultBinary = 15138;

        /// <summary>
        /// The identifier for the ActuateJointDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ActuateJointDataType_Encoding_DefaultBinary = 15492;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType_Encoding_DefaultBinary = 15630;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType_Encoding_DefaultBinary = 15631;

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ActuateJointsDataType_Encoding_DefaultBinary = 15142;

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveToDataType_Encoding_DefaultBinary = 15143;

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CloseToolChangerDataType_Encoding_DefaultBinary = 15144;

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DwellDataType_Encoding_DefaultBinary = 15145;

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint GetStatusDataType_Encoding_DefaultBinary = 15146;

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MessageDataType_Encoding_DefaultBinary = 15147;

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveScrewDataType_Encoding_DefaultBinary = 15148;

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveThroughToDataType_Encoding_DefaultBinary = 15149;

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint OpenToolChangerDataType_Encoding_DefaultBinary = 15150;

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint RunProgramDataType_Encoding_DefaultBinary = 15151;

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetAngleUnitsDataType_Encoding_DefaultBinary = 15152;

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndEffectorParametersDataType_Encoding_DefaultBinary = 15153;

        /// <summary>
        /// The identifier for the SetEndEffectorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndEffectorDataType_Encoding_DefaultBinary = 15154;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndPoseToleranceDataType_Encoding_DefaultBinary = 15155;

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetForceUnitsDataType_Encoding_DefaultBinary = 15156;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceDataType_Encoding_DefaultBinary = 15157;

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetLengthUnitsDataType_Encoding_DefaultBinary = 15158;

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetMotionCoordinationDataType_Encoding_DefaultBinary = 15159;

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRobotParametersDataType_Encoding_DefaultBinary = 15160;

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTorqueUnitsDataType_Encoding_DefaultBinary = 15161;

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint StopMotionDataType_Encoding_DefaultBinary = 15162;

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ConfigureStatusReportDataType_Encoding_DefaultBinary = 15163;

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableSensorDataType_Encoding_DefaultBinary = 15164;

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableSensorDataType_Encoding_DefaultBinary = 15165;

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableGripperDataType_Encoding_DefaultBinary = 15166;

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableGripperDataType_Encoding_DefaultBinary = 15167;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableRobotParameterStatusDataType_Encoding_DefaultBinary = 15169;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType_Encoding_DefaultBinary = 15170;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultBinary = 15632;

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRotAccelDataType_Encoding_DefaultBinary = 15172;

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTransAccelDataType_Encoding_DefaultBinary = 15173;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRotSpeedDataType_Encoding_DefaultBinary = 15174;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTransSpeedDataType_Encoding_DefaultBinary = 15175;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ConfigureJointReportsDataType_Encoding_DefaultBinary = 15856;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_CommandStatusDataType_Encoding_DefaultBinary = 15177;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_SensorStatusDataType_Encoding_DefaultBinary = 15178;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType_Encoding_DefaultBinary = 15179;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType_Encoding_DefaultBinary = 15180;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType_Encoding_DefaultBinary = 15181;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultBinary = 15182;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType_Encoding_DefaultBinary = 15183;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_GripperStatusDataType_Encoding_DefaultBinary = 15184;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType_Encoding_DefaultBinary = 15185;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultBinary = 15186;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType_Encoding_DefaultBinary = 15187;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType_Encoding_DefaultBinary = 15188;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseStatusDataType_Encoding_DefaultBinary = 15189;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointLimitDataType_Encoding_DefaultBinary = 15190;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointStatusDataType_Encoding_DefaultBinary = 15191;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointStatusesDataType_Encoding_DefaultBinary = 15192;

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLStatusDataType_Encoding_DefaultBinary = 15193;

        /// <summary>
        /// The identifier for the PubSubIPAddresses_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint PubSubIPAddresses_Encoding_DefaultBinary = 15106;

        /// <summary>
        /// The identifier for the SAMYRobotDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SAMYRobotDataType_Encoding_DefaultBinary = 15109;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandsUnionDataType_Encoding_DefaultBinary = 15194;

        /// <summary>
        /// The identifier for the CRCLSkillDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLSkillDataType_Encoding_DefaultBinary = 15168;

        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_FractionDataType_Encoding_DefaultXml = 15471;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_DataThingDataType_Encoding_DefaultXml = 15472;

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PointDataType_Encoding_DefaultXml = 15474;

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_VectorDataType_Encoding_DefaultXml = 15475;

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseDataType_Encoding_DefaultXml = 15476;

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TwistDataType_Encoding_DefaultXml = 15477;

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_WrenchDataType_Encoding_DefaultXml = 15478;

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseToleranceDataType_Encoding_DefaultXml = 15479;

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ParameterSettingDataType_Encoding_DefaultXml = 15480;

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotAccelAbsoluteDataType_Encoding_DefaultXml = 15482;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType_Encoding_DefaultXml = 15483;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotAccelDataType_Encoding_DefaultXml = 15481;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultXml = 15485;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType_Encoding_DefaultXml = 15486;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotSpeedDataType_Encoding_DefaultXml = 15484;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType_Encoding_DefaultXml = 15488;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType_Encoding_DefaultXml = 15489;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransAccelDataType_Encoding_DefaultXml = 15487;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultXml = 15490;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransSpeedRelativeDataType_Encoding_DefaultXml = 15491;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransSpeedDataType_Encoding_DefaultXml = 15493;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType_Encoding_DefaultXml = 15559;

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_GuardDataType_Encoding_DefaultXml = 15494;

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultXml = 15495;

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointPositionsTolerancesDataType_Encoding_DefaultXml = 15496;

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseAndSetDataType_Encoding_DefaultXml = 15497;

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandDataType_Encoding_DefaultXml = 15498;

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MiddleCommandDataType_Encoding_DefaultXml = 15499;

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EndCanonDataType_Encoding_DefaultXml = 15500;

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint InitCanonDataType_Encoding_DefaultXml = 15501;

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointDetailsDataType_Encoding_DefaultXml = 15502;

        /// <summary>
        /// The identifier for the ActuateJointDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ActuateJointDataType_Encoding_DefaultXml = 15939;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType_Encoding_DefaultXml = 15940;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType_Encoding_DefaultXml = 15941;

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ActuateJointsDataType_Encoding_DefaultXml = 15506;

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveToDataType_Encoding_DefaultXml = 15507;

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CloseToolChangerDataType_Encoding_DefaultXml = 15508;

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DwellDataType_Encoding_DefaultXml = 15509;

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint GetStatusDataType_Encoding_DefaultXml = 15510;

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MessageDataType_Encoding_DefaultXml = 15511;

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveScrewDataType_Encoding_DefaultXml = 15512;

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveThroughToDataType_Encoding_DefaultXml = 15513;

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint OpenToolChangerDataType_Encoding_DefaultXml = 15514;

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint RunProgramDataType_Encoding_DefaultXml = 15515;

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetAngleUnitsDataType_Encoding_DefaultXml = 15516;

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndEffectorParametersDataType_Encoding_DefaultXml = 15517;

        /// <summary>
        /// The identifier for the SetEndEffectorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndEffectorDataType_Encoding_DefaultXml = 15518;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndPoseToleranceDataType_Encoding_DefaultXml = 15519;

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetForceUnitsDataType_Encoding_DefaultXml = 15520;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceDataType_Encoding_DefaultXml = 15521;

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetLengthUnitsDataType_Encoding_DefaultXml = 15522;

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetMotionCoordinationDataType_Encoding_DefaultXml = 15523;

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRobotParametersDataType_Encoding_DefaultXml = 15524;

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTorqueUnitsDataType_Encoding_DefaultXml = 15525;

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint StopMotionDataType_Encoding_DefaultXml = 15526;

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ConfigureStatusReportDataType_Encoding_DefaultXml = 15527;

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableSensorDataType_Encoding_DefaultXml = 15528;

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableSensorDataType_Encoding_DefaultXml = 15529;

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableGripperDataType_Encoding_DefaultXml = 15530;

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableGripperDataType_Encoding_DefaultXml = 15531;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableRobotParameterStatusDataType_Encoding_DefaultXml = 15533;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType_Encoding_DefaultXml = 15534;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultXml = 15942;

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRotAccelDataType_Encoding_DefaultXml = 15536;

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTransAccelDataType_Encoding_DefaultXml = 15537;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRotSpeedDataType_Encoding_DefaultXml = 15538;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTransSpeedDataType_Encoding_DefaultXml = 15539;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ConfigureJointReportsDataType_Encoding_DefaultXml = 15943;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_CommandStatusDataType_Encoding_DefaultXml = 15541;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_SensorStatusDataType_Encoding_DefaultXml = 15542;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType_Encoding_DefaultXml = 15543;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType_Encoding_DefaultXml = 15544;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType_Encoding_DefaultXml = 15545;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultXml = 15546;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType_Encoding_DefaultXml = 15547;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_GripperStatusDataType_Encoding_DefaultXml = 15548;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType_Encoding_DefaultXml = 15549;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultXml = 15550;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType_Encoding_DefaultXml = 15551;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType_Encoding_DefaultXml = 15552;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseStatusDataType_Encoding_DefaultXml = 15553;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointLimitDataType_Encoding_DefaultXml = 15554;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointStatusDataType_Encoding_DefaultXml = 15555;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointStatusesDataType_Encoding_DefaultXml = 15556;

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLStatusDataType_Encoding_DefaultXml = 15557;

        /// <summary>
        /// The identifier for the PubSubIPAddresses_Encoding_DefaultXml Object.
        /// </summary>
        public const uint PubSubIPAddresses_Encoding_DefaultXml = 15470;

        /// <summary>
        /// The identifier for the SAMYRobotDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SAMYRobotDataType_Encoding_DefaultXml = 15473;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandsUnionDataType_Encoding_DefaultXml = 15558;

        /// <summary>
        /// The identifier for the CRCLSkillDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLSkillDataType_Encoding_DefaultXml = 15532;

        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_FractionDataType_Encoding_DefaultJson = 15835;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_DataThingDataType_Encoding_DefaultJson = 15836;

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PointDataType_Encoding_DefaultJson = 15838;

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_VectorDataType_Encoding_DefaultJson = 15839;

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseDataType_Encoding_DefaultJson = 15840;

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TwistDataType_Encoding_DefaultJson = 15841;

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_WrenchDataType_Encoding_DefaultJson = 15842;

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseToleranceDataType_Encoding_DefaultJson = 15843;

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ParameterSettingDataType_Encoding_DefaultJson = 15844;

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotAccelAbsoluteDataType_Encoding_DefaultJson = 15846;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType_Encoding_DefaultJson = 15847;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotAccelDataType_Encoding_DefaultJson = 15845;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultJson = 15849;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType_Encoding_DefaultJson = 15850;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotSpeedDataType_Encoding_DefaultJson = 15848;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType_Encoding_DefaultJson = 15852;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType_Encoding_DefaultJson = 15853;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransAccelDataType_Encoding_DefaultJson = 15851;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultJson = 15854;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransSpeedRelativeDataType_Encoding_DefaultJson = 15855;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransSpeedDataType_Encoding_DefaultJson = 15857;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType_Encoding_DefaultJson = 15923;

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_GuardDataType_Encoding_DefaultJson = 15858;

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultJson = 15859;

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointPositionsTolerancesDataType_Encoding_DefaultJson = 15860;

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseAndSetDataType_Encoding_DefaultJson = 15861;

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandDataType_Encoding_DefaultJson = 15862;

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MiddleCommandDataType_Encoding_DefaultJson = 15863;

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EndCanonDataType_Encoding_DefaultJson = 15864;

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint InitCanonDataType_Encoding_DefaultJson = 15865;

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointDetailsDataType_Encoding_DefaultJson = 15866;

        /// <summary>
        /// The identifier for the ActuateJointDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ActuateJointDataType_Encoding_DefaultJson = 15959;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType_Encoding_DefaultJson = 15960;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType_Encoding_DefaultJson = 15961;

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ActuateJointsDataType_Encoding_DefaultJson = 15870;

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveToDataType_Encoding_DefaultJson = 15871;

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CloseToolChangerDataType_Encoding_DefaultJson = 15872;

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DwellDataType_Encoding_DefaultJson = 15873;

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint GetStatusDataType_Encoding_DefaultJson = 15874;

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MessageDataType_Encoding_DefaultJson = 15875;

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveScrewDataType_Encoding_DefaultJson = 15876;

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveThroughToDataType_Encoding_DefaultJson = 15877;

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint OpenToolChangerDataType_Encoding_DefaultJson = 15878;

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint RunProgramDataType_Encoding_DefaultJson = 15879;

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetAngleUnitsDataType_Encoding_DefaultJson = 15880;

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndEffectorParametersDataType_Encoding_DefaultJson = 15881;

        /// <summary>
        /// The identifier for the SetEndEffectorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndEffectorDataType_Encoding_DefaultJson = 15882;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndPoseToleranceDataType_Encoding_DefaultJson = 15883;

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetForceUnitsDataType_Encoding_DefaultJson = 15884;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceDataType_Encoding_DefaultJson = 15885;

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetLengthUnitsDataType_Encoding_DefaultJson = 15886;

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetMotionCoordinationDataType_Encoding_DefaultJson = 15887;

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRobotParametersDataType_Encoding_DefaultJson = 15888;

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTorqueUnitsDataType_Encoding_DefaultJson = 15889;

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint StopMotionDataType_Encoding_DefaultJson = 15890;

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ConfigureStatusReportDataType_Encoding_DefaultJson = 15891;

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableSensorDataType_Encoding_DefaultJson = 15892;

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableSensorDataType_Encoding_DefaultJson = 15893;

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableGripperDataType_Encoding_DefaultJson = 15894;

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableGripperDataType_Encoding_DefaultJson = 15895;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableRobotParameterStatusDataType_Encoding_DefaultJson = 15897;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType_Encoding_DefaultJson = 15898;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultJson = 15962;

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRotAccelDataType_Encoding_DefaultJson = 15900;

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTransAccelDataType_Encoding_DefaultJson = 15901;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRotSpeedDataType_Encoding_DefaultJson = 15902;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTransSpeedDataType_Encoding_DefaultJson = 15903;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ConfigureJointReportsDataType_Encoding_DefaultJson = 15963;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_CommandStatusDataType_Encoding_DefaultJson = 15905;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_SensorStatusDataType_Encoding_DefaultJson = 15906;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType_Encoding_DefaultJson = 15907;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType_Encoding_DefaultJson = 15908;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType_Encoding_DefaultJson = 15909;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultJson = 15910;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType_Encoding_DefaultJson = 15911;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_GripperStatusDataType_Encoding_DefaultJson = 15912;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType_Encoding_DefaultJson = 15913;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultJson = 15914;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType_Encoding_DefaultJson = 15915;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType_Encoding_DefaultJson = 15916;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseStatusDataType_Encoding_DefaultJson = 15917;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointLimitDataType_Encoding_DefaultJson = 15918;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointStatusDataType_Encoding_DefaultJson = 15919;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointStatusesDataType_Encoding_DefaultJson = 15920;

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLStatusDataType_Encoding_DefaultJson = 15921;

        /// <summary>
        /// The identifier for the PubSubIPAddresses_Encoding_DefaultJson Object.
        /// </summary>
        public const uint PubSubIPAddresses_Encoding_DefaultJson = 15834;

        /// <summary>
        /// The identifier for the SAMYRobotDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SAMYRobotDataType_Encoding_DefaultJson = 15837;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandsUnionDataType_Encoding_DefaultJson = 15922;

        /// <summary>
        /// The identifier for the CRCLSkillDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLSkillDataType_Encoding_DefaultJson = 15896;
    }
    #endregion

    #region Variable Identifiers
    /// <summary>
    /// A class that declares constants for all Variables in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class Variables
    {
        /// <summary>
        /// The identifier for the CRCL_StopConditionEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_StopConditionEnumDataType_EnumStrings = 15104;

        /// <summary>
        /// The identifier for the CRCL_AngleUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_AngleUnitEnumDataType_EnumStrings = 15003;

        /// <summary>
        /// The identifier for the CRCL_ForceUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_ForceUnitEnumDataType_EnumStrings = 15005;

        /// <summary>
        /// The identifier for the CRCL_LengthUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_LengthUnitEnumDataType_EnumStrings = 15008;

        /// <summary>
        /// The identifier for the CRCL_TorqueUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_TorqueUnitEnumDataType_EnumStrings = 15016;

        /// <summary>
        /// The identifier for the CRCL_GuardLimitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_GuardLimitEnumDataType_EnumStrings = 15035;

        /// <summary>
        /// The identifier for the CRCL_CommandStateEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_CommandStateEnumDataType_EnumStrings = 15084;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema Variable.
        /// </summary>
        public const uint CRCL_BinarySchema = 15196;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_NamespaceUri Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_NamespaceUri = 15198;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_Deprecated Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_Deprecated = 15199;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_FractionDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_FractionDataType = 15203;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_DataThingDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_DataThingDataType = 15206;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PointDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PointDataType = 15212;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_VectorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_VectorDataType = 15215;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseDataType = 15218;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TwistDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TwistDataType = 15221;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_WrenchDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_WrenchDataType = 15224;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseToleranceDataType = 15227;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ParameterSettingDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ParameterSettingDataType = 15230;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotAccelAbsoluteDataType = 15236;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotAccelRelativeDataType = 15239;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotAccelDataType = 15233;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotSpeedAbsoluteDataType = 15245;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotSpeedRelativeDataType = 15248;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotSpeedDataType = 15242;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransAccelAbsoluteDataType = 15254;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransAccelRelativeDataType = 15257;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransAccelDataType = 15251;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransSpeedAbsoluteDataType = 15260;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransSpeedRelativeDataType = 15263;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransSpeedDataType = 15269;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ConfigureJointReportDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ConfigureJointReportDataType = 15467;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_GuardDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_GuardDataType = 15272;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointPositionToleranceSettingDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointPositionToleranceSettingDataType = 15275;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointPositionsTolerancesDataType = 15278;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseAndSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseAndSetDataType = 15281;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandDataType = 15284;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MiddleCommandDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MiddleCommandDataType = 15287;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EndCanonDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EndCanonDataType = 15290;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_InitCanonDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_InitCanonDataType = 15293;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointDetailsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointDetailsDataType = 15296;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ActuateJointDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ActuateJointDataType = 15924;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointForceTorqueDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointForceTorqueDataType = 15927;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointSpeedAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointSpeedAccelDataType = 15930;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ActuateJointsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ActuateJointsDataType = 15308;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveToDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveToDataType = 15311;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CloseToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CloseToolChangerDataType = 15314;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DwellDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DwellDataType = 15317;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_GetStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_GetStatusDataType = 15320;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MessageDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MessageDataType = 15323;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveScrewDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveScrewDataType = 15326;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveThroughToDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveThroughToDataType = 15329;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_OpenToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_OpenToolChangerDataType = 15332;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_RunProgramDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_RunProgramDataType = 15335;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetAngleUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetAngleUnitsDataType = 15338;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndEffectorParametersDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndEffectorParametersDataType = 15341;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndEffectorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndEffectorDataType = 15344;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndPoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndPoseToleranceDataType = 15347;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetForceUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetForceUnitsDataType = 15350;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetIntermediatePoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetIntermediatePoseToleranceDataType = 15353;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetLengthUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetLengthUnitsDataType = 15356;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetMotionCoordinationDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetMotionCoordinationDataType = 15359;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRobotParametersDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRobotParametersDataType = 15362;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTorqueUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTorqueUnitsDataType = 15365;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_StopMotionDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_StopMotionDataType = 15368;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureStatusReportDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ConfigureStatusReportDataType = 15371;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableSensorDataType = 15374;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableSensorDataType = 15377;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableGripperDataType = 15380;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableGripperDataType = 15383;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableRobotParameterStatusDataType = 15389;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableRobotParameterStatusDataType = 15392;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetDefaultJointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetDefaultJointPositionsTolerancesDataType = 15933;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRotAccelDataType = 15398;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTransAccelDataType = 15401;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRotSpeedDataType = 15404;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTransSpeedDataType = 15407;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureJointReportsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ConfigureJointReportsDataType = 15936;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_CommandStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_CommandStatusDataType = 15413;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_SensorStatusDataType = 15416;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_CountSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_CountSensorStatusDataType = 15419;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_OnOffSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_OnOffSensorStatusDataType = 15422;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ScalarSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ScalarSensorStatusDataType = 15425;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ForceTorqueSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ForceTorqueSensorStatusDataType = 15428;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SensorStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_SensorStatusesDataType = 15431;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_GripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_GripperStatusDataType = 15434;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ParallelGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ParallelGripperStatusDataType = 15437;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ThreeFingerGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ThreeFingerGripperStatusDataType = 15440;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_VacuumGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_VacuumGripperStatusDataType = 15443;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SettingsStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_SettingsStatusDataType = 15446;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseStatusDataType = 15449;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointLimitDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointLimitDataType = 15452;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointStatusDataType = 15455;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointStatusesDataType = 15458;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLStatusDataType = 15461;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_PubSubIPAddresses Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_PubSubIPAddresses = 15200;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SAMYRobotDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SAMYRobotDataType = 15209;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandsUnionDataType = 15464;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLSkillDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLSkillDataType = 15386;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema Variable.
        /// </summary>
        public const uint CRCL_XmlSchema = 15560;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_NamespaceUri Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_NamespaceUri = 15562;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_Deprecated Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_Deprecated = 15563;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_FractionDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_FractionDataType = 15567;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_DataThingDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_DataThingDataType = 15570;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PointDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PointDataType = 15576;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_VectorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_VectorDataType = 15579;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseDataType = 15582;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TwistDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TwistDataType = 15585;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_WrenchDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_WrenchDataType = 15588;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseToleranceDataType = 15591;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ParameterSettingDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ParameterSettingDataType = 15594;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotAccelAbsoluteDataType = 15600;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotAccelRelativeDataType = 15603;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotAccelDataType = 15597;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotSpeedAbsoluteDataType = 15609;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotSpeedRelativeDataType = 15612;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotSpeedDataType = 15606;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransAccelAbsoluteDataType = 15618;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransAccelRelativeDataType = 15621;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransAccelDataType = 15615;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransSpeedAbsoluteDataType = 15624;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransSpeedRelativeDataType = 15627;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransSpeedDataType = 15633;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ConfigureJointReportDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ConfigureJointReportDataType = 15831;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_GuardDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_GuardDataType = 15636;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointPositionToleranceSettingDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointPositionToleranceSettingDataType = 15639;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointPositionsTolerancesDataType = 15642;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseAndSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseAndSetDataType = 15645;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandDataType = 15648;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MiddleCommandDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MiddleCommandDataType = 15651;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EndCanonDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EndCanonDataType = 15654;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_InitCanonDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_InitCanonDataType = 15657;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointDetailsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointDetailsDataType = 15660;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ActuateJointDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ActuateJointDataType = 15944;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointForceTorqueDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointForceTorqueDataType = 15947;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointSpeedAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointSpeedAccelDataType = 15950;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ActuateJointsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ActuateJointsDataType = 15672;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveToDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveToDataType = 15675;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CloseToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CloseToolChangerDataType = 15678;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DwellDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DwellDataType = 15681;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_GetStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_GetStatusDataType = 15684;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MessageDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MessageDataType = 15687;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveScrewDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveScrewDataType = 15690;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveThroughToDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveThroughToDataType = 15693;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_OpenToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_OpenToolChangerDataType = 15696;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_RunProgramDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_RunProgramDataType = 15699;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetAngleUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetAngleUnitsDataType = 15702;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndEffectorParametersDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndEffectorParametersDataType = 15705;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndEffectorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndEffectorDataType = 15708;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndPoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndPoseToleranceDataType = 15711;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetForceUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetForceUnitsDataType = 15714;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetIntermediatePoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetIntermediatePoseToleranceDataType = 15717;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetLengthUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetLengthUnitsDataType = 15720;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetMotionCoordinationDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetMotionCoordinationDataType = 15723;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRobotParametersDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRobotParametersDataType = 15726;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTorqueUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTorqueUnitsDataType = 15729;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_StopMotionDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_StopMotionDataType = 15732;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureStatusReportDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ConfigureStatusReportDataType = 15735;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableSensorDataType = 15738;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableSensorDataType = 15741;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableGripperDataType = 15744;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableGripperDataType = 15747;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableRobotParameterStatusDataType = 15753;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableRobotParameterStatusDataType = 15756;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetDefaultJointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetDefaultJointPositionsTolerancesDataType = 15953;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRotAccelDataType = 15762;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTransAccelDataType = 15765;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRotSpeedDataType = 15768;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTransSpeedDataType = 15771;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureJointReportsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ConfigureJointReportsDataType = 15956;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_CommandStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_CommandStatusDataType = 15777;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_SensorStatusDataType = 15780;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_CountSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_CountSensorStatusDataType = 15783;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_OnOffSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_OnOffSensorStatusDataType = 15786;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ScalarSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ScalarSensorStatusDataType = 15789;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ForceTorqueSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ForceTorqueSensorStatusDataType = 15792;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SensorStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_SensorStatusesDataType = 15795;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_GripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_GripperStatusDataType = 15798;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ParallelGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ParallelGripperStatusDataType = 15801;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ThreeFingerGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ThreeFingerGripperStatusDataType = 15804;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_VacuumGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_VacuumGripperStatusDataType = 15807;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SettingsStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_SettingsStatusDataType = 15810;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseStatusDataType = 15813;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointLimitDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointLimitDataType = 15816;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointStatusDataType = 15819;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointStatusesDataType = 15822;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLStatusDataType = 15825;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_PubSubIPAddresses Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_PubSubIPAddresses = 15564;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SAMYRobotDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SAMYRobotDataType = 15573;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandsUnionDataType = 15828;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLSkillDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLSkillDataType = 15750;
    }
    #endregion

    #region DataType Node Identifiers
    /// <summary>
    /// A class that declares constants for all DataTypes in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class DataTypeIds
    {
        /// <summary>
        /// The identifier for the CRCL_StopConditionEnumDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_StopConditionEnumDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_StopConditionEnumDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_AngleUnitEnumDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_AngleUnitEnumDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_AngleUnitEnumDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ForceUnitEnumDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ForceUnitEnumDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ForceUnitEnumDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_FractionDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_FractionDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_FractionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_LengthUnitEnumDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_LengthUnitEnumDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_LengthUnitEnumDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_DataThingDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_DataThingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PointDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PointDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_PointDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VectorDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VectorDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_VectorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_PoseDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PositiveDecimalDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PositiveDecimalDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_PositiveDecimalDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TorqueUnitEnumDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TorqueUnitEnumDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TorqueUnitEnumDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TwistDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TwistDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TwistDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_WrenchDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_WrenchDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseToleranceDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_PoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParameterSettingDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ParameterSettingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelAbsoluteDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_RotAccelAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelRelativeDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_RotAccelRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_RotAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedAbsoluteDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_RotSpeedAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedRelativeDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_RotSpeedRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_RotSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelAbsoluteDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TransAccelAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelRelativeDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TransAccelRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TransAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedAbsoluteDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TransSpeedAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedRelativeDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TransSpeedRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_TransSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ConfigureJointReportDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ConfigureJointReportDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GuardLimitEnumDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GuardLimitEnumDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_GuardLimitEnumDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GuardDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GuardDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_GuardDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionToleranceSettingDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointPositionToleranceSettingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionsTolerancesDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointPositionsTolerancesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseAndSetDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_PoseAndSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MiddleCommandDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MiddleCommandDataType = new ExpandedNodeId(CRCL.DataTypes.MiddleCommandDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonDataType = new ExpandedNodeId(CRCL.DataTypes.EndCanonDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonDataType = new ExpandedNodeId(CRCL.DataTypes.InitCanonDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointDetailsDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointDetailsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointDataType = new ExpandedNodeId(CRCL.DataTypes.ActuateJointDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointForceTorqueDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointForceTorqueDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointSpeedAccelDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointSpeedAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsDataType = new ExpandedNodeId(CRCL.DataTypes.ActuateJointsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MoveToDataType = new ExpandedNodeId(CRCL.DataTypes.MoveToDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerDataType = new ExpandedNodeId(CRCL.DataTypes.CloseToolChangerDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DwellDataType = new ExpandedNodeId(CRCL.DataTypes.DwellDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusDataType = new ExpandedNodeId(CRCL.DataTypes.GetStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MessageDataType = new ExpandedNodeId(CRCL.DataTypes.MessageDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewDataType = new ExpandedNodeId(CRCL.DataTypes.MoveScrewDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToDataType = new ExpandedNodeId(CRCL.DataTypes.MoveThroughToDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerDataType = new ExpandedNodeId(CRCL.DataTypes.OpenToolChangerDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the RunProgramDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId RunProgramDataType = new ExpandedNodeId(CRCL.DataTypes.RunProgramDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsDataType = new ExpandedNodeId(CRCL.DataTypes.SetAngleUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorParametersDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndEffectorParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndEffectorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndPoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsDataType = new ExpandedNodeId(CRCL.DataTypes.SetForceUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceDataType = new ExpandedNodeId(CRCL.DataTypes.SetIntermediatePoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsDataType = new ExpandedNodeId(CRCL.DataTypes.SetLengthUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationDataType = new ExpandedNodeId(CRCL.DataTypes.SetMotionCoordinationDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersDataType = new ExpandedNodeId(CRCL.DataTypes.SetRobotParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsDataType = new ExpandedNodeId(CRCL.DataTypes.SetTorqueUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionDataType = new ExpandedNodeId(CRCL.DataTypes.StopMotionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportDataType = new ExpandedNodeId(CRCL.DataTypes.ConfigureStatusReportDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorDataType = new ExpandedNodeId(CRCL.DataTypes.EnableSensorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorDataType = new ExpandedNodeId(CRCL.DataTypes.DisableSensorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperDataType = new ExpandedNodeId(CRCL.DataTypes.EnableGripperDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperDataType = new ExpandedNodeId(CRCL.DataTypes.DisableGripperDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusDataType = new ExpandedNodeId(CRCL.DataTypes.EnableRobotParameterStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusDataType = new ExpandedNodeId(CRCL.DataTypes.DisableRobotParameterStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesDataType = new ExpandedNodeId(CRCL.DataTypes.SetDefaultJointPositionsTolerancesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelDataType = new ExpandedNodeId(CRCL.DataTypes.SetRotAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelDataType = new ExpandedNodeId(CRCL.DataTypes.SetTransAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedDataType = new ExpandedNodeId(CRCL.DataTypes.SetRotSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedDataType = new ExpandedNodeId(CRCL.DataTypes.SetTransSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsDataType = new ExpandedNodeId(CRCL.DataTypes.ConfigureJointReportsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CommandStateEnumDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CommandStateEnumDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_CommandStateEnumDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CommandStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_CommandStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_SensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CountSensorStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_CountSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_OnOffSensorStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_OnOffSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ScalarSensorStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ScalarSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ForceTorqueSensorStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ForceTorqueSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusesDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_SensorStatusesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GripperStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_GripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParallelGripperStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ParallelGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ThreeFingerGripperStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ThreeFingerGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VacuumGripperStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_VacuumGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SettingsStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_SettingsStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_PoseStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointLimitDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointLimitDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusesDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_JointStatusesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLStatusDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLStatusDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the PubSubIPAddresses DataType.
        /// </summary>
        public static readonly ExpandedNodeId PubSubIPAddresses = new ExpandedNodeId(CRCL.DataTypes.PubSubIPAddresses, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SAMYRobotDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SAMYRobotDataType = new ExpandedNodeId(CRCL.DataTypes.SAMYRobotDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLSkillDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLSkillDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLSkillDataType, CRCL.Namespaces.CRCL);
    }
    #endregion

    #region Object Node Identifiers
    /// <summary>
    /// A class that declares constants for all Objects in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class ObjectIds
    {
        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_FractionDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_FractionDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_DataThingDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_DataThingDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PointDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_PointDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VectorDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_VectorDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_PoseDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TwistDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_TwistDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_WrenchDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_WrenchDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseToleranceDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_PoseToleranceDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParameterSettingDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_ParameterSettingDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelAbsoluteDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelAbsoluteDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelRelativeDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelRelativeDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedRelativeDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedRelativeDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelAbsoluteDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelAbsoluteDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelRelativeDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelRelativeDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedRelativeDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedRelativeDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ConfigureJointReportDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_ConfigureJointReportDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GuardDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_GuardDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionsTolerancesDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointPositionsTolerancesDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseAndSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_PoseAndSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLCommandDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MiddleCommandDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MiddleCommandDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EndCanonDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.InitCanonDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointDetailsDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointDetailsDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.ActuateJointDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointForceTorqueDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointForceTorqueDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointSpeedAccelDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointSpeedAccelDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.ActuateJointsDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveToDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MoveToDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CloseToolChangerDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DwellDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DwellDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.GetStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MessageDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MessageDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MoveScrewDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MoveThroughToDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.OpenToolChangerDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId RunProgramDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.RunProgramDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetAngleUnitsDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorParametersDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndEffectorParametersDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndEffectorDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndPoseToleranceDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetForceUnitsDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetIntermediatePoseToleranceDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetLengthUnitsDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetMotionCoordinationDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetRobotParametersDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetTorqueUnitsDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.StopMotionDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.ConfigureStatusReportDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EnableSensorDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DisableSensorDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EnableGripperDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DisableGripperDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EnableRobotParameterStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DisableRobotParameterStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetRotAccelDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetTransAccelDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetRotSpeedDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetTransSpeedDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.ConfigureJointReportsDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CommandStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_CommandStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_SensorStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CountSensorStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_CountSensorStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_OnOffSensorStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_OnOffSensorStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ScalarSensorStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_ScalarSensorStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusesDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_SensorStatusesDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GripperStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_GripperStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParallelGripperStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_ParallelGripperStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VacuumGripperStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_VacuumGripperStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SettingsStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_SettingsStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_PoseStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointLimitDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointLimitDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusesDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_JointStatusesDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLStatusDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLStatusDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the PubSubIPAddresses_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId PubSubIPAddresses_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.PubSubIPAddresses_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SAMYRobotDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SAMYRobotDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SAMYRobotDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLCommandsUnionDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLSkillDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLSkillDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLSkillDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_FractionDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_FractionDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_DataThingDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_DataThingDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PointDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_PointDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VectorDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_VectorDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_PoseDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TwistDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_TwistDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_WrenchDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_WrenchDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseToleranceDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_PoseToleranceDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParameterSettingDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_ParameterSettingDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelAbsoluteDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelAbsoluteDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelRelativeDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelRelativeDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedRelativeDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedRelativeDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelAbsoluteDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelAbsoluteDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelRelativeDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelRelativeDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedRelativeDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedRelativeDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ConfigureJointReportDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_ConfigureJointReportDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GuardDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_GuardDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionsTolerancesDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointPositionsTolerancesDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseAndSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_PoseAndSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLCommandDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MiddleCommandDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MiddleCommandDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EndCanonDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.InitCanonDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointDetailsDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointDetailsDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.ActuateJointDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointForceTorqueDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointForceTorqueDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointSpeedAccelDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointSpeedAccelDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.ActuateJointsDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveToDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MoveToDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CloseToolChangerDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DwellDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DwellDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.GetStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MessageDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MessageDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MoveScrewDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MoveThroughToDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.OpenToolChangerDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId RunProgramDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.RunProgramDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetAngleUnitsDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorParametersDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndEffectorParametersDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndEffectorDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndPoseToleranceDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetForceUnitsDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetIntermediatePoseToleranceDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetLengthUnitsDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetMotionCoordinationDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetRobotParametersDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetTorqueUnitsDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.StopMotionDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.ConfigureStatusReportDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EnableSensorDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DisableSensorDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EnableGripperDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DisableGripperDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EnableRobotParameterStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DisableRobotParameterStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetRotAccelDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetTransAccelDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetRotSpeedDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetTransSpeedDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.ConfigureJointReportsDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CommandStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_CommandStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_SensorStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CountSensorStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_CountSensorStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_OnOffSensorStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_OnOffSensorStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ScalarSensorStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_ScalarSensorStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusesDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_SensorStatusesDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GripperStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_GripperStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParallelGripperStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_ParallelGripperStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VacuumGripperStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_VacuumGripperStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SettingsStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_SettingsStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_PoseStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointLimitDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointLimitDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusesDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_JointStatusesDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLStatusDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLStatusDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the PubSubIPAddresses_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId PubSubIPAddresses_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.PubSubIPAddresses_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SAMYRobotDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SAMYRobotDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SAMYRobotDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLCommandsUnionDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLSkillDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLSkillDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLSkillDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_FractionDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_FractionDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_DataThingDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_DataThingDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PointDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_PointDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VectorDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_VectorDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_PoseDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TwistDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_TwistDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_WrenchDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_WrenchDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseToleranceDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_PoseToleranceDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParameterSettingDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_ParameterSettingDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelAbsoluteDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelAbsoluteDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelRelativeDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelRelativeDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotAccelDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_RotAccelDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedRelativeDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedRelativeDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_RotSpeedDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_RotSpeedDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelAbsoluteDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelAbsoluteDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelRelativeDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelRelativeDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransAccelDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_TransAccelDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedRelativeDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedRelativeDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TransSpeedDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_TransSpeedDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ConfigureJointReportDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_ConfigureJointReportDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GuardDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_GuardDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointPositionsTolerancesDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointPositionsTolerancesDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseAndSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_PoseAndSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLCommandDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MiddleCommandDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MiddleCommandDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EndCanonDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.InitCanonDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointDetailsDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointDetailsDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.ActuateJointDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointForceTorqueDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointForceTorqueDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointSpeedAccelDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointSpeedAccelDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.ActuateJointsDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveToDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MoveToDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CloseToolChangerDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DwellDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DwellDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.GetStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MessageDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MessageDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MoveScrewDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MoveThroughToDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.OpenToolChangerDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId RunProgramDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.RunProgramDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetAngleUnitsDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorParametersDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorParametersDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndEffectorParametersDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndEffectorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndEffectorDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndEffectorDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndPoseToleranceDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetForceUnitsDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetIntermediatePoseToleranceDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetLengthUnitsDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetMotionCoordinationDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetRobotParametersDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetTorqueUnitsDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.StopMotionDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.ConfigureStatusReportDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EnableSensorDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DisableSensorDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EnableGripperDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DisableGripperDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EnableRobotParameterStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DisableRobotParameterStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetRotAccelDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetTransAccelDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetRotSpeedDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetTransSpeedDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.ConfigureJointReportsDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CommandStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_CommandStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_SensorStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CountSensorStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_CountSensorStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_OnOffSensorStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_OnOffSensorStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ScalarSensorStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_ScalarSensorStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SensorStatusesDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_SensorStatusesDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GripperStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_GripperStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ParallelGripperStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_ParallelGripperStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_VacuumGripperStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_VacuumGripperStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_SettingsStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_SettingsStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_PoseStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_PoseStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointLimitDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointLimitDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_JointStatusesDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_JointStatusesDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLStatusDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLStatusDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the PubSubIPAddresses_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId PubSubIPAddresses_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.PubSubIPAddresses_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SAMYRobotDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SAMYRobotDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SAMYRobotDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLCommandsUnionDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLSkillDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLSkillDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLSkillDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);
    }
    #endregion

    #region Variable Node Identifiers
    /// <summary>
    /// A class that declares constants for all Variables in the Model Design.
    /// </summary>
    /// <exclude />
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class VariableIds
    {
        /// <summary>
        /// The identifier for the CRCL_StopConditionEnumDataType_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_StopConditionEnumDataType_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCL_StopConditionEnumDataType_EnumStrings, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_AngleUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_AngleUnitEnumDataType_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCL_AngleUnitEnumDataType_EnumStrings, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_ForceUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ForceUnitEnumDataType_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCL_ForceUnitEnumDataType_EnumStrings, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_LengthUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_LengthUnitEnumDataType_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCL_LengthUnitEnumDataType_EnumStrings, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_TorqueUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_TorqueUnitEnumDataType_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCL_TorqueUnitEnumDataType_EnumStrings, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_GuardLimitEnumDataType_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_GuardLimitEnumDataType_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCL_GuardLimitEnumDataType_EnumStrings, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_CommandStateEnumDataType_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_CommandStateEnumDataType_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCL_CommandStateEnumDataType_EnumStrings, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_NamespaceUri Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_NamespaceUri = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_NamespaceUri, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_Deprecated Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_Deprecated = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_Deprecated, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_FractionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_FractionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_FractionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_DataThingDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_DataThingDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_DataThingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PointDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_PointDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_PointDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_VectorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_VectorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_VectorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_PoseDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_PoseDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TwistDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_TwistDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_TwistDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_WrenchDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_WrenchDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_WrenchDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseToleranceDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_PoseToleranceDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_PoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ParameterSettingDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_ParameterSettingDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_ParameterSettingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_RotAccelAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_RotAccelAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_RotAccelRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_RotAccelRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_RotAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_RotAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_RotSpeedAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_RotSpeedAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_RotSpeedRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_RotSpeedRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_RotSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_RotSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_TransAccelAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_TransAccelAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_TransAccelRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_TransAccelRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_TransAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_TransAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_TransSpeedAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_TransSpeedAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_TransSpeedRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_TransSpeedRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_TransSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_TransSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ConfigureJointReportDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_ConfigureJointReportDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_ConfigureJointReportDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_GuardDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_GuardDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_GuardDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointPositionToleranceSettingDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointPositionToleranceSettingDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointPositionToleranceSettingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointPositionsTolerancesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointPositionsTolerancesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointPositionsTolerancesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseAndSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_PoseAndSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_PoseAndSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLCommandDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLCommandDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MiddleCommandDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MiddleCommandDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MiddleCommandDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EndCanonDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EndCanonDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EndCanonDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_InitCanonDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_InitCanonDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_InitCanonDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointDetailsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointDetailsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointDetailsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ActuateJointDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_ActuateJointDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_ActuateJointDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointForceTorqueDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointForceTorqueDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointForceTorqueDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointSpeedAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointSpeedAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointSpeedAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ActuateJointsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_ActuateJointsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_ActuateJointsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveToDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MoveToDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MoveToDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CloseToolChangerDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CloseToolChangerDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CloseToolChangerDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DwellDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DwellDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DwellDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_GetStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_GetStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_GetStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MessageDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MessageDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MessageDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveScrewDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MoveScrewDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MoveScrewDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveThroughToDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MoveThroughToDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MoveThroughToDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_OpenToolChangerDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_OpenToolChangerDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_OpenToolChangerDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_RunProgramDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_RunProgramDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_RunProgramDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetAngleUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetAngleUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetAngleUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndEffectorParametersDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndEffectorParametersDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndEffectorParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndEffectorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndEffectorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndEffectorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndPoseToleranceDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndPoseToleranceDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndPoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetForceUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetForceUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetForceUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetIntermediatePoseToleranceDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetIntermediatePoseToleranceDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetIntermediatePoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetLengthUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetLengthUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetLengthUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetMotionCoordinationDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetMotionCoordinationDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetMotionCoordinationDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRobotParametersDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetRobotParametersDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetRobotParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTorqueUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetTorqueUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetTorqueUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_StopMotionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_StopMotionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_StopMotionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureStatusReportDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_ConfigureStatusReportDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_ConfigureStatusReportDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableSensorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EnableSensorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EnableSensorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableSensorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DisableSensorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DisableSensorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableGripperDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EnableGripperDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EnableGripperDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableGripperDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DisableGripperDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DisableGripperDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableRobotParameterStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EnableRobotParameterStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EnableRobotParameterStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableRobotParameterStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DisableRobotParameterStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DisableRobotParameterStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetDefaultJointPositionsTolerancesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetDefaultJointPositionsTolerancesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetDefaultJointPositionsTolerancesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetRotAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetRotAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetTransAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetTransAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetRotSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetRotSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetTransSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetTransSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureJointReportsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_ConfigureJointReportsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_ConfigureJointReportsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_CommandStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_CommandStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_CommandStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_SensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_SensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_CountSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_CountSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_CountSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_OnOffSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_OnOffSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_OnOffSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ScalarSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_ScalarSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_ScalarSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ForceTorqueSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_ForceTorqueSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_ForceTorqueSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SensorStatusesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_SensorStatusesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_SensorStatusesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_GripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_GripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_GripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ParallelGripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_ParallelGripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_ParallelGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ThreeFingerGripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_ThreeFingerGripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_ThreeFingerGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_VacuumGripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_VacuumGripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_VacuumGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SettingsStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_SettingsStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_SettingsStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_PoseStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_PoseStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointLimitDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointLimitDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointLimitDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointStatusesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_JointStatusesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_JointStatusesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_PubSubIPAddresses Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_PubSubIPAddresses = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_PubSubIPAddresses, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SAMYRobotDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SAMYRobotDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SAMYRobotDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLCommandsUnionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLCommandsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLSkillDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLSkillDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLSkillDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_NamespaceUri Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_NamespaceUri = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_NamespaceUri, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_Deprecated Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_Deprecated = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_Deprecated, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_FractionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_FractionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_FractionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_DataThingDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_DataThingDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_DataThingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PointDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_PointDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_PointDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_VectorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_VectorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_VectorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_PoseDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_PoseDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TwistDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_TwistDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_TwistDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_WrenchDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_WrenchDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_WrenchDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseToleranceDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_PoseToleranceDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_PoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ParameterSettingDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_ParameterSettingDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_ParameterSettingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_RotAccelAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_RotAccelAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_RotAccelRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_RotAccelRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_RotAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_RotAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_RotSpeedAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_RotSpeedAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_RotSpeedRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_RotSpeedRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_RotSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_RotSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_TransAccelAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_TransAccelAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_TransAccelRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_TransAccelRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_TransAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_TransAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedAbsoluteDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_TransSpeedAbsoluteDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_TransSpeedAbsoluteDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedRelativeDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_TransSpeedRelativeDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_TransSpeedRelativeDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_TransSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_TransSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ConfigureJointReportDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_ConfigureJointReportDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_ConfigureJointReportDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_GuardDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_GuardDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_GuardDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointPositionToleranceSettingDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointPositionToleranceSettingDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointPositionToleranceSettingDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointPositionsTolerancesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointPositionsTolerancesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointPositionsTolerancesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseAndSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_PoseAndSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_PoseAndSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLCommandDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLCommandDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MiddleCommandDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MiddleCommandDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MiddleCommandDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EndCanonDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EndCanonDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EndCanonDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_InitCanonDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_InitCanonDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_InitCanonDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointDetailsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointDetailsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointDetailsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ActuateJointDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_ActuateJointDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_ActuateJointDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointForceTorqueDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointForceTorqueDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointForceTorqueDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointSpeedAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointSpeedAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointSpeedAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ActuateJointsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_ActuateJointsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_ActuateJointsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveToDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MoveToDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MoveToDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CloseToolChangerDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CloseToolChangerDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CloseToolChangerDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DwellDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DwellDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DwellDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_GetStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_GetStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_GetStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MessageDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MessageDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MessageDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveScrewDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MoveScrewDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MoveScrewDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveThroughToDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MoveThroughToDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MoveThroughToDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_OpenToolChangerDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_OpenToolChangerDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_OpenToolChangerDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_RunProgramDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_RunProgramDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_RunProgramDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetAngleUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetAngleUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetAngleUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndEffectorParametersDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndEffectorParametersDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndEffectorParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndEffectorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndEffectorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndEffectorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndPoseToleranceDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndPoseToleranceDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndPoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetForceUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetForceUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetForceUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetIntermediatePoseToleranceDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetIntermediatePoseToleranceDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetIntermediatePoseToleranceDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetLengthUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetLengthUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetLengthUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetMotionCoordinationDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetMotionCoordinationDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetMotionCoordinationDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRobotParametersDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetRobotParametersDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetRobotParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTorqueUnitsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetTorqueUnitsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetTorqueUnitsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_StopMotionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_StopMotionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_StopMotionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureStatusReportDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_ConfigureStatusReportDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_ConfigureStatusReportDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableSensorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EnableSensorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EnableSensorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableSensorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DisableSensorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DisableSensorDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableGripperDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EnableGripperDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EnableGripperDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableGripperDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DisableGripperDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DisableGripperDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableRobotParameterStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EnableRobotParameterStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EnableRobotParameterStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableRobotParameterStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DisableRobotParameterStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DisableRobotParameterStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetDefaultJointPositionsTolerancesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetDefaultJointPositionsTolerancesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetDefaultJointPositionsTolerancesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetRotAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetRotAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransAccelDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetTransAccelDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetTransAccelDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetRotSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetRotSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransSpeedDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetTransSpeedDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetTransSpeedDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureJointReportsDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_ConfigureJointReportsDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_ConfigureJointReportsDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_CommandStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_CommandStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_CommandStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_SensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_SensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_CountSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_CountSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_CountSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_OnOffSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_OnOffSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_OnOffSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ScalarSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_ScalarSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_ScalarSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ForceTorqueSensorStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_ForceTorqueSensorStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_ForceTorqueSensorStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SensorStatusesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_SensorStatusesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_SensorStatusesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_GripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_GripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_GripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ParallelGripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_ParallelGripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_ParallelGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ThreeFingerGripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_ThreeFingerGripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_ThreeFingerGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_VacuumGripperStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_VacuumGripperStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_VacuumGripperStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SettingsStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_SettingsStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_SettingsStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_PoseStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_PoseStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointLimitDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointLimitDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointLimitDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointStatusesDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_JointStatusesDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_JointStatusesDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLStatusDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLStatusDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLStatusDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_PubSubIPAddresses Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_PubSubIPAddresses = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_PubSubIPAddresses, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SAMYRobotDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SAMYRobotDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SAMYRobotDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLCommandsUnionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLCommandsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLSkillDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLSkillDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLSkillDataType, CRCL.Namespaces.CRCL);
    }
    #endregion

    #region BrowseName Declarations
    /// <summary>
    /// Declares all of the BrowseNames used in the Model Design.
    /// </summary>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class BrowseNames
    {
        /// <summary>
        /// The BrowseName for the ActuateJointDataType component.
        /// </summary>
        public const string ActuateJointDataType = "ActuateJointDataType";

        /// <summary>
        /// The BrowseName for the ActuateJointsDataType component.
        /// </summary>
        public const string ActuateJointsDataType = "ActuateJointsDataType";

        /// <summary>
        /// The BrowseName for the CloseToolChangerDataType component.
        /// </summary>
        public const string CloseToolChangerDataType = "CloseToolChangerDataType";

        /// <summary>
        /// The BrowseName for the ConfigureJointReportsDataType component.
        /// </summary>
        public const string ConfigureJointReportsDataType = "ConfigureJointReportsDataType";

        /// <summary>
        /// The BrowseName for the ConfigureStatusReportDataType component.
        /// </summary>
        public const string ConfigureStatusReportDataType = "ConfigureStatusReportDataType";

        /// <summary>
        /// The BrowseName for the CRCL_AngleUnitEnumDataType component.
        /// </summary>
        public const string CRCL_AngleUnitEnumDataType = "CRCL_AngleUnitEnumDataType";

        /// <summary>
        /// The BrowseName for the CRCL_BinarySchema component.
        /// </summary>
        public const string CRCL_BinarySchema = "CRCL";

        /// <summary>
        /// The BrowseName for the CRCL_CommandStateEnumDataType component.
        /// </summary>
        public const string CRCL_CommandStateEnumDataType = "CRCL_CommandStateEnumDataType";

        /// <summary>
        /// The BrowseName for the CRCL_CommandStatusDataType component.
        /// </summary>
        public const string CRCL_CommandStatusDataType = "CRCL_CommandStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ConfigureJointReportDataType component.
        /// </summary>
        public const string CRCL_ConfigureJointReportDataType = "CRCL_ConfigureJointReportDataType";

        /// <summary>
        /// The BrowseName for the CRCL_CountSensorStatusDataType component.
        /// </summary>
        public const string CRCL_CountSensorStatusDataType = "CRCL_CountSensorStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_DataThingDataType component.
        /// </summary>
        public const string CRCL_DataThingDataType = "CRCL_DataThingDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ForceTorqueSensorStatusDataType component.
        /// </summary>
        public const string CRCL_ForceTorqueSensorStatusDataType = "CRCL_ForceTorqueSensorStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ForceUnitEnumDataType component.
        /// </summary>
        public const string CRCL_ForceUnitEnumDataType = "CRCL_ForceUnitEnumDataType";

        /// <summary>
        /// The BrowseName for the CRCL_FractionDataType component.
        /// </summary>
        public const string CRCL_FractionDataType = "CRCL_FractionDataType";

        /// <summary>
        /// The BrowseName for the CRCL_GripperStatusDataType component.
        /// </summary>
        public const string CRCL_GripperStatusDataType = "CRCL_GripperStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_GuardDataType component.
        /// </summary>
        public const string CRCL_GuardDataType = "CRCL_GuardDataType";

        /// <summary>
        /// The BrowseName for the CRCL_GuardLimitEnumDataType component.
        /// </summary>
        public const string CRCL_GuardLimitEnumDataType = "CRCL_GuardLimitEnumDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointDetailsDataType component.
        /// </summary>
        public const string CRCL_JointDetailsDataType = "CRCL_JointDetailsDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointForceTorqueDataType component.
        /// </summary>
        public const string CRCL_JointForceTorqueDataType = "CRCL_JointForceTorqueDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointLimitDataType component.
        /// </summary>
        public const string CRCL_JointLimitDataType = "CRCL_JointLimitDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointPositionsTolerancesDataType component.
        /// </summary>
        public const string CRCL_JointPositionsTolerancesDataType = "CRCL_JointPositionsTolerancesDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointPositionToleranceSettingDataType component.
        /// </summary>
        public const string CRCL_JointPositionToleranceSettingDataType = "CRCL_JointPositionToleranceSettingDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointSpeedAccelDataType component.
        /// </summary>
        public const string CRCL_JointSpeedAccelDataType = "CRCL_JointSpeedAccelDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointStatusDataType component.
        /// </summary>
        public const string CRCL_JointStatusDataType = "CRCL_JointStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_JointStatusesDataType component.
        /// </summary>
        public const string CRCL_JointStatusesDataType = "CRCL_JointStatusesDataType";

        /// <summary>
        /// The BrowseName for the CRCL_LengthUnitEnumDataType component.
        /// </summary>
        public const string CRCL_LengthUnitEnumDataType = "CRCL_LengthUnitEnumDataType";

        /// <summary>
        /// The BrowseName for the CRCL_OnOffSensorStatusDataType component.
        /// </summary>
        public const string CRCL_OnOffSensorStatusDataType = "CRCL_OnOffSensorStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ParallelGripperStatusDataType component.
        /// </summary>
        public const string CRCL_ParallelGripperStatusDataType = "CRCL_ParallelGripperStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ParameterSettingDataType component.
        /// </summary>
        public const string CRCL_ParameterSettingDataType = "CRCL_ParameterSettingDataType";

        /// <summary>
        /// The BrowseName for the CRCL_PointDataType component.
        /// </summary>
        public const string CRCL_PointDataType = "CRCL_PointDataType";

        /// <summary>
        /// The BrowseName for the CRCL_PoseAndSetDataType component.
        /// </summary>
        public const string CRCL_PoseAndSetDataType = "CRCL_PoseAndSetDataType";

        /// <summary>
        /// The BrowseName for the CRCL_PoseDataType component.
        /// </summary>
        public const string CRCL_PoseDataType = "CRCL_PoseDataType";

        /// <summary>
        /// The BrowseName for the CRCL_PoseStatusDataType component.
        /// </summary>
        public const string CRCL_PoseStatusDataType = "CRCL_PoseStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_PoseToleranceDataType component.
        /// </summary>
        public const string CRCL_PoseToleranceDataType = "CRCL_PoseToleranceDataType";

        /// <summary>
        /// The BrowseName for the CRCL_PositiveDecimalDataType component.
        /// </summary>
        public const string CRCL_PositiveDecimalDataType = "CRCL_PositiveDecimalDataType";

        /// <summary>
        /// The BrowseName for the CRCL_RotAccelAbsoluteDataType component.
        /// </summary>
        public const string CRCL_RotAccelAbsoluteDataType = "CRCL_RotAccelAbsoluteDataType";

        /// <summary>
        /// The BrowseName for the CRCL_RotAccelDataType component.
        /// </summary>
        public const string CRCL_RotAccelDataType = "CRCL_RotAccelDataType";

        /// <summary>
        /// The BrowseName for the CRCL_RotAccelRelativeDataType component.
        /// </summary>
        public const string CRCL_RotAccelRelativeDataType = "CRCL_RotAccelRelativeDataType";

        /// <summary>
        /// The BrowseName for the CRCL_RotSpeedAbsoluteDataType component.
        /// </summary>
        public const string CRCL_RotSpeedAbsoluteDataType = "CRCL_RotSpeedAbsoluteDataType";

        /// <summary>
        /// The BrowseName for the CRCL_RotSpeedDataType component.
        /// </summary>
        public const string CRCL_RotSpeedDataType = "CRCL_RotSpeedDataType";

        /// <summary>
        /// The BrowseName for the CRCL_RotSpeedRelativeDataType component.
        /// </summary>
        public const string CRCL_RotSpeedRelativeDataType = "CRCL_RotSpeedRelativeDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ScalarSensorStatusDataType component.
        /// </summary>
        public const string CRCL_ScalarSensorStatusDataType = "CRCL_ScalarSensorStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_SensorStatusDataType component.
        /// </summary>
        public const string CRCL_SensorStatusDataType = "CRCL_SensorStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_SensorStatusesDataType component.
        /// </summary>
        public const string CRCL_SensorStatusesDataType = "CRCL_SensorStatusesDataType";

        /// <summary>
        /// The BrowseName for the CRCL_SettingsStatusDataType component.
        /// </summary>
        public const string CRCL_SettingsStatusDataType = "CRCL_SettingsStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_StopConditionEnumDataType component.
        /// </summary>
        public const string CRCL_StopConditionEnumDataType = "CRCL_StopConditionEnumDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ThreeFingerGripperStatusDataType component.
        /// </summary>
        public const string CRCL_ThreeFingerGripperStatusDataType = "CRCL_ThreeFingerGripperStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TorqueUnitEnumDataType component.
        /// </summary>
        public const string CRCL_TorqueUnitEnumDataType = "CRCL_TorqueUnitEnumDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TransAccelAbsoluteDataType component.
        /// </summary>
        public const string CRCL_TransAccelAbsoluteDataType = "CRCL_TransAccelAbsoluteDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TransAccelDataType component.
        /// </summary>
        public const string CRCL_TransAccelDataType = "CRCL_TransAccelDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TransAccelRelativeDataType component.
        /// </summary>
        public const string CRCL_TransAccelRelativeDataType = "CRCL_TransAccelRelativeDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TransSpeedAbsoluteDataType component.
        /// </summary>
        public const string CRCL_TransSpeedAbsoluteDataType = "CRCL_TransSpeedAbsoluteDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TransSpeedDataType component.
        /// </summary>
        public const string CRCL_TransSpeedDataType = "CRCL_TransSpeedDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TransSpeedRelativeDataType component.
        /// </summary>
        public const string CRCL_TransSpeedRelativeDataType = "CRCL_TransSpeedRelativeDataType";

        /// <summary>
        /// The BrowseName for the CRCL_TwistDataType component.
        /// </summary>
        public const string CRCL_TwistDataType = "CRCL_TwistDataType";

        /// <summary>
        /// The BrowseName for the CRCL_VacuumGripperStatusDataType component.
        /// </summary>
        public const string CRCL_VacuumGripperStatusDataType = "CRCL_VacuumGripperStatusDataType";

        /// <summary>
        /// The BrowseName for the CRCL_VectorDataType component.
        /// </summary>
        public const string CRCL_VectorDataType = "CRCL_VectorDataType";

        /// <summary>
        /// The BrowseName for the CRCL_WrenchDataType component.
        /// </summary>
        public const string CRCL_WrenchDataType = "CRCL_WrenchDataType";

        /// <summary>
        /// The BrowseName for the CRCL_XmlSchema component.
        /// </summary>
        public const string CRCL_XmlSchema = "CRCL";

        /// <summary>
        /// The BrowseName for the CRCLCommandDataType component.
        /// </summary>
        public const string CRCLCommandDataType = "CRCLCommandDataType";

        /// <summary>
        /// The BrowseName for the CRCLCommandsUnionDataType component.
        /// </summary>
        public const string CRCLCommandsUnionDataType = "CRCLCommandsUnionDataType";

        /// <summary>
        /// The BrowseName for the CRCLSkillDataType component.
        /// </summary>
        public const string CRCLSkillDataType = "CRCLSkillDataType";

        /// <summary>
        /// The BrowseName for the CRCLStatusDataType component.
        /// </summary>
        public const string CRCLStatusDataType = "CRCLStatusDataType";

        /// <summary>
        /// The BrowseName for the DisableGripperDataType component.
        /// </summary>
        public const string DisableGripperDataType = "DisableGripperDataType";

        /// <summary>
        /// The BrowseName for the DisableRobotParameterStatusDataType component.
        /// </summary>
        public const string DisableRobotParameterStatusDataType = "DisableRobotParameterStatusDataType";

        /// <summary>
        /// The BrowseName for the DisableSensorDataType component.
        /// </summary>
        public const string DisableSensorDataType = "DisableSensorDataType";

        /// <summary>
        /// The BrowseName for the DwellDataType component.
        /// </summary>
        public const string DwellDataType = "DwellDataType";

        /// <summary>
        /// The BrowseName for the EnableGripperDataType component.
        /// </summary>
        public const string EnableGripperDataType = "EnableGripperDataType";

        /// <summary>
        /// The BrowseName for the EnableRobotParameterStatusDataType component.
        /// </summary>
        public const string EnableRobotParameterStatusDataType = "EnableRobotParameterStatusDataType";

        /// <summary>
        /// The BrowseName for the EnableSensorDataType component.
        /// </summary>
        public const string EnableSensorDataType = "EnableSensorDataType";

        /// <summary>
        /// The BrowseName for the EndCanonDataType component.
        /// </summary>
        public const string EndCanonDataType = "EndCanonDataType";

        /// <summary>
        /// The BrowseName for the GetStatusDataType component.
        /// </summary>
        public const string GetStatusDataType = "GetStatusDataType";

        /// <summary>
        /// The BrowseName for the InitCanonDataType component.
        /// </summary>
        public const string InitCanonDataType = "InitCanonDataType";

        /// <summary>
        /// The BrowseName for the MessageDataType component.
        /// </summary>
        public const string MessageDataType = "MessageDataType";

        /// <summary>
        /// The BrowseName for the MiddleCommandDataType component.
        /// </summary>
        public const string MiddleCommandDataType = "MiddleCommandDataType";

        /// <summary>
        /// The BrowseName for the MoveScrewDataType component.
        /// </summary>
        public const string MoveScrewDataType = "MoveScrewDataType";

        /// <summary>
        /// The BrowseName for the MoveThroughToDataType component.
        /// </summary>
        public const string MoveThroughToDataType = "MoveThroughToDataType";

        /// <summary>
        /// The BrowseName for the MoveToDataType component.
        /// </summary>
        public const string MoveToDataType = "MoveToDataType";

        /// <summary>
        /// The BrowseName for the OpenToolChangerDataType component.
        /// </summary>
        public const string OpenToolChangerDataType = "OpenToolChangerDataType";

        /// <summary>
        /// The BrowseName for the PubSubIPAddresses component.
        /// </summary>
        public const string PubSubIPAddresses = "PubSubIPAddresses";

        /// <summary>
        /// The BrowseName for the RunProgramDataType component.
        /// </summary>
        public const string RunProgramDataType = "RunProgramDataType";

        /// <summary>
        /// The BrowseName for the SAMYRobotDataType component.
        /// </summary>
        public const string SAMYRobotDataType = "SAMYRobotDataType";

        /// <summary>
        /// The BrowseName for the SetAngleUnitsDataType component.
        /// </summary>
        public const string SetAngleUnitsDataType = "SetAngleUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetDefaultJointPositionsTolerancesDataType component.
        /// </summary>
        public const string SetDefaultJointPositionsTolerancesDataType = "SetDefaultJointPositionsTolerancesDataType";

        /// <summary>
        /// The BrowseName for the SetEndEffectorDataType component.
        /// </summary>
        public const string SetEndEffectorDataType = "SetEndEffectorDataType";

        /// <summary>
        /// The BrowseName for the SetEndEffectorParametersDataType component.
        /// </summary>
        public const string SetEndEffectorParametersDataType = "SetEndEffectorParametersDataType";

        /// <summary>
        /// The BrowseName for the SetEndPoseToleranceDataType component.
        /// </summary>
        public const string SetEndPoseToleranceDataType = "SetEndPoseToleranceDataType";

        /// <summary>
        /// The BrowseName for the SetForceUnitsDataType component.
        /// </summary>
        public const string SetForceUnitsDataType = "SetForceUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetIntermediatePoseToleranceDataType component.
        /// </summary>
        public const string SetIntermediatePoseToleranceDataType = "SetIntermediatePoseToleranceDataType";

        /// <summary>
        /// The BrowseName for the SetLengthUnitsDataType component.
        /// </summary>
        public const string SetLengthUnitsDataType = "SetLengthUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetMotionCoordinationDataType component.
        /// </summary>
        public const string SetMotionCoordinationDataType = "SetMotionCoordinationDataType";

        /// <summary>
        /// The BrowseName for the SetRobotParametersDataType component.
        /// </summary>
        public const string SetRobotParametersDataType = "SetRobotParametersDataType";

        /// <summary>
        /// The BrowseName for the SetRotAccelDataType component.
        /// </summary>
        public const string SetRotAccelDataType = "SetRotAccelDataType";

        /// <summary>
        /// The BrowseName for the SetRotSpeedDataType component.
        /// </summary>
        public const string SetRotSpeedDataType = "SetRotSpeedDataType";

        /// <summary>
        /// The BrowseName for the SetTorqueUnitsDataType component.
        /// </summary>
        public const string SetTorqueUnitsDataType = "SetTorqueUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetTransAccelDataType component.
        /// </summary>
        public const string SetTransAccelDataType = "SetTransAccelDataType";

        /// <summary>
        /// The BrowseName for the SetTransSpeedDataType component.
        /// </summary>
        public const string SetTransSpeedDataType = "SetTransSpeedDataType";

        /// <summary>
        /// The BrowseName for the StopMotionDataType component.
        /// </summary>
        public const string StopMotionDataType = "StopMotionDataType";
    }
    #endregion

    #region Namespace Declarations
    /// <summary>
    /// Defines constants for all namespaces referenced by the model design.
    /// </summary>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("Opc.Ua.ModelCompiler", "1.0.0.0")]
    public static partial class Namespaces
    {
        /// <summary>
        /// The URI for the CRCL namespace (.NET code namespace is 'CRCL').
        /// </summary>
        public const string CRCL = "https://crcl.org";

        /// <summary>
        /// The URI for the OpcUa namespace (.NET code namespace is 'Opc.Ua').
        /// </summary>
        public const string OpcUa = "http://opcfoundation.org/UA/";

        /// <summary>
        /// The URI for the OpcUaXsd namespace (.NET code namespace is 'Opc.Ua').
        /// </summary>
        public const string OpcUaXsd = "http://opcfoundation.org/UA/2008/02/Types.xsd";
    }
    #endregion
}