/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2022-10-11 03:44:19 */

#ifndef TYPES_CRCL_GENERATED_ENCODING_BINARY_H_
#define TYPES_CRCL_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_crcl_generated.h"
#endif



/* GetStatusParamsSetDataType */
static UA_INLINE size_t
UA_GetStatusParamsSetDataType_calcSizeBinary(const UA_GetStatusParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_GetStatusParamsSetDataType_encodeBinary(const UA_GetStatusParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetStatusParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetStatusParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE], NULL);
}

/* CRCL_PointDataType */
static UA_INLINE size_t
UA_CRCL_PointDataType_calcSizeBinary(const UA_CRCL_PointDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PointDataType_encodeBinary(const UA_CRCL_PointDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PointDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PointDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE], NULL);
}

/* ConfigureStatusReportParamsSetDataType */
static UA_INLINE size_t
UA_ConfigureStatusReportParamsSetDataType_calcSizeBinary(const UA_ConfigureStatusReportParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportParamsSetDataType_encodeBinary(const UA_ConfigureStatusReportParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureStatusReportParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE], NULL);
}

/* SetMotionCoordinationParamsSetDataType */
static UA_INLINE size_t
UA_SetMotionCoordinationParamsSetDataType_calcSizeBinary(const UA_SetMotionCoordinationParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationParamsSetDataType_encodeBinary(const UA_SetMotionCoordinationParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMotionCoordinationParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE], NULL);
}

/* CRCL_PoseToleranceDataType */
static UA_INLINE size_t
UA_CRCL_PoseToleranceDataType_calcSizeBinary(const UA_CRCL_PoseToleranceDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseToleranceDataType_encodeBinary(const UA_CRCL_PoseToleranceDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseToleranceDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseToleranceDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE], NULL);
}

/* EnableRobotParameterStatusParamsSetDataType */
static UA_INLINE size_t
UA_EnableRobotParameterStatusParamsSetDataType_calcSizeBinary(const UA_EnableRobotParameterStatusParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusParamsSetDataType_encodeBinary(const UA_EnableRobotParameterStatusParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableRobotParameterStatusParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE], NULL);
}

/* CRCL_TransAccelAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_TransAccelAbsoluteDataType_calcSizeBinary(const UA_CRCL_TransAccelAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelAbsoluteDataType_encodeBinary(const UA_CRCL_TransAccelAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransAccelAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE], NULL);
}

/* CRCL_FractionDataType */
static UA_INLINE size_t
UA_CRCL_FractionDataType_calcSizeBinary(const UA_CRCL_FractionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_FractionDataType_encodeBinary(const UA_CRCL_FractionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_FractionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_FractionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE], NULL);
}

/* CRCL_JointSpeedAccelDataType */
static UA_INLINE size_t
UA_CRCL_JointSpeedAccelDataType_calcSizeBinary(const UA_CRCL_JointSpeedAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointSpeedAccelDataType_encodeBinary(const UA_CRCL_JointSpeedAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointSpeedAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointSpeedAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE], NULL);
}

/* SetEndPoseToleranceParamsSetDataType */
static UA_INLINE size_t
UA_SetEndPoseToleranceParamsSetDataType_calcSizeBinary(const UA_SetEndPoseToleranceParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceParamsSetDataType_encodeBinary(const UA_SetEndPoseToleranceParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndPoseToleranceParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE], NULL);
}

/* MessageParamsSetDataType */
static UA_INLINE size_t
UA_MessageParamsSetDataType_calcSizeBinary(const UA_MessageParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MessageParamsSetDataType_encodeBinary(const UA_MessageParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE], NULL);
}

/* CRCL_JointLimitDataType */
static UA_INLINE size_t
UA_CRCL_JointLimitDataType_calcSizeBinary(const UA_CRCL_JointLimitDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointLimitDataType_encodeBinary(const UA_CRCL_JointLimitDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointLimitDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointLimitDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE], NULL);
}

/* DisableGripperParamsSetDataType */
static UA_INLINE size_t
UA_DisableGripperParamsSetDataType_calcSizeBinary(const UA_DisableGripperParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperParamsSetDataType_encodeBinary(const UA_DisableGripperParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableGripperParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE], NULL);
}

/* DisableSensorParamsSetDataType */
static UA_INLINE size_t
UA_DisableSensorParamsSetDataType_calcSizeBinary(const UA_DisableSensorParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorParamsSetDataType_encodeBinary(const UA_DisableSensorParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableSensorParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE], NULL);
}

/* CRCL_DataThingDataType */
static UA_INLINE size_t
UA_CRCL_DataThingDataType_calcSizeBinary(const UA_CRCL_DataThingDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_DataThingDataType_encodeBinary(const UA_CRCL_DataThingDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_DataThingDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_DataThingDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE], NULL);
}

