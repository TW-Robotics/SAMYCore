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
        public const uint CRCL_StopConditionEnumDataType = 15001;

        /// <summary>
        /// The identifier for the CRCL_AngleUnitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_AngleUnitEnumDataType = 15003;

        /// <summary>
        /// The identifier for the CRCL_ForceUnitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_ForceUnitEnumDataType = 15005;

        /// <summary>
        /// The identifier for the CRCL_FractionDataType DataType.
        /// </summary>
        public const uint CRCL_FractionDataType = 15007;

        /// <summary>
        /// The identifier for the CRCL_LengthUnitEnumDataType DataType.
        /// </summary>
        public const uint CRCL_LengthUnitEnumDataType = 15008;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType DataType.
        /// </summary>
        public const uint CRCL_DataThingDataType = 15010;

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
        public const uint CRCL_RotAccelAbsoluteDataType = 15021;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType DataType.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType = 15022;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType DataType.
        /// </summary>
        public const uint CRCL_RotAccelDataType = 15023;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType DataType.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType = 15024;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType DataType.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType = 15025;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType DataType.
        /// </summary>
        public const uint CRCL_RotSpeedDataType = 15026;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType DataType.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType = 15027;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType DataType.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType = 15028;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType DataType.
        /// </summary>
        public const uint CRCL_TransAccelDataType = 15029;

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
        public const uint CRCL_TransSpeedDataType = 15032;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType DataType.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType = 15033;

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
        /// The identifier for the CRCL_ActuateJointDataType DataType.
        /// </summary>
        public const uint CRCL_ActuateJointDataType = 15045;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType DataType.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType = 15046;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType DataType.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType = 15047;

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
        /// The identifier for the SetEndeffectorParametersDataType DataType.
        /// </summary>
        public const uint SetEndeffectorParametersDataType = 15059;

        /// <summary>
        /// The identifier for the SetEndeffectorDataType DataType.
        /// </summary>
        public const uint SetEndeffectorDataType = 15060;

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
        public const uint EnableRobotParameterStatusDataType = 15074;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType DataType.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType = 15075;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType DataType.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType = 15076;

        /// <summary>
        /// The identifier for the SetRotAccelDataType DataType.
        /// </summary>
        public const uint SetRotAccelDataType = 15077;

        /// <summary>
        /// The identifier for the SetTransAccelDataType DataType.
        /// </summary>
        public const uint SetTransAccelDataType = 15078;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType DataType.
        /// </summary>
        public const uint SetRotSpeedDataType = 15079;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType DataType.
        /// </summary>
        public const uint SetTransSpeedDataType = 15080;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType DataType.
        /// </summary>
        public const uint ConfigureJointReportsDataType = 15081;

        /// <summary>
        /// The identifier for the CRCL_CommandStateEnumDataType DataType.
        /// </summary>
        public const uint CRCL_CommandStateEnumDataType = 15082;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType DataType.
        /// </summary>
        public const uint CRCL_CommandStatusDataType = 15084;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_SensorStatusDataType = 15085;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType = 15086;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType = 15087;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType = 15088;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType = 15089;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType DataType.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType = 15090;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_GripperStatusDataType = 15091;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType = 15092;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType = 15093;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType DataType.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType = 15094;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType DataType.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType = 15095;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType DataType.
        /// </summary>
        public const uint CRCL_PoseStatusDataType = 15096;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType DataType.
        /// </summary>
        public const uint CRCL_JointLimitDataType = 15097;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType DataType.
        /// </summary>
        public const uint CRCL_JointStatusDataType = 15098;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType DataType.
        /// </summary>
        public const uint CRCL_JointStatusesDataType = 15099;

        /// <summary>
        /// The identifier for the CRCLStatusDataType DataType.
        /// </summary>
        public const uint CRCLStatusDataType = 15100;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType DataType.
        /// </summary>
        public const uint CRCLCommandsUnionDataType = 15103;

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType DataType.
        /// </summary>
        public const uint CRCLCommandsBufferDataType = 16276;

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType DataType.
        /// </summary>
        public const uint CRCLCommandParamsSetDataType = 15101;

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType DataType.
        /// </summary>
        public const uint InitCanonParamsSetDataType = 15102;

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType DataType.
        /// </summary>
        public const uint EndCanonParamsSetDataType = 15104;

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType DataType.
        /// </summary>
        public const uint GetStatusParamsSetDataType = 15228;

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType DataType.
        /// </summary>
        public const uint CloseToolChangerParamsSetDataType = 15229;

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType DataType.
        /// </summary>
        public const uint OpenToolChangerParamsSetDataType = 15231;

        /// <summary>
        /// The identifier for the MessageParamsSetDataType DataType.
        /// </summary>
        public const uint MessageParamsSetDataType = 15527;

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType DataType.
        /// </summary>
        public const uint MoveToParamsSetDataType = 15528;

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType DataType.
        /// </summary>
        public const uint MoveScrewParamsSetDataType = 15529;

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType DataType.
        /// </summary>
        public const uint MoveThroughToParamsSetDataType = 15530;

        /// <summary>
        /// The identifier for the DwellParamsSetDataType DataType.
        /// </summary>
        public const uint DwellParamsSetDataType = 15531;

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType DataType.
        /// </summary>
        public const uint ActuateJointsParamsSetDataType = 15532;

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType DataType.
        /// </summary>
        public const uint ConfigureJointReportsParamsSetDataType = 15536;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType DataType.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesParamsSetDataType = 15537;

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType DataType.
        /// </summary>
        public const uint SetRobotParametersParamsSetDataType = 15538;

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType DataType.
        /// </summary>
        public const uint SetEndeffectorParametersParamsSetDataType = 15732;

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType DataType.
        /// </summary>
        public const uint SetEndeffectorParamsSetDataType = 15733;

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType DataType.
        /// </summary>
        public const uint SetTransSpeedParamsSetDataType = 15735;

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType DataType.
        /// </summary>
        public const uint SetTransAccelParamsSetDataType = 16031;

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType DataType.
        /// </summary>
        public const uint SetRotSpeedParamsSetDataType = 16032;

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType DataType.
        /// </summary>
        public const uint SetRotAccelParamsSetDataType = 16033;

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType DataType.
        /// </summary>
        public const uint SetAngleUnitsParamsSetDataType = 16034;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType DataType.
        /// </summary>
        public const uint SetEndPoseToleranceParamsSetDataType = 16035;

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType DataType.
        /// </summary>
        public const uint SetForceUnitsParamsSetDataType = 16036;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType DataType.
        /// </summary>
        public const uint SetIntermediatePoseToleranceParamsSetDataType = 16040;

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType DataType.
        /// </summary>
        public const uint SetLengthUnitsParamsSetDataType = 16041;

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType DataType.
        /// </summary>
        public const uint SetMotionCoordinationParamsSetDataType = 16042;

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType DataType.
        /// </summary>
        public const uint SetTorqueUnitsParamsSetDataType = 16236;

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType DataType.
        /// </summary>
        public const uint StopMotionParamsSetDataType = 16237;

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType DataType.
        /// </summary>
        public const uint ConfigureStatusReportParamsSetDataType = 16239;

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType DataType.
        /// </summary>
        public const uint EnableSensorParamsSetDataType = 16286;

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType DataType.
        /// </summary>
        public const uint DisableSensorParamsSetDataType = 16287;

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType DataType.
        /// </summary>
        public const uint EnableGripperParamsSetDataType = 16288;

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType DataType.
        /// </summary>
        public const uint DisableGripperParamsSetDataType = 16289;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType DataType.
        /// </summary>
        public const uint EnableRobotParameterStatusParamsSetDataType = 16290;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType DataType.
        /// </summary>
        public const uint DisableRobotParameterStatusParamsSetDataType = 16291;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType DataType.
        /// </summary>
        public const uint CRCLCommandsParamsSetsUnionDataType = 15115;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType DataType.
        /// </summary>
        public const uint CRCLCommandsParamsSetsBufferDataType = 15105;

        /// <summary>
        /// The identifier for the CRCLCommandsBufferState DataType.
        /// </summary>
        public const uint CRCLCommandsBufferState = 15014;
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
        public const uint CRCL_FractionDataType_Encoding_DefaultBinary = 15143;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_DataThingDataType_Encoding_DefaultBinary = 15144;

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PointDataType_Encoding_DefaultBinary = 15145;

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_VectorDataType_Encoding_DefaultBinary = 15146;

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseDataType_Encoding_DefaultBinary = 15147;

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TwistDataType_Encoding_DefaultBinary = 15148;

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_WrenchDataType_Encoding_DefaultBinary = 15149;

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseToleranceDataType_Encoding_DefaultBinary = 15150;

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ParameterSettingDataType_Encoding_DefaultBinary = 15151;

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotAccelAbsoluteDataType_Encoding_DefaultBinary = 15152;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType_Encoding_DefaultBinary = 15153;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotAccelDataType_Encoding_DefaultBinary = 15154;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultBinary = 15155;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType_Encoding_DefaultBinary = 15156;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_RotSpeedDataType_Encoding_DefaultBinary = 15157;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType_Encoding_DefaultBinary = 15158;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType_Encoding_DefaultBinary = 15159;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransAccelDataType_Encoding_DefaultBinary = 15160;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultBinary = 15161;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransSpeedRelativeDataType_Encoding_DefaultBinary = 15162;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_TransSpeedDataType_Encoding_DefaultBinary = 15163;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType_Encoding_DefaultBinary = 15164;

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_GuardDataType_Encoding_DefaultBinary = 15165;

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultBinary = 15166;

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointPositionsTolerancesDataType_Encoding_DefaultBinary = 15167;

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseAndSetDataType_Encoding_DefaultBinary = 15168;

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandDataType_Encoding_DefaultBinary = 15169;

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MiddleCommandDataType_Encoding_DefaultBinary = 15170;

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EndCanonDataType_Encoding_DefaultBinary = 15171;

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint InitCanonDataType_Encoding_DefaultBinary = 15172;

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointDetailsDataType_Encoding_DefaultBinary = 15173;

        /// <summary>
        /// The identifier for the CRCL_ActuateJointDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ActuateJointDataType_Encoding_DefaultBinary = 15174;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType_Encoding_DefaultBinary = 15175;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType_Encoding_DefaultBinary = 15176;

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ActuateJointsDataType_Encoding_DefaultBinary = 15177;

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveToDataType_Encoding_DefaultBinary = 15178;

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CloseToolChangerDataType_Encoding_DefaultBinary = 15179;

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DwellDataType_Encoding_DefaultBinary = 15180;

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint GetStatusDataType_Encoding_DefaultBinary = 15181;

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MessageDataType_Encoding_DefaultBinary = 15182;

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveScrewDataType_Encoding_DefaultBinary = 15183;

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveThroughToDataType_Encoding_DefaultBinary = 15184;

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint OpenToolChangerDataType_Encoding_DefaultBinary = 15185;

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint RunProgramDataType_Encoding_DefaultBinary = 15186;

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetAngleUnitsDataType_Encoding_DefaultBinary = 15187;

        /// <summary>
        /// The identifier for the SetEndeffectorParametersDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndeffectorParametersDataType_Encoding_DefaultBinary = 15188;

        /// <summary>
        /// The identifier for the SetEndeffectorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndeffectorDataType_Encoding_DefaultBinary = 15189;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndPoseToleranceDataType_Encoding_DefaultBinary = 15190;

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetForceUnitsDataType_Encoding_DefaultBinary = 15191;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceDataType_Encoding_DefaultBinary = 15192;

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetLengthUnitsDataType_Encoding_DefaultBinary = 15193;

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetMotionCoordinationDataType_Encoding_DefaultBinary = 15194;

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRobotParametersDataType_Encoding_DefaultBinary = 15195;

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTorqueUnitsDataType_Encoding_DefaultBinary = 15196;

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint StopMotionDataType_Encoding_DefaultBinary = 15197;

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ConfigureStatusReportDataType_Encoding_DefaultBinary = 15198;

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableSensorDataType_Encoding_DefaultBinary = 15199;

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableSensorDataType_Encoding_DefaultBinary = 15200;

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableGripperDataType_Encoding_DefaultBinary = 15201;

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableGripperDataType_Encoding_DefaultBinary = 15202;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableRobotParameterStatusDataType_Encoding_DefaultBinary = 15203;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType_Encoding_DefaultBinary = 15204;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultBinary = 15205;

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRotAccelDataType_Encoding_DefaultBinary = 15206;

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTransAccelDataType_Encoding_DefaultBinary = 15207;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRotSpeedDataType_Encoding_DefaultBinary = 15208;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTransSpeedDataType_Encoding_DefaultBinary = 15209;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ConfigureJointReportsDataType_Encoding_DefaultBinary = 15210;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_CommandStatusDataType_Encoding_DefaultBinary = 15211;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_SensorStatusDataType_Encoding_DefaultBinary = 15212;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType_Encoding_DefaultBinary = 15213;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType_Encoding_DefaultBinary = 15214;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType_Encoding_DefaultBinary = 15215;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultBinary = 15216;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType_Encoding_DefaultBinary = 15217;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_GripperStatusDataType_Encoding_DefaultBinary = 15218;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType_Encoding_DefaultBinary = 15219;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultBinary = 15220;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType_Encoding_DefaultBinary = 15221;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType_Encoding_DefaultBinary = 15222;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_PoseStatusDataType_Encoding_DefaultBinary = 15223;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointLimitDataType_Encoding_DefaultBinary = 15224;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointStatusDataType_Encoding_DefaultBinary = 15225;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCL_JointStatusesDataType_Encoding_DefaultBinary = 15226;

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLStatusDataType_Encoding_DefaultBinary = 15227;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandsUnionDataType_Encoding_DefaultBinary = 15230;

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandsBufferDataType_Encoding_DefaultBinary = 16277;

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandParamsSetDataType_Encoding_DefaultBinary = 16293;

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint InitCanonParamsSetDataType_Encoding_DefaultBinary = 16294;

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EndCanonParamsSetDataType_Encoding_DefaultBinary = 16295;

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint GetStatusParamsSetDataType_Encoding_DefaultBinary = 16296;

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CloseToolChangerParamsSetDataType_Encoding_DefaultBinary = 16297;

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint OpenToolChangerParamsSetDataType_Encoding_DefaultBinary = 16298;

        /// <summary>
        /// The identifier for the MessageParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MessageParamsSetDataType_Encoding_DefaultBinary = 16299;

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveToParamsSetDataType_Encoding_DefaultBinary = 16300;

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveScrewParamsSetDataType_Encoding_DefaultBinary = 16301;

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint MoveThroughToParamsSetDataType_Encoding_DefaultBinary = 16302;

        /// <summary>
        /// The identifier for the DwellParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DwellParamsSetDataType_Encoding_DefaultBinary = 16303;

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ActuateJointsParamsSetDataType_Encoding_DefaultBinary = 16304;

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ConfigureJointReportsParamsSetDataType_Encoding_DefaultBinary = 16305;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultBinary = 16306;

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRobotParametersParamsSetDataType_Encoding_DefaultBinary = 16307;

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndeffectorParametersParamsSetDataType_Encoding_DefaultBinary = 16308;

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndeffectorParamsSetDataType_Encoding_DefaultBinary = 16309;

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTransSpeedParamsSetDataType_Encoding_DefaultBinary = 16310;

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTransAccelParamsSetDataType_Encoding_DefaultBinary = 16311;

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRotSpeedParamsSetDataType_Encoding_DefaultBinary = 16312;

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetRotAccelParamsSetDataType_Encoding_DefaultBinary = 16313;

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetAngleUnitsParamsSetDataType_Encoding_DefaultBinary = 16314;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetEndPoseToleranceParamsSetDataType_Encoding_DefaultBinary = 16315;

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetForceUnitsParamsSetDataType_Encoding_DefaultBinary = 16316;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultBinary = 16317;

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetLengthUnitsParamsSetDataType_Encoding_DefaultBinary = 16318;

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetMotionCoordinationParamsSetDataType_Encoding_DefaultBinary = 16319;

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint SetTorqueUnitsParamsSetDataType_Encoding_DefaultBinary = 16320;

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint StopMotionParamsSetDataType_Encoding_DefaultBinary = 16321;

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint ConfigureStatusReportParamsSetDataType_Encoding_DefaultBinary = 16322;

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableSensorParamsSetDataType_Encoding_DefaultBinary = 16323;

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableSensorParamsSetDataType_Encoding_DefaultBinary = 16324;

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableGripperParamsSetDataType_Encoding_DefaultBinary = 16325;

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableGripperParamsSetDataType_Encoding_DefaultBinary = 16326;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary = 16327;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary = 16328;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultBinary = 15116;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public const uint CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultBinary = 15106;

        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_FractionDataType_Encoding_DefaultXml = 15647;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_DataThingDataType_Encoding_DefaultXml = 15648;

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PointDataType_Encoding_DefaultXml = 15649;

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_VectorDataType_Encoding_DefaultXml = 15650;

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseDataType_Encoding_DefaultXml = 15651;

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TwistDataType_Encoding_DefaultXml = 15652;

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_WrenchDataType_Encoding_DefaultXml = 15653;

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseToleranceDataType_Encoding_DefaultXml = 15654;

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ParameterSettingDataType_Encoding_DefaultXml = 15655;

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotAccelAbsoluteDataType_Encoding_DefaultXml = 15656;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType_Encoding_DefaultXml = 15657;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotAccelDataType_Encoding_DefaultXml = 15658;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultXml = 15659;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType_Encoding_DefaultXml = 15660;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_RotSpeedDataType_Encoding_DefaultXml = 15661;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType_Encoding_DefaultXml = 15662;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType_Encoding_DefaultXml = 15663;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransAccelDataType_Encoding_DefaultXml = 15664;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultXml = 15665;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransSpeedRelativeDataType_Encoding_DefaultXml = 15666;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_TransSpeedDataType_Encoding_DefaultXml = 15667;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType_Encoding_DefaultXml = 15668;

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_GuardDataType_Encoding_DefaultXml = 15669;

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultXml = 15670;

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointPositionsTolerancesDataType_Encoding_DefaultXml = 15671;

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseAndSetDataType_Encoding_DefaultXml = 15672;

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandDataType_Encoding_DefaultXml = 15673;

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MiddleCommandDataType_Encoding_DefaultXml = 15674;

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EndCanonDataType_Encoding_DefaultXml = 15675;

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint InitCanonDataType_Encoding_DefaultXml = 15676;

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointDetailsDataType_Encoding_DefaultXml = 15677;

        /// <summary>
        /// The identifier for the CRCL_ActuateJointDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ActuateJointDataType_Encoding_DefaultXml = 15678;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType_Encoding_DefaultXml = 15679;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType_Encoding_DefaultXml = 15680;

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ActuateJointsDataType_Encoding_DefaultXml = 15681;

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveToDataType_Encoding_DefaultXml = 15682;

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CloseToolChangerDataType_Encoding_DefaultXml = 15683;

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DwellDataType_Encoding_DefaultXml = 15684;

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint GetStatusDataType_Encoding_DefaultXml = 15685;

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MessageDataType_Encoding_DefaultXml = 15686;

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveScrewDataType_Encoding_DefaultXml = 15687;

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveThroughToDataType_Encoding_DefaultXml = 15688;

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint OpenToolChangerDataType_Encoding_DefaultXml = 15689;

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint RunProgramDataType_Encoding_DefaultXml = 15690;

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetAngleUnitsDataType_Encoding_DefaultXml = 15691;

        /// <summary>
        /// The identifier for the SetEndeffectorParametersDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndeffectorParametersDataType_Encoding_DefaultXml = 15692;

        /// <summary>
        /// The identifier for the SetEndeffectorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndeffectorDataType_Encoding_DefaultXml = 15693;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndPoseToleranceDataType_Encoding_DefaultXml = 15694;

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetForceUnitsDataType_Encoding_DefaultXml = 15695;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceDataType_Encoding_DefaultXml = 15696;

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetLengthUnitsDataType_Encoding_DefaultXml = 15697;

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetMotionCoordinationDataType_Encoding_DefaultXml = 15698;

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRobotParametersDataType_Encoding_DefaultXml = 15699;

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTorqueUnitsDataType_Encoding_DefaultXml = 15700;

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint StopMotionDataType_Encoding_DefaultXml = 15701;

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ConfigureStatusReportDataType_Encoding_DefaultXml = 15702;

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableSensorDataType_Encoding_DefaultXml = 15703;

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableSensorDataType_Encoding_DefaultXml = 15704;

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableGripperDataType_Encoding_DefaultXml = 15705;

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableGripperDataType_Encoding_DefaultXml = 15706;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableRobotParameterStatusDataType_Encoding_DefaultXml = 15707;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType_Encoding_DefaultXml = 15708;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultXml = 15709;

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRotAccelDataType_Encoding_DefaultXml = 15710;

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTransAccelDataType_Encoding_DefaultXml = 15711;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRotSpeedDataType_Encoding_DefaultXml = 15712;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTransSpeedDataType_Encoding_DefaultXml = 15713;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ConfigureJointReportsDataType_Encoding_DefaultXml = 15714;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_CommandStatusDataType_Encoding_DefaultXml = 15715;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_SensorStatusDataType_Encoding_DefaultXml = 15716;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType_Encoding_DefaultXml = 15717;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType_Encoding_DefaultXml = 15718;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType_Encoding_DefaultXml = 15719;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultXml = 15720;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType_Encoding_DefaultXml = 15721;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_GripperStatusDataType_Encoding_DefaultXml = 15722;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType_Encoding_DefaultXml = 15723;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultXml = 15724;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType_Encoding_DefaultXml = 15725;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType_Encoding_DefaultXml = 15726;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_PoseStatusDataType_Encoding_DefaultXml = 15727;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointLimitDataType_Encoding_DefaultXml = 15728;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointStatusDataType_Encoding_DefaultXml = 15729;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCL_JointStatusesDataType_Encoding_DefaultXml = 15730;

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLStatusDataType_Encoding_DefaultXml = 15731;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandsUnionDataType_Encoding_DefaultXml = 15734;

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandsBufferDataType_Encoding_DefaultXml = 16281;

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandParamsSetDataType_Encoding_DefaultXml = 16441;

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint InitCanonParamsSetDataType_Encoding_DefaultXml = 16442;

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EndCanonParamsSetDataType_Encoding_DefaultXml = 16443;

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint GetStatusParamsSetDataType_Encoding_DefaultXml = 16444;

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CloseToolChangerParamsSetDataType_Encoding_DefaultXml = 16445;

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint OpenToolChangerParamsSetDataType_Encoding_DefaultXml = 16446;

        /// <summary>
        /// The identifier for the MessageParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MessageParamsSetDataType_Encoding_DefaultXml = 16447;

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveToParamsSetDataType_Encoding_DefaultXml = 16448;

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveScrewParamsSetDataType_Encoding_DefaultXml = 16449;

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint MoveThroughToParamsSetDataType_Encoding_DefaultXml = 16450;

        /// <summary>
        /// The identifier for the DwellParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DwellParamsSetDataType_Encoding_DefaultXml = 16451;

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ActuateJointsParamsSetDataType_Encoding_DefaultXml = 16452;

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ConfigureJointReportsParamsSetDataType_Encoding_DefaultXml = 16453;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultXml = 16454;

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRobotParametersParamsSetDataType_Encoding_DefaultXml = 16455;

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndeffectorParametersParamsSetDataType_Encoding_DefaultXml = 16456;

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndeffectorParamsSetDataType_Encoding_DefaultXml = 16457;

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTransSpeedParamsSetDataType_Encoding_DefaultXml = 16458;

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTransAccelParamsSetDataType_Encoding_DefaultXml = 16459;

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRotSpeedParamsSetDataType_Encoding_DefaultXml = 16460;

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetRotAccelParamsSetDataType_Encoding_DefaultXml = 16461;

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetAngleUnitsParamsSetDataType_Encoding_DefaultXml = 16462;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetEndPoseToleranceParamsSetDataType_Encoding_DefaultXml = 16463;

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetForceUnitsParamsSetDataType_Encoding_DefaultXml = 16464;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultXml = 16465;

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetLengthUnitsParamsSetDataType_Encoding_DefaultXml = 16466;

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetMotionCoordinationParamsSetDataType_Encoding_DefaultXml = 16467;

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint SetTorqueUnitsParamsSetDataType_Encoding_DefaultXml = 16468;

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint StopMotionParamsSetDataType_Encoding_DefaultXml = 16469;

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint ConfigureStatusReportParamsSetDataType_Encoding_DefaultXml = 16470;

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableSensorParamsSetDataType_Encoding_DefaultXml = 16471;

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableSensorParamsSetDataType_Encoding_DefaultXml = 16472;

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableGripperParamsSetDataType_Encoding_DefaultXml = 16473;

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableGripperParamsSetDataType_Encoding_DefaultXml = 16474;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml = 16475;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml = 16476;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultXml = 15120;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultXml Object.
        /// </summary>
        public const uint CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultXml = 15110;

        /// <summary>
        /// The identifier for the CRCL_FractionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_FractionDataType_Encoding_DefaultJson = 16151;

        /// <summary>
        /// The identifier for the CRCL_DataThingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_DataThingDataType_Encoding_DefaultJson = 16152;

        /// <summary>
        /// The identifier for the CRCL_PointDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PointDataType_Encoding_DefaultJson = 16153;

        /// <summary>
        /// The identifier for the CRCL_VectorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_VectorDataType_Encoding_DefaultJson = 16154;

        /// <summary>
        /// The identifier for the CRCL_PoseDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseDataType_Encoding_DefaultJson = 16155;

        /// <summary>
        /// The identifier for the CRCL_TwistDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TwistDataType_Encoding_DefaultJson = 16156;

        /// <summary>
        /// The identifier for the CRCL_WrenchDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_WrenchDataType_Encoding_DefaultJson = 16157;

        /// <summary>
        /// The identifier for the CRCL_PoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseToleranceDataType_Encoding_DefaultJson = 16158;

        /// <summary>
        /// The identifier for the CRCL_ParameterSettingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ParameterSettingDataType_Encoding_DefaultJson = 16159;

        /// <summary>
        /// The identifier for the CRCL_RotAccelAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotAccelAbsoluteDataType_Encoding_DefaultJson = 16160;

        /// <summary>
        /// The identifier for the CRCL_RotAccelRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotAccelRelativeDataType_Encoding_DefaultJson = 16161;

        /// <summary>
        /// The identifier for the CRCL_RotAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotAccelDataType_Encoding_DefaultJson = 16162;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotSpeedAbsoluteDataType_Encoding_DefaultJson = 16163;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotSpeedRelativeDataType_Encoding_DefaultJson = 16164;

        /// <summary>
        /// The identifier for the CRCL_RotSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_RotSpeedDataType_Encoding_DefaultJson = 16165;

        /// <summary>
        /// The identifier for the CRCL_TransAccelAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransAccelAbsoluteDataType_Encoding_DefaultJson = 16166;

        /// <summary>
        /// The identifier for the CRCL_TransAccelRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransAccelRelativeDataType_Encoding_DefaultJson = 16167;

        /// <summary>
        /// The identifier for the CRCL_TransAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransAccelDataType_Encoding_DefaultJson = 16168;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransSpeedAbsoluteDataType_Encoding_DefaultJson = 16169;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedRelativeDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransSpeedRelativeDataType_Encoding_DefaultJson = 16170;

        /// <summary>
        /// The identifier for the CRCL_TransSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_TransSpeedDataType_Encoding_DefaultJson = 16171;

        /// <summary>
        /// The identifier for the CRCL_ConfigureJointReportDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ConfigureJointReportDataType_Encoding_DefaultJson = 16172;

        /// <summary>
        /// The identifier for the CRCL_GuardDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_GuardDataType_Encoding_DefaultJson = 16173;

        /// <summary>
        /// The identifier for the CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointPositionToleranceSettingDataType_Encoding_DefaultJson = 16174;

        /// <summary>
        /// The identifier for the CRCL_JointPositionsTolerancesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointPositionsTolerancesDataType_Encoding_DefaultJson = 16175;

        /// <summary>
        /// The identifier for the CRCL_PoseAndSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseAndSetDataType_Encoding_DefaultJson = 16176;

        /// <summary>
        /// The identifier for the CRCLCommandDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandDataType_Encoding_DefaultJson = 16177;

        /// <summary>
        /// The identifier for the MiddleCommandDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MiddleCommandDataType_Encoding_DefaultJson = 16178;

        /// <summary>
        /// The identifier for the EndCanonDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EndCanonDataType_Encoding_DefaultJson = 16179;

        /// <summary>
        /// The identifier for the InitCanonDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint InitCanonDataType_Encoding_DefaultJson = 16180;

        /// <summary>
        /// The identifier for the CRCL_JointDetailsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointDetailsDataType_Encoding_DefaultJson = 16181;

        /// <summary>
        /// The identifier for the CRCL_ActuateJointDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ActuateJointDataType_Encoding_DefaultJson = 16182;

        /// <summary>
        /// The identifier for the CRCL_JointForceTorqueDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointForceTorqueDataType_Encoding_DefaultJson = 16183;

        /// <summary>
        /// The identifier for the CRCL_JointSpeedAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointSpeedAccelDataType_Encoding_DefaultJson = 16184;

        /// <summary>
        /// The identifier for the ActuateJointsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ActuateJointsDataType_Encoding_DefaultJson = 16185;

        /// <summary>
        /// The identifier for the MoveToDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveToDataType_Encoding_DefaultJson = 16186;

        /// <summary>
        /// The identifier for the CloseToolChangerDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CloseToolChangerDataType_Encoding_DefaultJson = 16187;

        /// <summary>
        /// The identifier for the DwellDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DwellDataType_Encoding_DefaultJson = 16188;

        /// <summary>
        /// The identifier for the GetStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint GetStatusDataType_Encoding_DefaultJson = 16189;

        /// <summary>
        /// The identifier for the MessageDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MessageDataType_Encoding_DefaultJson = 16190;

        /// <summary>
        /// The identifier for the MoveScrewDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveScrewDataType_Encoding_DefaultJson = 16191;

        /// <summary>
        /// The identifier for the MoveThroughToDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveThroughToDataType_Encoding_DefaultJson = 16192;

        /// <summary>
        /// The identifier for the OpenToolChangerDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint OpenToolChangerDataType_Encoding_DefaultJson = 16193;

        /// <summary>
        /// The identifier for the RunProgramDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint RunProgramDataType_Encoding_DefaultJson = 16194;

        /// <summary>
        /// The identifier for the SetAngleUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetAngleUnitsDataType_Encoding_DefaultJson = 16195;

        /// <summary>
        /// The identifier for the SetEndeffectorParametersDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndeffectorParametersDataType_Encoding_DefaultJson = 16196;

        /// <summary>
        /// The identifier for the SetEndeffectorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndeffectorDataType_Encoding_DefaultJson = 16197;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndPoseToleranceDataType_Encoding_DefaultJson = 16198;

        /// <summary>
        /// The identifier for the SetForceUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetForceUnitsDataType_Encoding_DefaultJson = 16199;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceDataType_Encoding_DefaultJson = 16200;

        /// <summary>
        /// The identifier for the SetLengthUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetLengthUnitsDataType_Encoding_DefaultJson = 16201;

        /// <summary>
        /// The identifier for the SetMotionCoordinationDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetMotionCoordinationDataType_Encoding_DefaultJson = 16202;

        /// <summary>
        /// The identifier for the SetRobotParametersDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRobotParametersDataType_Encoding_DefaultJson = 16203;

        /// <summary>
        /// The identifier for the SetTorqueUnitsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTorqueUnitsDataType_Encoding_DefaultJson = 16204;

        /// <summary>
        /// The identifier for the StopMotionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint StopMotionDataType_Encoding_DefaultJson = 16205;

        /// <summary>
        /// The identifier for the ConfigureStatusReportDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ConfigureStatusReportDataType_Encoding_DefaultJson = 16206;

        /// <summary>
        /// The identifier for the EnableSensorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableSensorDataType_Encoding_DefaultJson = 16207;

        /// <summary>
        /// The identifier for the DisableSensorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableSensorDataType_Encoding_DefaultJson = 16208;

        /// <summary>
        /// The identifier for the EnableGripperDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableGripperDataType_Encoding_DefaultJson = 16209;

        /// <summary>
        /// The identifier for the DisableGripperDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableGripperDataType_Encoding_DefaultJson = 16210;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableRobotParameterStatusDataType_Encoding_DefaultJson = 16211;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableRobotParameterStatusDataType_Encoding_DefaultJson = 16212;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesDataType_Encoding_DefaultJson = 16213;

        /// <summary>
        /// The identifier for the SetRotAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRotAccelDataType_Encoding_DefaultJson = 16214;

        /// <summary>
        /// The identifier for the SetTransAccelDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTransAccelDataType_Encoding_DefaultJson = 16215;

        /// <summary>
        /// The identifier for the SetRotSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRotSpeedDataType_Encoding_DefaultJson = 16216;

        /// <summary>
        /// The identifier for the SetTransSpeedDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTransSpeedDataType_Encoding_DefaultJson = 16217;

        /// <summary>
        /// The identifier for the ConfigureJointReportsDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ConfigureJointReportsDataType_Encoding_DefaultJson = 16218;

        /// <summary>
        /// The identifier for the CRCL_CommandStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_CommandStatusDataType_Encoding_DefaultJson = 16219;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_SensorStatusDataType_Encoding_DefaultJson = 16220;

        /// <summary>
        /// The identifier for the CRCL_CountSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_CountSensorStatusDataType_Encoding_DefaultJson = 16221;

        /// <summary>
        /// The identifier for the CRCL_OnOffSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_OnOffSensorStatusDataType_Encoding_DefaultJson = 16222;

        /// <summary>
        /// The identifier for the CRCL_ScalarSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ScalarSensorStatusDataType_Encoding_DefaultJson = 16223;

        /// <summary>
        /// The identifier for the CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ForceTorqueSensorStatusDataType_Encoding_DefaultJson = 16224;

        /// <summary>
        /// The identifier for the CRCL_SensorStatusesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_SensorStatusesDataType_Encoding_DefaultJson = 16225;

        /// <summary>
        /// The identifier for the CRCL_GripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_GripperStatusDataType_Encoding_DefaultJson = 16226;

        /// <summary>
        /// The identifier for the CRCL_ParallelGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ParallelGripperStatusDataType_Encoding_DefaultJson = 16227;

        /// <summary>
        /// The identifier for the CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_ThreeFingerGripperStatusDataType_Encoding_DefaultJson = 16228;

        /// <summary>
        /// The identifier for the CRCL_VacuumGripperStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_VacuumGripperStatusDataType_Encoding_DefaultJson = 16229;

        /// <summary>
        /// The identifier for the CRCL_SettingsStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_SettingsStatusDataType_Encoding_DefaultJson = 16230;

        /// <summary>
        /// The identifier for the CRCL_PoseStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_PoseStatusDataType_Encoding_DefaultJson = 16231;

        /// <summary>
        /// The identifier for the CRCL_JointLimitDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointLimitDataType_Encoding_DefaultJson = 16232;

        /// <summary>
        /// The identifier for the CRCL_JointStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointStatusDataType_Encoding_DefaultJson = 16233;

        /// <summary>
        /// The identifier for the CRCL_JointStatusesDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCL_JointStatusesDataType_Encoding_DefaultJson = 16234;

        /// <summary>
        /// The identifier for the CRCLStatusDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLStatusDataType_Encoding_DefaultJson = 16235;

        /// <summary>
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandsUnionDataType_Encoding_DefaultJson = 16238;

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandsBufferDataType_Encoding_DefaultJson = 16285;

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandParamsSetDataType_Encoding_DefaultJson = 16589;

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint InitCanonParamsSetDataType_Encoding_DefaultJson = 16590;

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EndCanonParamsSetDataType_Encoding_DefaultJson = 16591;

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint GetStatusParamsSetDataType_Encoding_DefaultJson = 16592;

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CloseToolChangerParamsSetDataType_Encoding_DefaultJson = 16593;

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint OpenToolChangerParamsSetDataType_Encoding_DefaultJson = 16594;

        /// <summary>
        /// The identifier for the MessageParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MessageParamsSetDataType_Encoding_DefaultJson = 16595;

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveToParamsSetDataType_Encoding_DefaultJson = 16596;

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveScrewParamsSetDataType_Encoding_DefaultJson = 16597;

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint MoveThroughToParamsSetDataType_Encoding_DefaultJson = 16598;

        /// <summary>
        /// The identifier for the DwellParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DwellParamsSetDataType_Encoding_DefaultJson = 16599;

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ActuateJointsParamsSetDataType_Encoding_DefaultJson = 16600;

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ConfigureJointReportsParamsSetDataType_Encoding_DefaultJson = 16601;

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultJson = 16602;

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRobotParametersParamsSetDataType_Encoding_DefaultJson = 16603;

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndeffectorParametersParamsSetDataType_Encoding_DefaultJson = 16604;

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndeffectorParamsSetDataType_Encoding_DefaultJson = 16605;

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTransSpeedParamsSetDataType_Encoding_DefaultJson = 16606;

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTransAccelParamsSetDataType_Encoding_DefaultJson = 16607;

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRotSpeedParamsSetDataType_Encoding_DefaultJson = 16608;

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetRotAccelParamsSetDataType_Encoding_DefaultJson = 16609;

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetAngleUnitsParamsSetDataType_Encoding_DefaultJson = 16610;

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetEndPoseToleranceParamsSetDataType_Encoding_DefaultJson = 16611;

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetForceUnitsParamsSetDataType_Encoding_DefaultJson = 16612;

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultJson = 16613;

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetLengthUnitsParamsSetDataType_Encoding_DefaultJson = 16614;

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetMotionCoordinationParamsSetDataType_Encoding_DefaultJson = 16615;

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint SetTorqueUnitsParamsSetDataType_Encoding_DefaultJson = 16616;

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint StopMotionParamsSetDataType_Encoding_DefaultJson = 16617;

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint ConfigureStatusReportParamsSetDataType_Encoding_DefaultJson = 16618;

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableSensorParamsSetDataType_Encoding_DefaultJson = 16619;

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableSensorParamsSetDataType_Encoding_DefaultJson = 16620;

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableGripperParamsSetDataType_Encoding_DefaultJson = 16621;

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableGripperParamsSetDataType_Encoding_DefaultJson = 16622;

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson = 16623;

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson = 16624;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultJson = 15124;

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultJson Object.
        /// </summary>
        public const uint CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultJson = 15114;
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
        public const uint CRCL_StopConditionEnumDataType_EnumStrings = 15002;

        /// <summary>
        /// The identifier for the CRCL_AngleUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_AngleUnitEnumDataType_EnumStrings = 15004;

        /// <summary>
        /// The identifier for the CRCL_ForceUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_ForceUnitEnumDataType_EnumStrings = 15006;

        /// <summary>
        /// The identifier for the CRCL_LengthUnitEnumDataType_EnumStrings Variable.
        /// </summary>
        public const uint CRCL_LengthUnitEnumDataType_EnumStrings = 15009;

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
        public const uint CRCL_CommandStateEnumDataType_EnumStrings = 15083;

        /// <summary>
        /// The identifier for the CRCLCommandsBufferState_EnumStrings Variable.
        /// </summary>
        public const uint CRCLCommandsBufferState_EnumStrings = 15125;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema Variable.
        /// </summary>
        public const uint CRCL_BinarySchema = 15268;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_NamespaceUri Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_NamespaceUri = 15270;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_Deprecated Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_Deprecated = 15271;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_FractionDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_FractionDataType = 15272;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_DataThingDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_DataThingDataType = 15275;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PointDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PointDataType = 15278;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_VectorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_VectorDataType = 15281;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseDataType = 15284;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TwistDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TwistDataType = 15287;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_WrenchDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_WrenchDataType = 15290;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseToleranceDataType = 15293;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ParameterSettingDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ParameterSettingDataType = 15296;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotAccelAbsoluteDataType = 15299;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotAccelRelativeDataType = 15302;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotAccelDataType = 15305;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotSpeedAbsoluteDataType = 15308;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotSpeedRelativeDataType = 15311;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_RotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_RotSpeedDataType = 15314;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransAccelAbsoluteDataType = 15317;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransAccelRelativeDataType = 15320;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransAccelDataType = 15323;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransSpeedAbsoluteDataType = 15326;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransSpeedRelativeDataType = 15329;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_TransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_TransSpeedDataType = 15332;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ConfigureJointReportDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ConfigureJointReportDataType = 15335;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_GuardDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_GuardDataType = 15338;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointPositionToleranceSettingDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointPositionToleranceSettingDataType = 15341;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointPositionsTolerancesDataType = 15344;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseAndSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseAndSetDataType = 15347;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandDataType = 15350;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MiddleCommandDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MiddleCommandDataType = 15353;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EndCanonDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EndCanonDataType = 15356;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_InitCanonDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_InitCanonDataType = 15359;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointDetailsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointDetailsDataType = 15362;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ActuateJointDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ActuateJointDataType = 15365;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointForceTorqueDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointForceTorqueDataType = 15368;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointSpeedAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointSpeedAccelDataType = 15371;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ActuateJointsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ActuateJointsDataType = 15374;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveToDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveToDataType = 15377;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CloseToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CloseToolChangerDataType = 15380;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DwellDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DwellDataType = 15383;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_GetStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_GetStatusDataType = 15386;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MessageDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MessageDataType = 15389;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveScrewDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveScrewDataType = 15392;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveThroughToDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveThroughToDataType = 15395;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_OpenToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_OpenToolChangerDataType = 15398;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_RunProgramDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_RunProgramDataType = 15401;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetAngleUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetAngleUnitsDataType = 15404;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorParametersDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndeffectorParametersDataType = 15407;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndeffectorDataType = 15410;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndPoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndPoseToleranceDataType = 15413;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetForceUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetForceUnitsDataType = 15416;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetIntermediatePoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetIntermediatePoseToleranceDataType = 15419;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetLengthUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetLengthUnitsDataType = 15422;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetMotionCoordinationDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetMotionCoordinationDataType = 15425;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRobotParametersDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRobotParametersDataType = 15428;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTorqueUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTorqueUnitsDataType = 15431;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_StopMotionDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_StopMotionDataType = 15434;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureStatusReportDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ConfigureStatusReportDataType = 15437;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableSensorDataType = 15440;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableSensorDataType = 15443;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableGripperDataType = 15446;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableGripperDataType = 15449;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableRobotParameterStatusDataType = 15452;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableRobotParameterStatusDataType = 15455;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetDefaultJointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetDefaultJointPositionsTolerancesDataType = 15458;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRotAccelDataType = 15461;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTransAccelDataType = 15464;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRotSpeedDataType = 15467;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTransSpeedDataType = 15470;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureJointReportsDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ConfigureJointReportsDataType = 15473;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_CommandStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_CommandStatusDataType = 15476;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_SensorStatusDataType = 15479;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_CountSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_CountSensorStatusDataType = 15482;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_OnOffSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_OnOffSensorStatusDataType = 15485;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ScalarSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ScalarSensorStatusDataType = 15488;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ForceTorqueSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ForceTorqueSensorStatusDataType = 15491;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SensorStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_SensorStatusesDataType = 15494;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_GripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_GripperStatusDataType = 15497;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ParallelGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ParallelGripperStatusDataType = 15500;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_ThreeFingerGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_ThreeFingerGripperStatusDataType = 15503;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_VacuumGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_VacuumGripperStatusDataType = 15506;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_SettingsStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_SettingsStatusDataType = 15509;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_PoseStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_PoseStatusDataType = 15512;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointLimitDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointLimitDataType = 15515;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointStatusDataType = 15518;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCL_JointStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCL_JointStatusesDataType = 15521;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLStatusDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLStatusDataType = 15524;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandsUnionDataType = 15533;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsBufferDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandsBufferDataType = 16278;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandParamsSetDataType = 16330;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_InitCanonParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_InitCanonParamsSetDataType = 16333;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EndCanonParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EndCanonParamsSetDataType = 16336;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_GetStatusParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_GetStatusParamsSetDataType = 16339;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CloseToolChangerParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CloseToolChangerParamsSetDataType = 16342;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_OpenToolChangerParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_OpenToolChangerParamsSetDataType = 16345;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MessageParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MessageParamsSetDataType = 16348;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveToParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveToParamsSetDataType = 16351;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveScrewParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveScrewParamsSetDataType = 16354;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveThroughToParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_MoveThroughToParamsSetDataType = 16357;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DwellParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DwellParamsSetDataType = 16360;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ActuateJointsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ActuateJointsParamsSetDataType = 16363;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureJointReportsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ConfigureJointReportsParamsSetDataType = 16366;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetDefaultJointPositionsTolerancesParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetDefaultJointPositionsTolerancesParamsSetDataType = 16369;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRobotParametersParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRobotParametersParamsSetDataType = 16372;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorParametersParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndeffectorParametersParamsSetDataType = 16375;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndeffectorParamsSetDataType = 16378;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransSpeedParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTransSpeedParamsSetDataType = 16381;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransAccelParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTransAccelParamsSetDataType = 16384;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotSpeedParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRotSpeedParamsSetDataType = 16387;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotAccelParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetRotAccelParamsSetDataType = 16390;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetAngleUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetAngleUnitsParamsSetDataType = 16393;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndPoseToleranceParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetEndPoseToleranceParamsSetDataType = 16396;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetForceUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetForceUnitsParamsSetDataType = 16399;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetIntermediatePoseToleranceParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetIntermediatePoseToleranceParamsSetDataType = 16402;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetLengthUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetLengthUnitsParamsSetDataType = 16405;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetMotionCoordinationParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetMotionCoordinationParamsSetDataType = 16408;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTorqueUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_SetTorqueUnitsParamsSetDataType = 16411;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_StopMotionParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_StopMotionParamsSetDataType = 16414;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureStatusReportParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_ConfigureStatusReportParamsSetDataType = 16417;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableSensorParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableSensorParamsSetDataType = 16420;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableSensorParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableSensorParamsSetDataType = 16423;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableGripperParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableGripperParamsSetDataType = 16426;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableGripperParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableGripperParamsSetDataType = 16429;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_EnableRobotParameterStatusParamsSetDataType = 16432;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_DisableRobotParameterStatusParamsSetDataType = 16435;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsParamsSetsUnionDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandsParamsSetsUnionDataType = 15117;

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsParamsSetsBufferDataType Variable.
        /// </summary>
        public const uint CRCL_BinarySchema_CRCLCommandsParamsSetsBufferDataType = 15107;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema Variable.
        /// </summary>
        public const uint CRCL_XmlSchema = 15772;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_NamespaceUri Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_NamespaceUri = 15774;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_Deprecated Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_Deprecated = 15775;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_FractionDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_FractionDataType = 15776;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_DataThingDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_DataThingDataType = 15779;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PointDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PointDataType = 15782;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_VectorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_VectorDataType = 15785;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseDataType = 15788;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TwistDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TwistDataType = 15791;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_WrenchDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_WrenchDataType = 15794;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseToleranceDataType = 15797;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ParameterSettingDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ParameterSettingDataType = 15800;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotAccelAbsoluteDataType = 15803;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotAccelRelativeDataType = 15806;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotAccelDataType = 15809;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotSpeedAbsoluteDataType = 15812;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotSpeedRelativeDataType = 15815;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_RotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_RotSpeedDataType = 15818;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransAccelAbsoluteDataType = 15821;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransAccelRelativeDataType = 15824;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransAccelDataType = 15827;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedAbsoluteDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransSpeedAbsoluteDataType = 15830;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedRelativeDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransSpeedRelativeDataType = 15833;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_TransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_TransSpeedDataType = 15836;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ConfigureJointReportDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ConfigureJointReportDataType = 15839;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_GuardDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_GuardDataType = 15842;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointPositionToleranceSettingDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointPositionToleranceSettingDataType = 15845;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointPositionsTolerancesDataType = 15848;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseAndSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseAndSetDataType = 15851;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandDataType = 15854;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MiddleCommandDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MiddleCommandDataType = 15857;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EndCanonDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EndCanonDataType = 15860;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_InitCanonDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_InitCanonDataType = 15863;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointDetailsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointDetailsDataType = 15866;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ActuateJointDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ActuateJointDataType = 15869;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointForceTorqueDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointForceTorqueDataType = 15872;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointSpeedAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointSpeedAccelDataType = 15875;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ActuateJointsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ActuateJointsDataType = 15878;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveToDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveToDataType = 15881;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CloseToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CloseToolChangerDataType = 15884;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DwellDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DwellDataType = 15887;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_GetStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_GetStatusDataType = 15890;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MessageDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MessageDataType = 15893;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveScrewDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveScrewDataType = 15896;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveThroughToDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveThroughToDataType = 15899;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_OpenToolChangerDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_OpenToolChangerDataType = 15902;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_RunProgramDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_RunProgramDataType = 15905;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetAngleUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetAngleUnitsDataType = 15908;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorParametersDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndeffectorParametersDataType = 15911;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndeffectorDataType = 15914;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndPoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndPoseToleranceDataType = 15917;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetForceUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetForceUnitsDataType = 15920;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetIntermediatePoseToleranceDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetIntermediatePoseToleranceDataType = 15923;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetLengthUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetLengthUnitsDataType = 15926;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetMotionCoordinationDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetMotionCoordinationDataType = 15929;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRobotParametersDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRobotParametersDataType = 15932;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTorqueUnitsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTorqueUnitsDataType = 15935;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_StopMotionDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_StopMotionDataType = 15938;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureStatusReportDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ConfigureStatusReportDataType = 15941;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableSensorDataType = 15944;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableSensorDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableSensorDataType = 15947;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableGripperDataType = 15950;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableGripperDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableGripperDataType = 15953;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableRobotParameterStatusDataType = 15956;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableRobotParameterStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableRobotParameterStatusDataType = 15959;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetDefaultJointPositionsTolerancesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetDefaultJointPositionsTolerancesDataType = 15962;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRotAccelDataType = 15965;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransAccelDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTransAccelDataType = 15968;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRotSpeedDataType = 15971;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransSpeedDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTransSpeedDataType = 15974;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureJointReportsDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ConfigureJointReportsDataType = 15977;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_CommandStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_CommandStatusDataType = 15980;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_SensorStatusDataType = 15983;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_CountSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_CountSensorStatusDataType = 15986;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_OnOffSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_OnOffSensorStatusDataType = 15989;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ScalarSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ScalarSensorStatusDataType = 15992;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ForceTorqueSensorStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ForceTorqueSensorStatusDataType = 15995;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SensorStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_SensorStatusesDataType = 15998;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_GripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_GripperStatusDataType = 16001;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ParallelGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ParallelGripperStatusDataType = 16004;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_ThreeFingerGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_ThreeFingerGripperStatusDataType = 16007;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_VacuumGripperStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_VacuumGripperStatusDataType = 16010;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_SettingsStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_SettingsStatusDataType = 16013;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_PoseStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_PoseStatusDataType = 16016;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointLimitDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointLimitDataType = 16019;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointStatusDataType = 16022;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCL_JointStatusesDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCL_JointStatusesDataType = 16025;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLStatusDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLStatusDataType = 16028;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandsUnionDataType = 16037;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsBufferDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandsBufferDataType = 16282;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandParamsSetDataType = 16478;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_InitCanonParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_InitCanonParamsSetDataType = 16481;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EndCanonParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EndCanonParamsSetDataType = 16484;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_GetStatusParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_GetStatusParamsSetDataType = 16487;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CloseToolChangerParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CloseToolChangerParamsSetDataType = 16490;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_OpenToolChangerParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_OpenToolChangerParamsSetDataType = 16493;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MessageParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MessageParamsSetDataType = 16496;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveToParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveToParamsSetDataType = 16499;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveScrewParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveScrewParamsSetDataType = 16502;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveThroughToParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_MoveThroughToParamsSetDataType = 16505;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DwellParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DwellParamsSetDataType = 16508;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ActuateJointsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ActuateJointsParamsSetDataType = 16511;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureJointReportsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ConfigureJointReportsParamsSetDataType = 16514;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetDefaultJointPositionsTolerancesParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetDefaultJointPositionsTolerancesParamsSetDataType = 16517;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRobotParametersParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRobotParametersParamsSetDataType = 16520;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorParametersParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndeffectorParametersParamsSetDataType = 16523;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndeffectorParamsSetDataType = 16526;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransSpeedParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTransSpeedParamsSetDataType = 16529;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransAccelParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTransAccelParamsSetDataType = 16532;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotSpeedParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRotSpeedParamsSetDataType = 16535;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotAccelParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetRotAccelParamsSetDataType = 16538;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetAngleUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetAngleUnitsParamsSetDataType = 16541;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndPoseToleranceParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetEndPoseToleranceParamsSetDataType = 16544;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetForceUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetForceUnitsParamsSetDataType = 16547;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetIntermediatePoseToleranceParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetIntermediatePoseToleranceParamsSetDataType = 16550;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetLengthUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetLengthUnitsParamsSetDataType = 16553;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetMotionCoordinationParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetMotionCoordinationParamsSetDataType = 16556;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTorqueUnitsParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_SetTorqueUnitsParamsSetDataType = 16559;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_StopMotionParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_StopMotionParamsSetDataType = 16562;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureStatusReportParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_ConfigureStatusReportParamsSetDataType = 16565;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableSensorParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableSensorParamsSetDataType = 16568;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableSensorParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableSensorParamsSetDataType = 16571;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableGripperParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableGripperParamsSetDataType = 16574;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableGripperParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableGripperParamsSetDataType = 16577;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_EnableRobotParameterStatusParamsSetDataType = 16580;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_DisableRobotParameterStatusParamsSetDataType = 16583;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsParamsSetsUnionDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandsParamsSetsUnionDataType = 15121;

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsParamsSetsBufferDataType Variable.
        /// </summary>
        public const uint CRCL_XmlSchema_CRCLCommandsParamsSetsBufferDataType = 15111;
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
        /// The identifier for the CRCL_ActuateJointDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ActuateJointDataType = new ExpandedNodeId(CRCL.DataTypes.CRCL_ActuateJointDataType, CRCL.Namespaces.CRCL);

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
        /// The identifier for the SetEndeffectorParametersDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndeffectorParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndeffectorDataType, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCLCommandsUnionDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsBufferDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandsBufferDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.InitCanonParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.EndCanonParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.GetStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.CloseToolChangerParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.OpenToolChangerParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MessageParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.MessageParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MoveToParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.MoveToParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.MoveScrewParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.MoveThroughToParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DwellParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.DwellParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.ActuateJointsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.ConfigureJointReportsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetDefaultJointPositionsTolerancesParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetRobotParametersParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndeffectorParametersParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndeffectorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetTransSpeedParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetTransAccelParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetRotSpeedParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetRotAccelParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetAngleUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetEndPoseToleranceParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetForceUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetIntermediatePoseToleranceParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetLengthUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetMotionCoordinationParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.SetTorqueUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.StopMotionParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.ConfigureStatusReportParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.EnableSensorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.DisableSensorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.EnableGripperParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.DisableGripperParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.EnableRobotParameterStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusParamsSetDataType = new ExpandedNodeId(CRCL.DataTypes.DisableRobotParameterStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsUnionDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandsParamsSetsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsBufferDataType = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandsParamsSetsBufferDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsBufferState DataType.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsBufferState = new ExpandedNodeId(CRCL.DataTypes.CRCLCommandsBufferState, CRCL.Namespaces.CRCL);
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
        /// The identifier for the CRCL_ActuateJointDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ActuateJointDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCL_ActuateJointDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

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
        /// The identifier for the SetEndeffectorParametersDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParametersDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndeffectorDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLCommandsUnionDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsBufferDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLCommandsBufferDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLCommandParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.InitCanonParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EndCanonParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.GetStatusParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CloseToolChangerParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.OpenToolChangerParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MessageParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MessageParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveToParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MoveToParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MoveScrewParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.MoveThroughToParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DwellParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DwellParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.ActuateJointsParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.ConfigureJointReportsParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetRobotParametersParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParametersParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetTransSpeedParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetTransAccelParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetRotSpeedParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetRotAccelParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetAngleUnitsParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetEndPoseToleranceParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetForceUnitsParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetLengthUnitsParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetMotionCoordinationParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.SetTorqueUnitsParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.StopMotionParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.ConfigureStatusReportParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EnableSensorParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DisableSensorParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EnableGripperParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DisableGripperParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultBinary Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultBinary = new ExpandedNodeId(CRCL.Objects.CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultBinary, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_ActuateJointDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ActuateJointDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCL_ActuateJointDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

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
        /// The identifier for the SetEndeffectorParametersDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParametersDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndeffectorDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLCommandsUnionDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsBufferDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLCommandsBufferDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLCommandParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.InitCanonParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EndCanonParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.GetStatusParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CloseToolChangerParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.OpenToolChangerParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MessageParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MessageParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveToParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MoveToParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MoveScrewParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.MoveThroughToParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DwellParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DwellParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.ActuateJointsParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.ConfigureJointReportsParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetRobotParametersParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParametersParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetTransSpeedParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetTransAccelParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetRotSpeedParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetRotAccelParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetAngleUnitsParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetEndPoseToleranceParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetForceUnitsParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetLengthUnitsParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetMotionCoordinationParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.SetTorqueUnitsParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.StopMotionParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.ConfigureStatusReportParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EnableSensorParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DisableSensorParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EnableGripperParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DisableGripperParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultXml Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultXml = new ExpandedNodeId(CRCL.Objects.CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultXml, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_ActuateJointDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_ActuateJointDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCL_ActuateJointDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

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
        /// The identifier for the SetEndeffectorParametersDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParametersDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndeffectorDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCLCommandsUnionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsUnionDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLCommandsUnionDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsBufferDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsBufferDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLCommandsBufferDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLCommandParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the InitCanonParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId InitCanonParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.InitCanonParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EndCanonParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EndCanonParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EndCanonParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the GetStatusParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId GetStatusParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.GetStatusParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CloseToolChangerParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CloseToolChangerParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CloseToolChangerParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the OpenToolChangerParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId OpenToolChangerParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.OpenToolChangerParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MessageParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MessageParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MessageParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveToParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveToParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MoveToParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveScrewParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveScrewParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MoveScrewParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the MoveThroughToParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId MoveThroughToParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.MoveThroughToParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DwellParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DwellParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DwellParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ActuateJointsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId ActuateJointsParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.ActuateJointsParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureJointReportsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureJointReportsParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.ConfigureJointReportsParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetDefaultJointPositionsTolerancesParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRobotParametersParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRobotParametersParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetRobotParametersParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParametersParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParametersParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParametersParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndeffectorParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndeffectorParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndeffectorParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransSpeedParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransSpeedParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetTransSpeedParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTransAccelParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTransAccelParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetTransAccelParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotSpeedParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotSpeedParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetRotSpeedParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetRotAccelParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetRotAccelParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetRotAccelParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetAngleUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetAngleUnitsParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetAngleUnitsParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetEndPoseToleranceParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetEndPoseToleranceParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetEndPoseToleranceParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetForceUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetForceUnitsParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetForceUnitsParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetIntermediatePoseToleranceParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetLengthUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetLengthUnitsParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetLengthUnitsParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetMotionCoordinationParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetMotionCoordinationParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetMotionCoordinationParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the SetTorqueUnitsParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId SetTorqueUnitsParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.SetTorqueUnitsParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the StopMotionParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId StopMotionParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.StopMotionParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the ConfigureStatusReportParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId ConfigureStatusReportParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.ConfigureStatusReportParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableSensorParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableSensorParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EnableSensorParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableSensorParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableSensorParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DisableSensorParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableGripperParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableGripperParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EnableGripperParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableGripperParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableGripperParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DisableGripperParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.EnableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.DisableRobotParameterStatusParamsSetDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLCommandsParamsSetsUnionDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultJson Object.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultJson = new ExpandedNodeId(CRCL.Objects.CRCLCommandsParamsSetsBufferDataType_Encoding_DefaultJson, CRCL.Namespaces.CRCL);
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
        /// The identifier for the CRCLCommandsBufferState_EnumStrings Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCLCommandsBufferState_EnumStrings = new ExpandedNodeId(CRCL.Variables.CRCLCommandsBufferState_EnumStrings, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_BinarySchema_CRCL_ActuateJointDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCL_ActuateJointDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCL_ActuateJointDataType, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorParametersDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndeffectorParametersDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndeffectorParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndeffectorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndeffectorDataType, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLCommandsUnionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLCommandsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsBufferDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLCommandsBufferDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLCommandsBufferDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLCommandParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLCommandParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_InitCanonParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_InitCanonParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_InitCanonParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EndCanonParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EndCanonParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EndCanonParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_GetStatusParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_GetStatusParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_GetStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CloseToolChangerParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CloseToolChangerParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CloseToolChangerParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_OpenToolChangerParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_OpenToolChangerParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_OpenToolChangerParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MessageParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MessageParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MessageParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveToParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MoveToParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MoveToParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveScrewParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MoveScrewParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MoveScrewParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_MoveThroughToParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_MoveThroughToParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_MoveThroughToParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DwellParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DwellParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DwellParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ActuateJointsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_ActuateJointsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_ActuateJointsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureJointReportsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_ConfigureJointReportsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_ConfigureJointReportsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetDefaultJointPositionsTolerancesParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetDefaultJointPositionsTolerancesParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetDefaultJointPositionsTolerancesParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRobotParametersParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetRobotParametersParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetRobotParametersParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorParametersParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndeffectorParametersParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndeffectorParametersParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndeffectorParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndeffectorParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndeffectorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransSpeedParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetTransSpeedParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetTransSpeedParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTransAccelParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetTransAccelParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetTransAccelParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotSpeedParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetRotSpeedParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetRotSpeedParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetRotAccelParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetRotAccelParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetRotAccelParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetAngleUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetAngleUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetAngleUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetEndPoseToleranceParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetEndPoseToleranceParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetEndPoseToleranceParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetForceUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetForceUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetForceUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetIntermediatePoseToleranceParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetIntermediatePoseToleranceParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetIntermediatePoseToleranceParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetLengthUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetLengthUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetLengthUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetMotionCoordinationParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetMotionCoordinationParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetMotionCoordinationParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_SetTorqueUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_SetTorqueUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_SetTorqueUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_StopMotionParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_StopMotionParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_StopMotionParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_ConfigureStatusReportParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_ConfigureStatusReportParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_ConfigureStatusReportParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableSensorParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EnableSensorParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EnableSensorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableSensorParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DisableSensorParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DisableSensorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableGripperParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EnableGripperParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EnableGripperParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableGripperParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DisableGripperParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DisableGripperParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_EnableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_EnableRobotParameterStatusParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_EnableRobotParameterStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_DisableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_DisableRobotParameterStatusParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_DisableRobotParameterStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsParamsSetsUnionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLCommandsParamsSetsUnionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLCommandsParamsSetsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_BinarySchema_CRCLCommandsParamsSetsBufferDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_BinarySchema_CRCLCommandsParamsSetsBufferDataType = new ExpandedNodeId(CRCL.Variables.CRCL_BinarySchema_CRCLCommandsParamsSetsBufferDataType, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_XmlSchema_CRCL_ActuateJointDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCL_ActuateJointDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCL_ActuateJointDataType, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorParametersDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndeffectorParametersDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndeffectorParametersDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndeffectorDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndeffectorDataType, CRCL.Namespaces.CRCL);

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
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsUnionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLCommandsUnionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLCommandsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsBufferDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLCommandsBufferDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLCommandsBufferDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLCommandParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLCommandParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_InitCanonParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_InitCanonParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_InitCanonParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EndCanonParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EndCanonParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EndCanonParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_GetStatusParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_GetStatusParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_GetStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CloseToolChangerParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CloseToolChangerParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CloseToolChangerParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_OpenToolChangerParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_OpenToolChangerParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_OpenToolChangerParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MessageParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MessageParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MessageParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveToParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MoveToParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MoveToParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveScrewParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MoveScrewParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MoveScrewParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_MoveThroughToParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_MoveThroughToParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_MoveThroughToParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DwellParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DwellParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DwellParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ActuateJointsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_ActuateJointsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_ActuateJointsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureJointReportsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_ConfigureJointReportsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_ConfigureJointReportsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetDefaultJointPositionsTolerancesParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetDefaultJointPositionsTolerancesParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetDefaultJointPositionsTolerancesParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRobotParametersParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetRobotParametersParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetRobotParametersParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorParametersParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndeffectorParametersParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndeffectorParametersParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndeffectorParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndeffectorParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndeffectorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransSpeedParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetTransSpeedParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetTransSpeedParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTransAccelParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetTransAccelParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetTransAccelParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotSpeedParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetRotSpeedParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetRotSpeedParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetRotAccelParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetRotAccelParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetRotAccelParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetAngleUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetAngleUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetAngleUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetEndPoseToleranceParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetEndPoseToleranceParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetEndPoseToleranceParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetForceUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetForceUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetForceUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetIntermediatePoseToleranceParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetIntermediatePoseToleranceParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetIntermediatePoseToleranceParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetLengthUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetLengthUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetLengthUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetMotionCoordinationParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetMotionCoordinationParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetMotionCoordinationParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_SetTorqueUnitsParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_SetTorqueUnitsParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_SetTorqueUnitsParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_StopMotionParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_StopMotionParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_StopMotionParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_ConfigureStatusReportParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_ConfigureStatusReportParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_ConfigureStatusReportParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableSensorParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EnableSensorParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EnableSensorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableSensorParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DisableSensorParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DisableSensorParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableGripperParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EnableGripperParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EnableGripperParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableGripperParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DisableGripperParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DisableGripperParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_EnableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_EnableRobotParameterStatusParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_EnableRobotParameterStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_DisableRobotParameterStatusParamsSetDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_DisableRobotParameterStatusParamsSetDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_DisableRobotParameterStatusParamsSetDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsParamsSetsUnionDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLCommandsParamsSetsUnionDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLCommandsParamsSetsUnionDataType, CRCL.Namespaces.CRCL);

        /// <summary>
        /// The identifier for the CRCL_XmlSchema_CRCLCommandsParamsSetsBufferDataType Variable.
        /// </summary>
        public static readonly ExpandedNodeId CRCL_XmlSchema_CRCLCommandsParamsSetsBufferDataType = new ExpandedNodeId(CRCL.Variables.CRCL_XmlSchema_CRCLCommandsParamsSetsBufferDataType, CRCL.Namespaces.CRCL);
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
        /// The BrowseName for the ActuateJointsDataType component.
        /// </summary>
        public const string ActuateJointsDataType = "ActuateJointsDataType";

        /// <summary>
        /// The BrowseName for the ActuateJointsParamsSetDataType component.
        /// </summary>
        public const string ActuateJointsParamsSetDataType = "ActuateJointsParamsSetDataType";

        /// <summary>
        /// The BrowseName for the CloseToolChangerDataType component.
        /// </summary>
        public const string CloseToolChangerDataType = "CloseToolChangerDataType";

        /// <summary>
        /// The BrowseName for the CloseToolChangerParamsSetDataType component.
        /// </summary>
        public const string CloseToolChangerParamsSetDataType = "CloseToolChangerParamsSetDataType";

        /// <summary>
        /// The BrowseName for the ConfigureJointReportsDataType component.
        /// </summary>
        public const string ConfigureJointReportsDataType = "ConfigureJointReportsDataType";

        /// <summary>
        /// The BrowseName for the ConfigureJointReportsParamsSetDataType component.
        /// </summary>
        public const string ConfigureJointReportsParamsSetDataType = "ConfigureJointReportsParamsSetDataType";

        /// <summary>
        /// The BrowseName for the ConfigureStatusReportDataType component.
        /// </summary>
        public const string ConfigureStatusReportDataType = "ConfigureStatusReportDataType";

        /// <summary>
        /// The BrowseName for the ConfigureStatusReportParamsSetDataType component.
        /// </summary>
        public const string ConfigureStatusReportParamsSetDataType = "ConfigureStatusReportParamsSetDataType";

        /// <summary>
        /// The BrowseName for the CRCL_ActuateJointDataType component.
        /// </summary>
        public const string CRCL_ActuateJointDataType = "CRCL_ActuateJointDataType";

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
        /// The BrowseName for the CRCLCommandParamsSetDataType component.
        /// </summary>
        public const string CRCLCommandParamsSetDataType = "CRCLCommandParamsSetDataType";

        /// <summary>
        /// The BrowseName for the CRCLCommandsBufferDataType component.
        /// </summary>
        public const string CRCLCommandsBufferDataType = "CRCLCommandsBufferDataType";

        /// <summary>
        /// The BrowseName for the CRCLCommandsBufferState component.
        /// </summary>
        public const string CRCLCommandsBufferState = "CRCLCommandsBufferState";

        /// <summary>
        /// The BrowseName for the CRCLCommandsParamsSetsBufferDataType component.
        /// </summary>
        public const string CRCLCommandsParamsSetsBufferDataType = "CRCLCommandsParamsSetsBufferDataType";

        /// <summary>
        /// The BrowseName for the CRCLCommandsParamsSetsUnionDataType component.
        /// </summary>
        public const string CRCLCommandsParamsSetsUnionDataType = "CRCLCommandsParamsSetsUnionDataType";

        /// <summary>
        /// The BrowseName for the CRCLCommandsUnionDataType component.
        /// </summary>
        public const string CRCLCommandsUnionDataType = "CRCLCommandsUnionDataType";

        /// <summary>
        /// The BrowseName for the CRCLStatusDataType component.
        /// </summary>
        public const string CRCLStatusDataType = "CRCLStatusDataType";

        /// <summary>
        /// The BrowseName for the DisableGripperDataType component.
        /// </summary>
        public const string DisableGripperDataType = "DisableGripperDataType";

        /// <summary>
        /// The BrowseName for the DisableGripperParamsSetDataType component.
        /// </summary>
        public const string DisableGripperParamsSetDataType = "DisableGripperParamsSetDataType";

        /// <summary>
        /// The BrowseName for the DisableRobotParameterStatusDataType component.
        /// </summary>
        public const string DisableRobotParameterStatusDataType = "DisableRobotParameterStatusDataType";

        /// <summary>
        /// The BrowseName for the DisableRobotParameterStatusParamsSetDataType component.
        /// </summary>
        public const string DisableRobotParameterStatusParamsSetDataType = "DisableRobotParameterStatusParamsSetDataType";

        /// <summary>
        /// The BrowseName for the DisableSensorDataType component.
        /// </summary>
        public const string DisableSensorDataType = "DisableSensorDataType";

        /// <summary>
        /// The BrowseName for the DisableSensorParamsSetDataType component.
        /// </summary>
        public const string DisableSensorParamsSetDataType = "DisableSensorParamsSetDataType";

        /// <summary>
        /// The BrowseName for the DwellDataType component.
        /// </summary>
        public const string DwellDataType = "DwellDataType";

        /// <summary>
        /// The BrowseName for the DwellParamsSetDataType component.
        /// </summary>
        public const string DwellParamsSetDataType = "DwellParamsSetDataType";

        /// <summary>
        /// The BrowseName for the EnableGripperDataType component.
        /// </summary>
        public const string EnableGripperDataType = "EnableGripperDataType";

        /// <summary>
        /// The BrowseName for the EnableGripperParamsSetDataType component.
        /// </summary>
        public const string EnableGripperParamsSetDataType = "EnableGripperParamsSetDataType";

        /// <summary>
        /// The BrowseName for the EnableRobotParameterStatusDataType component.
        /// </summary>
        public const string EnableRobotParameterStatusDataType = "EnableRobotParameterStatusDataType";

        /// <summary>
        /// The BrowseName for the EnableRobotParameterStatusParamsSetDataType component.
        /// </summary>
        public const string EnableRobotParameterStatusParamsSetDataType = "EnableRobotParameterStatusParamsSetDataType";

        /// <summary>
        /// The BrowseName for the EnableSensorDataType component.
        /// </summary>
        public const string EnableSensorDataType = "EnableSensorDataType";

        /// <summary>
        /// The BrowseName for the EnableSensorParamsSetDataType component.
        /// </summary>
        public const string EnableSensorParamsSetDataType = "EnableSensorParamsSetDataType";

        /// <summary>
        /// The BrowseName for the EndCanonDataType component.
        /// </summary>
        public const string EndCanonDataType = "EndCanonDataType";

        /// <summary>
        /// The BrowseName for the EndCanonParamsSetDataType component.
        /// </summary>
        public const string EndCanonParamsSetDataType = "EndCanonParamsSetDataType";

        /// <summary>
        /// The BrowseName for the GetStatusDataType component.
        /// </summary>
        public const string GetStatusDataType = "GetStatusDataType";

        /// <summary>
        /// The BrowseName for the GetStatusParamsSetDataType component.
        /// </summary>
        public const string GetStatusParamsSetDataType = "GetStatusParamsSetDataType";

        /// <summary>
        /// The BrowseName for the InitCanonDataType component.
        /// </summary>
        public const string InitCanonDataType = "InitCanonDataType";

        /// <summary>
        /// The BrowseName for the InitCanonParamsSetDataType component.
        /// </summary>
        public const string InitCanonParamsSetDataType = "InitCanonParamsSetDataType";

        /// <summary>
        /// The BrowseName for the MessageDataType component.
        /// </summary>
        public const string MessageDataType = "MessageDataType";

        /// <summary>
        /// The BrowseName for the MessageParamsSetDataType component.
        /// </summary>
        public const string MessageParamsSetDataType = "MessageParamsSetDataType";

        /// <summary>
        /// The BrowseName for the MiddleCommandDataType component.
        /// </summary>
        public const string MiddleCommandDataType = "MiddleCommandDataType";

        /// <summary>
        /// The BrowseName for the MoveScrewDataType component.
        /// </summary>
        public const string MoveScrewDataType = "MoveScrewDataType";

        /// <summary>
        /// The BrowseName for the MoveScrewParamsSetDataType component.
        /// </summary>
        public const string MoveScrewParamsSetDataType = "MoveScrewParamsSetDataType";

        /// <summary>
        /// The BrowseName for the MoveThroughToDataType component.
        /// </summary>
        public const string MoveThroughToDataType = "MoveThroughToDataType";

        /// <summary>
        /// The BrowseName for the MoveThroughToParamsSetDataType component.
        /// </summary>
        public const string MoveThroughToParamsSetDataType = "MoveThroughToParamsSetDataType";

        /// <summary>
        /// The BrowseName for the MoveToDataType component.
        /// </summary>
        public const string MoveToDataType = "MoveToDataType";

        /// <summary>
        /// The BrowseName for the MoveToParamsSetDataType component.
        /// </summary>
        public const string MoveToParamsSetDataType = "MoveToParamsSetDataType";

        /// <summary>
        /// The BrowseName for the OpenToolChangerDataType component.
        /// </summary>
        public const string OpenToolChangerDataType = "OpenToolChangerDataType";

        /// <summary>
        /// The BrowseName for the OpenToolChangerParamsSetDataType component.
        /// </summary>
        public const string OpenToolChangerParamsSetDataType = "OpenToolChangerParamsSetDataType";

        /// <summary>
        /// The BrowseName for the RunProgramDataType component.
        /// </summary>
        public const string RunProgramDataType = "RunProgramDataType";

        /// <summary>
        /// The BrowseName for the SetAngleUnitsDataType component.
        /// </summary>
        public const string SetAngleUnitsDataType = "SetAngleUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetAngleUnitsParamsSetDataType component.
        /// </summary>
        public const string SetAngleUnitsParamsSetDataType = "SetAngleUnitsParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetDefaultJointPositionsTolerancesDataType component.
        /// </summary>
        public const string SetDefaultJointPositionsTolerancesDataType = "SetDefaultJointPositionsTolerancesDataType";

        /// <summary>
        /// The BrowseName for the SetDefaultJointPositionsTolerancesParamsSetDataType component.
        /// </summary>
        public const string SetDefaultJointPositionsTolerancesParamsSetDataType = "SetDefaultJointPositionsTolerancesParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetEndeffectorDataType component.
        /// </summary>
        public const string SetEndeffectorDataType = "SetEndeffectorDataType";

        /// <summary>
        /// The BrowseName for the SetEndeffectorParametersDataType component.
        /// </summary>
        public const string SetEndeffectorParametersDataType = "SetEndeffectorParametersDataType";

        /// <summary>
        /// The BrowseName for the SetEndeffectorParametersParamsSetDataType component.
        /// </summary>
        public const string SetEndeffectorParametersParamsSetDataType = "SetEndeffectorParametersParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetEndeffectorParamsSetDataType component.
        /// </summary>
        public const string SetEndeffectorParamsSetDataType = "SetEndeffectorParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetEndPoseToleranceDataType component.
        /// </summary>
        public const string SetEndPoseToleranceDataType = "SetEndPoseToleranceDataType";

        /// <summary>
        /// The BrowseName for the SetEndPoseToleranceParamsSetDataType component.
        /// </summary>
        public const string SetEndPoseToleranceParamsSetDataType = "SetEndPoseToleranceParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetForceUnitsDataType component.
        /// </summary>
        public const string SetForceUnitsDataType = "SetForceUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetForceUnitsParamsSetDataType component.
        /// </summary>
        public const string SetForceUnitsParamsSetDataType = "SetForceUnitsParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetIntermediatePoseToleranceDataType component.
        /// </summary>
        public const string SetIntermediatePoseToleranceDataType = "SetIntermediatePoseToleranceDataType";

        /// <summary>
        /// The BrowseName for the SetIntermediatePoseToleranceParamsSetDataType component.
        /// </summary>
        public const string SetIntermediatePoseToleranceParamsSetDataType = "SetIntermediatePoseToleranceParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetLengthUnitsDataType component.
        /// </summary>
        public const string SetLengthUnitsDataType = "SetLengthUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetLengthUnitsParamsSetDataType component.
        /// </summary>
        public const string SetLengthUnitsParamsSetDataType = "SetLengthUnitsParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetMotionCoordinationDataType component.
        /// </summary>
        public const string SetMotionCoordinationDataType = "SetMotionCoordinationDataType";

        /// <summary>
        /// The BrowseName for the SetMotionCoordinationParamsSetDataType component.
        /// </summary>
        public const string SetMotionCoordinationParamsSetDataType = "SetMotionCoordinationParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetRobotParametersDataType component.
        /// </summary>
        public const string SetRobotParametersDataType = "SetRobotParametersDataType";

        /// <summary>
        /// The BrowseName for the SetRobotParametersParamsSetDataType component.
        /// </summary>
        public const string SetRobotParametersParamsSetDataType = "SetRobotParametersParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetRotAccelDataType component.
        /// </summary>
        public const string SetRotAccelDataType = "SetRotAccelDataType";

        /// <summary>
        /// The BrowseName for the SetRotAccelParamsSetDataType component.
        /// </summary>
        public const string SetRotAccelParamsSetDataType = "SetRotAccelParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetRotSpeedDataType component.
        /// </summary>
        public const string SetRotSpeedDataType = "SetRotSpeedDataType";

        /// <summary>
        /// The BrowseName for the SetRotSpeedParamsSetDataType component.
        /// </summary>
        public const string SetRotSpeedParamsSetDataType = "SetRotSpeedParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetTorqueUnitsDataType component.
        /// </summary>
        public const string SetTorqueUnitsDataType = "SetTorqueUnitsDataType";

        /// <summary>
        /// The BrowseName for the SetTorqueUnitsParamsSetDataType component.
        /// </summary>
        public const string SetTorqueUnitsParamsSetDataType = "SetTorqueUnitsParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetTransAccelDataType component.
        /// </summary>
        public const string SetTransAccelDataType = "SetTransAccelDataType";

        /// <summary>
        /// The BrowseName for the SetTransAccelParamsSetDataType component.
        /// </summary>
        public const string SetTransAccelParamsSetDataType = "SetTransAccelParamsSetDataType";

        /// <summary>
        /// The BrowseName for the SetTransSpeedDataType component.
        /// </summary>
        public const string SetTransSpeedDataType = "SetTransSpeedDataType";

        /// <summary>
        /// The BrowseName for the SetTransSpeedParamsSetDataType component.
        /// </summary>
        public const string SetTransSpeedParamsSetDataType = "SetTransSpeedParamsSetDataType";

        /// <summary>
        /// The BrowseName for the StopMotionDataType component.
        /// </summary>
        public const string StopMotionDataType = "StopMotionDataType";

        /// <summary>
        /// The BrowseName for the StopMotionParamsSetDataType component.
        /// </summary>
        public const string StopMotionParamsSetDataType = "StopMotionParamsSetDataType";
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