/* CRCL_TorqueUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_TorqueUnitEnumDataType_calcSizeBinary(const UA_CRCL_TorqueUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TorqueUnitEnumDataType_encodeBinary(const UA_CRCL_TorqueUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TorqueUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TorqueUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE], NULL);
}

/* InitCanonParamsSetDataType */
static UA_INLINE size_t
UA_InitCanonParamsSetDataType_calcSizeBinary(const UA_InitCanonParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_InitCanonParamsSetDataType_encodeBinary(const UA_InitCanonParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_InitCanonParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_InitCanonParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE], NULL);
}

/* DwellParamsSetDataType */
static UA_INLINE size_t
UA_DwellParamsSetDataType_calcSizeBinary(const UA_DwellParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DwellParamsSetDataType_encodeBinary(const UA_DwellParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DwellParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DwellParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE], NULL);
}

/* CRCL_AngleUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_AngleUnitEnumDataType_calcSizeBinary(const UA_CRCL_AngleUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_AngleUnitEnumDataType_encodeBinary(const UA_CRCL_AngleUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_AngleUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_AngleUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE], NULL);
}

/* CRCL_JointStatusDataType */
static UA_INLINE size_t
UA_CRCL_JointStatusDataType_calcSizeBinary(const UA_CRCL_JointStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusDataType_encodeBinary(const UA_CRCL_JointStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE], NULL);
}

/* CRCL_TransSpeedAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_TransSpeedAbsoluteDataType_calcSizeBinary(const UA_CRCL_TransSpeedAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedAbsoluteDataType_encodeBinary(const UA_CRCL_TransSpeedAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransSpeedAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE], NULL);
}

/* OpenToolChangerParamsSetDataType */
static UA_INLINE size_t
UA_OpenToolChangerParamsSetDataType_calcSizeBinary(const UA_OpenToolChangerParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerParamsSetDataType_encodeBinary(const UA_OpenToolChangerParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenToolChangerParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE], NULL);
}

/* SetAngleUnitsParamsSetDataType */
static UA_INLINE size_t
UA_SetAngleUnitsParamsSetDataType_calcSizeBinary(const UA_SetAngleUnitsParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsParamsSetDataType_encodeBinary(const UA_SetAngleUnitsParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetAngleUnitsParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE], NULL);
}

/* CRCL_ParameterSettingDataType */
static UA_INLINE size_t
UA_CRCL_ParameterSettingDataType_calcSizeBinary(const UA_CRCL_ParameterSettingDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParameterSettingDataType_encodeBinary(const UA_CRCL_ParameterSettingDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParameterSettingDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ParameterSettingDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE], NULL);
}

/* CRCL_ConfigureJointReportDataType */
static UA_INLINE size_t
UA_CRCL_ConfigureJointReportDataType_calcSizeBinary(const UA_CRCL_ConfigureJointReportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ConfigureJointReportDataType_encodeBinary(const UA_CRCL_ConfigureJointReportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ConfigureJointReportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ConfigureJointReportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE], NULL);
}

/* CRCLCommandParamsSetDataType */
static UA_INLINE size_t
UA_CRCLCommandParamsSetDataType_calcSizeBinary(const UA_CRCLCommandParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandParamsSetDataType_encodeBinary(const UA_CRCLCommandParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE], NULL);
}

/* CRCL_JointPositionToleranceSettingDataType */
static UA_INLINE size_t
UA_CRCL_JointPositionToleranceSettingDataType_calcSizeBinary(const UA_CRCL_JointPositionToleranceSettingDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionToleranceSettingDataType_encodeBinary(const UA_CRCL_JointPositionToleranceSettingDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionToleranceSettingDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointPositionToleranceSettingDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE], NULL);
}

/* CRCL_RotAccelAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_RotAccelAbsoluteDataType_calcSizeBinary(const UA_CRCL_RotAccelAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelAbsoluteDataType_encodeBinary(const UA_CRCL_RotAccelAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotAccelAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE], NULL);
}

/* CRCL_CommandStateEnumDataType */
static UA_INLINE size_t
UA_CRCL_CommandStateEnumDataType_calcSizeBinary(const UA_CRCL_CommandStateEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStateEnumDataType_encodeBinary(const UA_CRCL_CommandStateEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStateEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_CommandStateEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE], NULL);
}

/* CRCL_LengthUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_LengthUnitEnumDataType_calcSizeBinary(const UA_CRCL_LengthUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_LengthUnitEnumDataType_encodeBinary(const UA_CRCL_LengthUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_LengthUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_LengthUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE], NULL);
}

/* CRCL_VectorDataType */
static UA_INLINE size_t
UA_CRCL_VectorDataType_calcSizeBinary(const UA_CRCL_VectorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VectorDataType_encodeBinary(const UA_CRCL_VectorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VectorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_VectorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE], NULL);
}

/* CRCL_GripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_GripperStatusDataType_calcSizeBinary(const UA_CRCL_GripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GripperStatusDataType_encodeBinary(const UA_CRCL_GripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_GripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE], NULL);
}

/* CRCL_JointForceTorqueDataType */
static UA_INLINE size_t
UA_CRCL_JointForceTorqueDataType_calcSizeBinary(const UA_CRCL_JointForceTorqueDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointForceTorqueDataType_encodeBinary(const UA_CRCL_JointForceTorqueDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointForceTorqueDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointForceTorqueDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE], NULL);
}

/* CRCL_GuardLimitEnumDataType */
static UA_INLINE size_t
UA_CRCL_GuardLimitEnumDataType_calcSizeBinary(const UA_CRCL_GuardLimitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardLimitEnumDataType_encodeBinary(const UA_CRCL_GuardLimitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardLimitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_GuardLimitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE], NULL);
}

/* DisableRobotParameterStatusParamsSetDataType */
static UA_INLINE size_t
UA_DisableRobotParameterStatusParamsSetDataType_calcSizeBinary(const UA_DisableRobotParameterStatusParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusParamsSetDataType_encodeBinary(const UA_DisableRobotParameterStatusParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableRobotParameterStatusParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE], NULL);
}

/* CRCL_RotSpeedRelativeDataType */
static UA_INLINE size_t
UA_CRCL_RotSpeedRelativeDataType_calcSizeBinary(const UA_CRCL_RotSpeedRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedRelativeDataType_encodeBinary(const UA_CRCL_RotSpeedRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotSpeedRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE], NULL);
}

/* CRCL_RotAccelRelativeDataType */
static UA_INLINE size_t
UA_CRCL_RotAccelRelativeDataType_calcSizeBinary(const UA_CRCL_RotAccelRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelRelativeDataType_encodeBinary(const UA_CRCL_RotAccelRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotAccelRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE], NULL);
}

/* CRCL_RotAccelDataType */
static UA_INLINE size_t
UA_CRCL_RotAccelDataType_calcSizeBinary(const UA_CRCL_RotAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelDataType_encodeBinary(const UA_CRCL_RotAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE], NULL);
}

/* CloseToolChangerParamsSetDataType */
static UA_INLINE size_t
UA_CloseToolChangerParamsSetDataType_calcSizeBinary(const UA_CloseToolChangerParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerParamsSetDataType_encodeBinary(const UA_CloseToolChangerParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseToolChangerParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE], NULL);
}

/* SetRobotParametersParamsSetDataType */
static UA_INLINE size_t
UA_SetRobotParametersParamsSetDataType_calcSizeBinary(const UA_SetRobotParametersParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersParamsSetDataType_encodeBinary(const UA_SetRobotParametersParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRobotParametersParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE], NULL);
}

/* CRCL_ScalarSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_ScalarSensorStatusDataType_calcSizeBinary(const UA_CRCL_ScalarSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ScalarSensorStatusDataType_encodeBinary(const UA_CRCL_ScalarSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ScalarSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ScalarSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE], NULL);
}

/* EndCanonParamsSetDataType */
static UA_INLINE size_t
UA_EndCanonParamsSetDataType_calcSizeBinary(const UA_EndCanonParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EndCanonParamsSetDataType_encodeBinary(const UA_EndCanonParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndCanonParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndCanonParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE], NULL);
}

/* SetIntermediatePoseToleranceParamsSetDataType */
static UA_INLINE size_t
UA_SetIntermediatePoseToleranceParamsSetDataType_calcSizeBinary(const UA_SetIntermediatePoseToleranceParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceParamsSetDataType_encodeBinary(const UA_SetIntermediatePoseToleranceParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetIntermediatePoseToleranceParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE], NULL);
}

/* CRCL_ForceUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_ForceUnitEnumDataType_calcSizeBinary(const UA_CRCL_ForceUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceUnitEnumDataType_encodeBinary(const UA_CRCL_ForceUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ForceUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE], NULL);
}

/* SetEndeffectorParamsSetDataType */
static UA_INLINE size_t
UA_SetEndeffectorParamsSetDataType_calcSizeBinary(const UA_SetEndeffectorParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParamsSetDataType_encodeBinary(const UA_SetEndeffectorParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE], NULL);
}

/* EnableSensorParamsSetDataType */
static UA_INLINE size_t
UA_EnableSensorParamsSetDataType_calcSizeBinary(const UA_EnableSensorParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorParamsSetDataType_encodeBinary(const UA_EnableSensorParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableSensorParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE], NULL);
}

/* CRCLCommandsBufferState */
static UA_INLINE size_t
UA_CRCLCommandsBufferState_calcSizeBinary(const UA_CRCLCommandsBufferState *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsBufferState_encodeBinary(const UA_CRCLCommandsBufferState *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsBufferState_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandsBufferState *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE], NULL);
}

/* CRCL_JointStatusesDataType */
static UA_INLINE size_t
UA_CRCL_JointStatusesDataType_calcSizeBinary(const UA_CRCL_JointStatusesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusesDataType_encodeBinary(const UA_CRCL_JointStatusesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointStatusesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE], NULL);
}

/* CRCL_StopConditionEnumDataType */
static UA_INLINE size_t
UA_CRCL_StopConditionEnumDataType_calcSizeBinary(const UA_CRCL_StopConditionEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_StopConditionEnumDataType_encodeBinary(const UA_CRCL_StopConditionEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_StopConditionEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_StopConditionEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE], NULL);
}

/* CRCL_RotSpeedAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_RotSpeedAbsoluteDataType_calcSizeBinary(const UA_CRCL_RotSpeedAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedAbsoluteDataType_encodeBinary(const UA_CRCL_RotSpeedAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotSpeedAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE], NULL);
}

/* SetTorqueUnitsParamsSetDataType */
static UA_INLINE size_t
UA_SetTorqueUnitsParamsSetDataType_calcSizeBinary(const UA_SetTorqueUnitsParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsParamsSetDataType_encodeBinary(const UA_SetTorqueUnitsParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTorqueUnitsParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE], NULL);
}

/* CRCL_GuardDataType */
static UA_INLINE size_t
UA_CRCL_GuardDataType_calcSizeBinary(const UA_CRCL_GuardDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardDataType_encodeBinary(const UA_CRCL_GuardDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_GuardDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE], NULL);
}

/* ConfigureStatusReportDataType */
static UA_INLINE size_t
UA_ConfigureStatusReportDataType_calcSizeBinary(const UA_ConfigureStatusReportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportDataType_encodeBinary(const UA_ConfigureStatusReportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureStatusReportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE], NULL);
}

/* RunProgramDataType */
static UA_INLINE size_t
UA_RunProgramDataType_calcSizeBinary(const UA_RunProgramDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_RunProgramDataType_encodeBinary(const UA_RunProgramDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RunProgramDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RunProgramDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE], NULL);
}

/* CRCL_ParallelGripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_ParallelGripperStatusDataType_calcSizeBinary(const UA_CRCL_ParallelGripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParallelGripperStatusDataType_encodeBinary(const UA_CRCL_ParallelGripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParallelGripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ParallelGripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE], NULL);
}

/* CRCLCommandDataType */
static UA_INLINE size_t
UA_CRCLCommandDataType_calcSizeBinary(const UA_CRCLCommandDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandDataType_encodeBinary(const UA_CRCLCommandDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE], NULL);
}

/* SetIntermediatePoseToleranceDataType */
static UA_INLINE size_t
UA_SetIntermediatePoseToleranceDataType_calcSizeBinary(const UA_SetIntermediatePoseToleranceDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceDataType_encodeBinary(const UA_SetIntermediatePoseToleranceDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetIntermediatePoseToleranceDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE], NULL);
}

/* SetRobotParametersDataType */
static UA_INLINE size_t
UA_SetRobotParametersDataType_calcSizeBinary(const UA_SetRobotParametersDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersDataType_encodeBinary(const UA_SetRobotParametersDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRobotParametersDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE], NULL);
}

/* CRCL_ForceTorqueSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_ForceTorqueSensorStatusDataType_calcSizeBinary(const UA_CRCL_ForceTorqueSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceTorqueSensorStatusDataType_encodeBinary(const UA_CRCL_ForceTorqueSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceTorqueSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ForceTorqueSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE], NULL);
}

/* CRCL_OnOffSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_OnOffSensorStatusDataType_calcSizeBinary(const UA_CRCL_OnOffSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_OnOffSensorStatusDataType_encodeBinary(const UA_CRCL_OnOffSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_OnOffSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_OnOffSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE], NULL);
}

/* CRCL_JointDetailsDataType */
static UA_INLINE size_t
UA_CRCL_JointDetailsDataType_calcSizeBinary(const UA_CRCL_JointDetailsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointDetailsDataType_encodeBinary(const UA_CRCL_JointDetailsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointDetailsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointDetailsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE], NULL);
}

/* EnableGripperParamsSetDataType */
static UA_INLINE size_t
UA_EnableGripperParamsSetDataType_calcSizeBinary(const UA_EnableGripperParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperParamsSetDataType_encodeBinary(const UA_EnableGripperParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableGripperParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE], NULL);
}

/* CRCL_SensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_SensorStatusDataType_calcSizeBinary(const UA_CRCL_SensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusDataType_encodeBinary(const UA_CRCL_SensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_SensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE], NULL);
}

/* CRCL_TwistDataType */
static UA_INLINE size_t
UA_CRCL_TwistDataType_calcSizeBinary(const UA_CRCL_TwistDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TwistDataType_encodeBinary(const UA_CRCL_TwistDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TwistDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TwistDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE], NULL);
}

/* CRCL_ThreeFingerGripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_ThreeFingerGripperStatusDataType_calcSizeBinary(const UA_CRCL_ThreeFingerGripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ThreeFingerGripperStatusDataType_encodeBinary(const UA_CRCL_ThreeFingerGripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ThreeFingerGripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ThreeFingerGripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE], NULL);
}

/* CRCL_TransSpeedRelativeDataType */
static UA_INLINE size_t
UA_CRCL_TransSpeedRelativeDataType_calcSizeBinary(const UA_CRCL_TransSpeedRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedRelativeDataType_encodeBinary(const UA_CRCL_TransSpeedRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransSpeedRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE], NULL);
}

/* CRCL_TransAccelRelativeDataType */
static UA_INLINE size_t
UA_CRCL_TransAccelRelativeDataType_calcSizeBinary(const UA_CRCL_TransAccelRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelRelativeDataType_encodeBinary(const UA_CRCL_TransAccelRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransAccelRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE], NULL);
}

/* SetLengthUnitsParamsSetDataType */
static UA_INLINE size_t
UA_SetLengthUnitsParamsSetDataType_calcSizeBinary(const UA_SetLengthUnitsParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsParamsSetDataType_encodeBinary(const UA_SetLengthUnitsParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetLengthUnitsParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE], NULL);
}

/* CRCL_SettingsStatusDataType */
static UA_INLINE size_t
UA_CRCL_SettingsStatusDataType_calcSizeBinary(const UA_CRCL_SettingsStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SettingsStatusDataType_encodeBinary(const UA_CRCL_SettingsStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SettingsStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_SettingsStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE], NULL);
}

/* StopMotionDataType */
static UA_INLINE size_t
UA_StopMotionDataType_calcSizeBinary(const UA_StopMotionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_StopMotionDataType_encodeBinary(const UA_StopMotionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StopMotionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StopMotionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE], NULL);
}

/* OpenToolChangerDataType */
static UA_INLINE size_t
UA_OpenToolChangerDataType_calcSizeBinary(const UA_OpenToolChangerDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerDataType_encodeBinary(const UA_OpenToolChangerDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenToolChangerDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE], NULL);
}

/* SetForceUnitsDataType */
static UA_INLINE size_t
UA_SetForceUnitsDataType_calcSizeBinary(const UA_SetForceUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsDataType_encodeBinary(const UA_SetForceUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetForceUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE], NULL);
}

/* SetEndeffectorDataType */
static UA_INLINE size_t
UA_SetEndeffectorDataType_calcSizeBinary(const UA_SetEndeffectorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorDataType_encodeBinary(const UA_SetEndeffectorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE], NULL);
}

/* ConfigureJointReportsDataType */
static UA_INLINE size_t
UA_ConfigureJointReportsDataType_calcSizeBinary(const UA_ConfigureJointReportsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsDataType_encodeBinary(const UA_ConfigureJointReportsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureJointReportsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE], NULL);
}

/* CloseToolChangerDataType */
static UA_INLINE size_t
UA_CloseToolChangerDataType_calcSizeBinary(const UA_CloseToolChangerDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerDataType_encodeBinary(const UA_CloseToolChangerDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseToolChangerDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE], NULL);
}

/* SetRotAccelParamsSetDataType */
static UA_INLINE size_t
UA_SetRotAccelParamsSetDataType_calcSizeBinary(const UA_SetRotAccelParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelParamsSetDataType_encodeBinary(const UA_SetRotAccelParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotAccelParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE], NULL);
}

/* SetEndeffectorParametersParamsSetDataType */
static UA_INLINE size_t
UA_SetEndeffectorParametersParamsSetDataType_calcSizeBinary(const UA_SetEndeffectorParametersParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersParamsSetDataType_encodeBinary(const UA_SetEndeffectorParametersParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorParametersParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE], NULL);
}

/* GetStatusDataType */
static UA_INLINE size_t
UA_GetStatusDataType_calcSizeBinary(const UA_GetStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_GetStatusDataType_encodeBinary(const UA_GetStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE], NULL);
}

/* SetForceUnitsParamsSetDataType */
static UA_INLINE size_t
UA_SetForceUnitsParamsSetDataType_calcSizeBinary(const UA_SetForceUnitsParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsParamsSetDataType_encodeBinary(const UA_SetForceUnitsParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetForceUnitsParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE], NULL);
}

/* CRCL_WrenchDataType */
static UA_INLINE size_t
UA_CRCL_WrenchDataType_calcSizeBinary(const UA_CRCL_WrenchDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_WrenchDataType_encodeBinary(const UA_CRCL_WrenchDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_WrenchDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_WrenchDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE], NULL);
}

/* ConfigureJointReportsParamsSetDataType */
static UA_INLINE size_t
UA_ConfigureJointReportsParamsSetDataType_calcSizeBinary(const UA_ConfigureJointReportsParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsParamsSetDataType_encodeBinary(const UA_ConfigureJointReportsParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureJointReportsParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE], NULL);
}

/* CRCL_CommandStatusDataType */
static UA_INLINE size_t
UA_CRCL_CommandStatusDataType_calcSizeBinary(const UA_CRCL_CommandStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStatusDataType_encodeBinary(const UA_CRCL_CommandStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_CommandStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE], NULL);
}

/* InitCanonDataType */
static UA_INLINE size_t
UA_InitCanonDataType_calcSizeBinary(const UA_InitCanonDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_InitCanonDataType_encodeBinary(const UA_InitCanonDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_InitCanonDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_InitCanonDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE], NULL);
}

/* DisableRobotParameterStatusDataType */
static UA_INLINE size_t
UA_DisableRobotParameterStatusDataType_calcSizeBinary(const UA_DisableRobotParameterStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusDataType_encodeBinary(const UA_DisableRobotParameterStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableRobotParameterStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE], NULL);
}

/* CRCL_PoseDataType */
static UA_INLINE size_t
UA_CRCL_PoseDataType_calcSizeBinary(const UA_CRCL_PoseDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseDataType_encodeBinary(const UA_CRCL_PoseDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE], NULL);
}

/* CRCL_TransSpeedDataType */
static UA_INLINE size_t
UA_CRCL_TransSpeedDataType_calcSizeBinary(const UA_CRCL_TransSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedDataType_encodeBinary(const UA_CRCL_TransSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE], NULL);
}

/* MoveToDataType */
static UA_INLINE size_t
UA_MoveToDataType_calcSizeBinary(const UA_MoveToDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveToDataType_encodeBinary(const UA_MoveToDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveToDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveToDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE], NULL);
}

/* CRCL_VacuumGripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_VacuumGripperStatusDataType_calcSizeBinary(const UA_CRCL_VacuumGripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VacuumGripperStatusDataType_encodeBinary(const UA_CRCL_VacuumGripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VacuumGripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_VacuumGripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE], NULL);
}

/* CRCL_RotSpeedDataType */
static UA_INLINE size_t
UA_CRCL_RotSpeedDataType_calcSizeBinary(const UA_CRCL_RotSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedDataType_encodeBinary(const UA_CRCL_RotSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE], NULL);
}

/* SetMotionCoordinationDataType */
static UA_INLINE size_t
UA_SetMotionCoordinationDataType_calcSizeBinary(const UA_SetMotionCoordinationDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationDataType_encodeBinary(const UA_SetMotionCoordinationDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMotionCoordinationDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE], NULL);
}

/* DwellDataType */
static UA_INLINE size_t
UA_DwellDataType_calcSizeBinary(const UA_DwellDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DwellDataType_encodeBinary(const UA_DwellDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DwellDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DwellDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE], NULL);
}

/* CRCL_CountSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_CountSensorStatusDataType_calcSizeBinary(const UA_CRCL_CountSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CountSensorStatusDataType_encodeBinary(const UA_CRCL_CountSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CountSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_CountSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE], NULL);
}

/* SetRotAccelDataType */
static UA_INLINE size_t
UA_SetRotAccelDataType_calcSizeBinary(const UA_SetRotAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelDataType_encodeBinary(const UA_SetRotAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE], NULL);
}

/* EnableGripperDataType */
static UA_INLINE size_t
UA_EnableGripperDataType_calcSizeBinary(const UA_EnableGripperDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperDataType_encodeBinary(const UA_EnableGripperDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableGripperDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE], NULL);
}

/* MiddleCommandDataType */
static UA_INLINE size_t
UA_MiddleCommandDataType_calcSizeBinary(const UA_MiddleCommandDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MiddleCommandDataType_encodeBinary(const UA_MiddleCommandDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MiddleCommandDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MiddleCommandDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE], NULL);
}

/* SetRotSpeedDataType */
static UA_INLINE size_t
UA_SetRotSpeedDataType_calcSizeBinary(const UA_SetRotSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedDataType_encodeBinary(const UA_SetRotSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE], NULL);
}

/* CRCL_SensorStatusesDataType */
static UA_INLINE size_t
UA_CRCL_SensorStatusesDataType_calcSizeBinary(const UA_CRCL_SensorStatusesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusesDataType_encodeBinary(const UA_CRCL_SensorStatusesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_SensorStatusesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE], NULL);
}

/* DisableSensorDataType */
static UA_INLINE size_t
UA_DisableSensorDataType_calcSizeBinary(const UA_DisableSensorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorDataType_encodeBinary(const UA_DisableSensorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableSensorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE], NULL);
}

/* CRCL_JointPositionsTolerancesDataType */
static UA_INLINE size_t
UA_CRCL_JointPositionsTolerancesDataType_calcSizeBinary(const UA_CRCL_JointPositionsTolerancesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionsTolerancesDataType_encodeBinary(const UA_CRCL_JointPositionsTolerancesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionsTolerancesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointPositionsTolerancesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE], NULL);
}

/* EnableSensorDataType */
static UA_INLINE size_t
UA_EnableSensorDataType_calcSizeBinary(const UA_EnableSensorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorDataType_encodeBinary(const UA_EnableSensorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableSensorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE], NULL);
}

/* SetEndeffectorParametersDataType */
static UA_INLINE size_t
UA_SetEndeffectorParametersDataType_calcSizeBinary(const UA_SetEndeffectorParametersDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersDataType_encodeBinary(const UA_SetEndeffectorParametersDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorParametersDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE], NULL);
}

/* EnableRobotParameterStatusDataType */
static UA_INLINE size_t
UA_EnableRobotParameterStatusDataType_calcSizeBinary(const UA_EnableRobotParameterStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusDataType_encodeBinary(const UA_EnableRobotParameterStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableRobotParameterStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE], NULL);
}

/* SetTransSpeedParamsSetDataType */
static UA_INLINE size_t
UA_SetTransSpeedParamsSetDataType_calcSizeBinary(const UA_SetTransSpeedParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedParamsSetDataType_encodeBinary(const UA_SetTransSpeedParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransSpeedParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE], NULL);
}

/* MoveThroughToParamsSetDataType */
static UA_INLINE size_t
UA_MoveThroughToParamsSetDataType_calcSizeBinary(const UA_MoveThroughToParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToParamsSetDataType_encodeBinary(const UA_MoveThroughToParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveThroughToParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE], NULL);
}

/* EndCanonDataType */
static UA_INLINE size_t
UA_EndCanonDataType_calcSizeBinary(const UA_EndCanonDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EndCanonDataType_encodeBinary(const UA_EndCanonDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndCanonDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndCanonDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE], NULL);
}

/* SetEndPoseToleranceDataType */
static UA_INLINE size_t
UA_SetEndPoseToleranceDataType_calcSizeBinary(const UA_SetEndPoseToleranceDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceDataType_encodeBinary(const UA_SetEndPoseToleranceDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndPoseToleranceDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE], NULL);
}

/* MoveToParamsSetDataType */
static UA_INLINE size_t
UA_MoveToParamsSetDataType_calcSizeBinary(const UA_MoveToParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveToParamsSetDataType_encodeBinary(const UA_MoveToParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveToParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveToParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE], NULL);
}

/* SetAngleUnitsDataType */
static UA_INLINE size_t
UA_SetAngleUnitsDataType_calcSizeBinary(const UA_SetAngleUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsDataType_encodeBinary(const UA_SetAngleUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetAngleUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE], NULL);
}

/* SetTorqueUnitsDataType */
static UA_INLINE size_t
UA_SetTorqueUnitsDataType_calcSizeBinary(const UA_SetTorqueUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsDataType_encodeBinary(const UA_SetTorqueUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTorqueUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE], NULL);
}

/* StopMotionParamsSetDataType */
static UA_INLINE size_t
UA_StopMotionParamsSetDataType_calcSizeBinary(const UA_StopMotionParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_StopMotionParamsSetDataType_encodeBinary(const UA_StopMotionParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StopMotionParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StopMotionParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE], NULL);
}

/* MessageDataType */
static UA_INLINE size_t
UA_MessageDataType_calcSizeBinary(const UA_MessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MessageDataType_encodeBinary(const UA_MessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE], NULL);
}

/* CRCL_PoseStatusDataType */
static UA_INLINE size_t
UA_CRCL_PoseStatusDataType_calcSizeBinary(const UA_CRCL_PoseStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseStatusDataType_encodeBinary(const UA_CRCL_PoseStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE], NULL);
}

/* MoveThroughToDataType */
static UA_INLINE size_t
UA_MoveThroughToDataType_calcSizeBinary(const UA_MoveThroughToDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToDataType_encodeBinary(const UA_MoveThroughToDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveThroughToDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE], NULL);
}

/* DisableGripperDataType */
static UA_INLINE size_t
UA_DisableGripperDataType_calcSizeBinary(const UA_DisableGripperDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperDataType_encodeBinary(const UA_DisableGripperDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableGripperDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE], NULL);
}

/* SetLengthUnitsDataType */
static UA_INLINE size_t
UA_SetLengthUnitsDataType_calcSizeBinary(const UA_SetLengthUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsDataType_encodeBinary(const UA_SetLengthUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetLengthUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE], NULL);
}

/* SetDefaultJointPositionsTolerancesParamsSetDataType */
static UA_INLINE size_t
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_calcSizeBinary(const UA_SetDefaultJointPositionsTolerancesParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_encodeBinary(const UA_SetDefaultJointPositionsTolerancesParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetDefaultJointPositionsTolerancesParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE], NULL);
}

/* MoveScrewParamsSetDataType */
static UA_INLINE size_t
UA_MoveScrewParamsSetDataType_calcSizeBinary(const UA_MoveScrewParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewParamsSetDataType_encodeBinary(const UA_MoveScrewParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveScrewParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE], NULL);
}

/* CRCL_ActuateJointDataType */
static UA_INLINE size_t
UA_CRCL_ActuateJointDataType_calcSizeBinary(const UA_CRCL_ActuateJointDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ActuateJointDataType_encodeBinary(const UA_CRCL_ActuateJointDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ActuateJointDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ActuateJointDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE], NULL);
}

/* ActuateJointsParamsSetDataType */
static UA_INLINE size_t
UA_ActuateJointsParamsSetDataType_calcSizeBinary(const UA_ActuateJointsParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsParamsSetDataType_encodeBinary(const UA_ActuateJointsParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActuateJointsParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE], NULL);
}

/* CRCL_TransAccelDataType */
static UA_INLINE size_t
UA_CRCL_TransAccelDataType_calcSizeBinary(const UA_CRCL_TransAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelDataType_encodeBinary(const UA_CRCL_TransAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE], NULL);
}

/* MoveScrewDataType */
static UA_INLINE size_t
UA_MoveScrewDataType_calcSizeBinary(const UA_MoveScrewDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewDataType_encodeBinary(const UA_MoveScrewDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveScrewDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE], NULL);
}

/* SetDefaultJointPositionsTolerancesDataType */
static UA_INLINE size_t
UA_SetDefaultJointPositionsTolerancesDataType_calcSizeBinary(const UA_SetDefaultJointPositionsTolerancesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesDataType_encodeBinary(const UA_SetDefaultJointPositionsTolerancesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetDefaultJointPositionsTolerancesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE], NULL);
}

/* SetRotSpeedParamsSetDataType */
static UA_INLINE size_t
UA_SetRotSpeedParamsSetDataType_calcSizeBinary(const UA_SetRotSpeedParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedParamsSetDataType_encodeBinary(const UA_SetRotSpeedParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotSpeedParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE], NULL);
}

/* CRCLStatusDataType */
static UA_INLINE size_t
UA_CRCLStatusDataType_calcSizeBinary(const UA_CRCLStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLStatusDataType_encodeBinary(const UA_CRCLStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE], NULL);
}

/* SetTransSpeedDataType */
static UA_INLINE size_t
UA_SetTransSpeedDataType_calcSizeBinary(const UA_SetTransSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedDataType_encodeBinary(const UA_SetTransSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE], NULL);
}

/* ActuateJointsDataType */
static UA_INLINE size_t
UA_ActuateJointsDataType_calcSizeBinary(const UA_ActuateJointsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsDataType_encodeBinary(const UA_ActuateJointsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActuateJointsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE], NULL);
}

/* CRCL_PoseAndSetDataType */
static UA_INLINE size_t
UA_CRCL_PoseAndSetDataType_calcSizeBinary(const UA_CRCL_PoseAndSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseAndSetDataType_encodeBinary(const UA_CRCL_PoseAndSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseAndSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseAndSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE], NULL);
}

/* SetTransAccelParamsSetDataType */
static UA_INLINE size_t
UA_SetTransAccelParamsSetDataType_calcSizeBinary(const UA_SetTransAccelParamsSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelParamsSetDataType_encodeBinary(const UA_SetTransAccelParamsSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelParamsSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransAccelParamsSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE], NULL);
}

/* SetTransAccelDataType */
static UA_INLINE size_t
UA_SetTransAccelDataType_calcSizeBinary(const UA_SetTransAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelDataType_encodeBinary(const UA_SetTransAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE], NULL);
}

/* CRCLCommandsParamsSetsUnionDataType */
static UA_INLINE size_t
UA_CRCLCommandsParamsSetsUnionDataType_calcSizeBinary(const UA_CRCLCommandsParamsSetsUnionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsParamsSetsUnionDataType_encodeBinary(const UA_CRCLCommandsParamsSetsUnionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsParamsSetsUnionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandsParamsSetsUnionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE], NULL);
}

/* CRCLCommandsUnionDataType */
static UA_INLINE size_t
UA_CRCLCommandsUnionDataType_calcSizeBinary(const UA_CRCLCommandsUnionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsUnionDataType_encodeBinary(const UA_CRCLCommandsUnionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsUnionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandsUnionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE], NULL);
}

/* CRCLCommandsParamsSetsBufferDataType */
static UA_INLINE size_t
UA_CRCLCommandsParamsSetsBufferDataType_calcSizeBinary(const UA_CRCLCommandsParamsSetsBufferDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsParamsSetsBufferDataType_encodeBinary(const UA_CRCLCommandsParamsSetsBufferDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsParamsSetsBufferDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandsParamsSetsBufferDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE], NULL);
}

/* CRCLCommandsBufferDataType */
static UA_INLINE size_t
UA_CRCLCommandsBufferDataType_calcSizeBinary(const UA_CRCLCommandsBufferDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsBufferDataType_encodeBinary(const UA_CRCLCommandsBufferDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsBufferDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandsBufferDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE], NULL);
}

#endif /* TYPES_CRCL_GENERATED_ENCODING_BINARY_H_ */
