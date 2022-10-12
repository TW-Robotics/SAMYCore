/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2022-10-11 03:44:19 */

#ifndef TYPES_CRCL_GENERATED_HANDLING_H_
#define TYPES_CRCL_GENERATED_HANDLING_H_

#include "types_crcl_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* GetStatusParamsSetDataType */
static UA_INLINE void
UA_GetStatusParamsSetDataType_init(UA_GetStatusParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_GetStatusParamsSetDataType));
}

static UA_INLINE UA_GetStatusParamsSetDataType *
UA_GetStatusParamsSetDataType_new(void) {
    return (UA_GetStatusParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_GetStatusParamsSetDataType_copy(const UA_GetStatusParamsSetDataType *src, UA_GetStatusParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_GetStatusParamsSetDataType_deleteMembers(UA_GetStatusParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_GetStatusParamsSetDataType_clear(UA_GetStatusParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_GetStatusParamsSetDataType_delete(UA_GetStatusParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMSSETDATATYPE]);
}

/* CRCL_PointDataType */
static UA_INLINE void
UA_CRCL_PointDataType_init(UA_CRCL_PointDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PointDataType));
}

static UA_INLINE UA_CRCL_PointDataType *
UA_CRCL_PointDataType_new(void) {
    return (UA_CRCL_PointDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PointDataType_copy(const UA_CRCL_PointDataType *src, UA_CRCL_PointDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PointDataType_deleteMembers(UA_CRCL_PointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PointDataType_clear(UA_CRCL_PointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PointDataType_delete(UA_CRCL_PointDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

/* ConfigureStatusReportParamsSetDataType */
static UA_INLINE void
UA_ConfigureStatusReportParamsSetDataType_init(UA_ConfigureStatusReportParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureStatusReportParamsSetDataType));
}

static UA_INLINE UA_ConfigureStatusReportParamsSetDataType *
UA_ConfigureStatusReportParamsSetDataType_new(void) {
    return (UA_ConfigureStatusReportParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportParamsSetDataType_copy(const UA_ConfigureStatusReportParamsSetDataType *src, UA_ConfigureStatusReportParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureStatusReportParamsSetDataType_deleteMembers(UA_ConfigureStatusReportParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportParamsSetDataType_clear(UA_ConfigureStatusReportParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportParamsSetDataType_delete(UA_ConfigureStatusReportParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMSSETDATATYPE]);
}

/* SetMotionCoordinationParamsSetDataType */
static UA_INLINE void
UA_SetMotionCoordinationParamsSetDataType_init(UA_SetMotionCoordinationParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetMotionCoordinationParamsSetDataType));
}

static UA_INLINE UA_SetMotionCoordinationParamsSetDataType *
UA_SetMotionCoordinationParamsSetDataType_new(void) {
    return (UA_SetMotionCoordinationParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationParamsSetDataType_copy(const UA_SetMotionCoordinationParamsSetDataType *src, UA_SetMotionCoordinationParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetMotionCoordinationParamsSetDataType_deleteMembers(UA_SetMotionCoordinationParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationParamsSetDataType_clear(UA_SetMotionCoordinationParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationParamsSetDataType_delete(UA_SetMotionCoordinationParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMSSETDATATYPE]);
}

/* CRCL_PoseToleranceDataType */
static UA_INLINE void
UA_CRCL_PoseToleranceDataType_init(UA_CRCL_PoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseToleranceDataType));
}

static UA_INLINE UA_CRCL_PoseToleranceDataType *
UA_CRCL_PoseToleranceDataType_new(void) {
    return (UA_CRCL_PoseToleranceDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseToleranceDataType_copy(const UA_CRCL_PoseToleranceDataType *src, UA_CRCL_PoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseToleranceDataType_deleteMembers(UA_CRCL_PoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseToleranceDataType_clear(UA_CRCL_PoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseToleranceDataType_delete(UA_CRCL_PoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

/* EnableRobotParameterStatusParamsSetDataType */
static UA_INLINE void
UA_EnableRobotParameterStatusParamsSetDataType_init(UA_EnableRobotParameterStatusParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_EnableRobotParameterStatusParamsSetDataType));
}

static UA_INLINE UA_EnableRobotParameterStatusParamsSetDataType *
UA_EnableRobotParameterStatusParamsSetDataType_new(void) {
    return (UA_EnableRobotParameterStatusParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusParamsSetDataType_copy(const UA_EnableRobotParameterStatusParamsSetDataType *src, UA_EnableRobotParameterStatusParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableRobotParameterStatusParamsSetDataType_deleteMembers(UA_EnableRobotParameterStatusParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusParamsSetDataType_clear(UA_EnableRobotParameterStatusParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusParamsSetDataType_delete(UA_EnableRobotParameterStatusParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

/* CRCL_TransAccelAbsoluteDataType */
static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_init(UA_CRCL_TransAccelAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelAbsoluteDataType));
}

static UA_INLINE UA_CRCL_TransAccelAbsoluteDataType *
UA_CRCL_TransAccelAbsoluteDataType_new(void) {
    return (UA_CRCL_TransAccelAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelAbsoluteDataType_copy(const UA_CRCL_TransAccelAbsoluteDataType *src, UA_CRCL_TransAccelAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_deleteMembers(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_clear(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_delete(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

/* CRCL_FractionDataType */
static UA_INLINE void
UA_CRCL_FractionDataType_init(UA_CRCL_FractionDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_FractionDataType));
}

static UA_INLINE UA_CRCL_FractionDataType *
UA_CRCL_FractionDataType_new(void) {
    return (UA_CRCL_FractionDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_FractionDataType_copy(const UA_CRCL_FractionDataType *src, UA_CRCL_FractionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_FractionDataType_deleteMembers(UA_CRCL_FractionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE void
UA_CRCL_FractionDataType_clear(UA_CRCL_FractionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE void
UA_CRCL_FractionDataType_delete(UA_CRCL_FractionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

/* CRCL_JointSpeedAccelDataType */
static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_init(UA_CRCL_JointSpeedAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointSpeedAccelDataType));
}

static UA_INLINE UA_CRCL_JointSpeedAccelDataType *
UA_CRCL_JointSpeedAccelDataType_new(void) {
    return (UA_CRCL_JointSpeedAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointSpeedAccelDataType_copy(const UA_CRCL_JointSpeedAccelDataType *src, UA_CRCL_JointSpeedAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_deleteMembers(UA_CRCL_JointSpeedAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_clear(UA_CRCL_JointSpeedAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_delete(UA_CRCL_JointSpeedAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

/* SetEndPoseToleranceParamsSetDataType */
static UA_INLINE void
UA_SetEndPoseToleranceParamsSetDataType_init(UA_SetEndPoseToleranceParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetEndPoseToleranceParamsSetDataType));
}

static UA_INLINE UA_SetEndPoseToleranceParamsSetDataType *
UA_SetEndPoseToleranceParamsSetDataType_new(void) {
    return (UA_SetEndPoseToleranceParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceParamsSetDataType_copy(const UA_SetEndPoseToleranceParamsSetDataType *src, UA_SetEndPoseToleranceParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndPoseToleranceParamsSetDataType_deleteMembers(UA_SetEndPoseToleranceParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceParamsSetDataType_clear(UA_SetEndPoseToleranceParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceParamsSetDataType_delete(UA_SetEndPoseToleranceParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMSSETDATATYPE]);
}

/* MessageParamsSetDataType */
static UA_INLINE void
UA_MessageParamsSetDataType_init(UA_MessageParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_MessageParamsSetDataType));
}

static UA_INLINE UA_MessageParamsSetDataType *
UA_MessageParamsSetDataType_new(void) {
    return (UA_MessageParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MessageParamsSetDataType_copy(const UA_MessageParamsSetDataType *src, UA_MessageParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MessageParamsSetDataType_deleteMembers(UA_MessageParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MessageParamsSetDataType_clear(UA_MessageParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MessageParamsSetDataType_delete(UA_MessageParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMSSETDATATYPE]);
}

/* CRCL_JointLimitDataType */
static UA_INLINE void
UA_CRCL_JointLimitDataType_init(UA_CRCL_JointLimitDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointLimitDataType));
}

static UA_INLINE UA_CRCL_JointLimitDataType *
UA_CRCL_JointLimitDataType_new(void) {
    return (UA_CRCL_JointLimitDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointLimitDataType_copy(const UA_CRCL_JointLimitDataType *src, UA_CRCL_JointLimitDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointLimitDataType_deleteMembers(UA_CRCL_JointLimitDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointLimitDataType_clear(UA_CRCL_JointLimitDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointLimitDataType_delete(UA_CRCL_JointLimitDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

/* DisableGripperParamsSetDataType */
static UA_INLINE void
UA_DisableGripperParamsSetDataType_init(UA_DisableGripperParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_DisableGripperParamsSetDataType));
}

static UA_INLINE UA_DisableGripperParamsSetDataType *
UA_DisableGripperParamsSetDataType_new(void) {
    return (UA_DisableGripperParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableGripperParamsSetDataType_copy(const UA_DisableGripperParamsSetDataType *src, UA_DisableGripperParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableGripperParamsSetDataType_deleteMembers(UA_DisableGripperParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperParamsSetDataType_clear(UA_DisableGripperParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperParamsSetDataType_delete(UA_DisableGripperParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMSSETDATATYPE]);
}

/* DisableSensorParamsSetDataType */
static UA_INLINE void
UA_DisableSensorParamsSetDataType_init(UA_DisableSensorParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_DisableSensorParamsSetDataType));
}

static UA_INLINE UA_DisableSensorParamsSetDataType *
UA_DisableSensorParamsSetDataType_new(void) {
    return (UA_DisableSensorParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableSensorParamsSetDataType_copy(const UA_DisableSensorParamsSetDataType *src, UA_DisableSensorParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableSensorParamsSetDataType_deleteMembers(UA_DisableSensorParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorParamsSetDataType_clear(UA_DisableSensorParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorParamsSetDataType_delete(UA_DisableSensorParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMSSETDATATYPE]);
}

/* CRCL_DataThingDataType */
static UA_INLINE void
UA_CRCL_DataThingDataType_init(UA_CRCL_DataThingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_DataThingDataType));
}

static UA_INLINE UA_CRCL_DataThingDataType *
UA_CRCL_DataThingDataType_new(void) {
    return (UA_CRCL_DataThingDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_DataThingDataType_copy(const UA_CRCL_DataThingDataType *src, UA_CRCL_DataThingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_DataThingDataType_deleteMembers(UA_CRCL_DataThingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_DataThingDataType_clear(UA_CRCL_DataThingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_DataThingDataType_delete(UA_CRCL_DataThingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

/* CRCL_TorqueUnitEnumDataType */
static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_init(UA_CRCL_TorqueUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TorqueUnitEnumDataType));
}

static UA_INLINE UA_CRCL_TorqueUnitEnumDataType *
UA_CRCL_TorqueUnitEnumDataType_new(void) {
    return (UA_CRCL_TorqueUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TorqueUnitEnumDataType_copy(const UA_CRCL_TorqueUnitEnumDataType *src, UA_CRCL_TorqueUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_deleteMembers(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_clear(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_delete(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

/* InitCanonParamsSetDataType */
static UA_INLINE void
UA_InitCanonParamsSetDataType_init(UA_InitCanonParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_InitCanonParamsSetDataType));
}

static UA_INLINE UA_InitCanonParamsSetDataType *
UA_InitCanonParamsSetDataType_new(void) {
    return (UA_InitCanonParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_InitCanonParamsSetDataType_copy(const UA_InitCanonParamsSetDataType *src, UA_InitCanonParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_InitCanonParamsSetDataType_deleteMembers(UA_InitCanonParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_InitCanonParamsSetDataType_clear(UA_InitCanonParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_InitCanonParamsSetDataType_delete(UA_InitCanonParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMSSETDATATYPE]);
}

/* DwellParamsSetDataType */
static UA_INLINE void
UA_DwellParamsSetDataType_init(UA_DwellParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_DwellParamsSetDataType));
}

static UA_INLINE UA_DwellParamsSetDataType *
UA_DwellParamsSetDataType_new(void) {
    return (UA_DwellParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DwellParamsSetDataType_copy(const UA_DwellParamsSetDataType *src, UA_DwellParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DwellParamsSetDataType_deleteMembers(UA_DwellParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DwellParamsSetDataType_clear(UA_DwellParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DwellParamsSetDataType_delete(UA_DwellParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMSSETDATATYPE]);
}

/* CRCL_AngleUnitEnumDataType */
static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_init(UA_CRCL_AngleUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_AngleUnitEnumDataType));
}

static UA_INLINE UA_CRCL_AngleUnitEnumDataType *
UA_CRCL_AngleUnitEnumDataType_new(void) {
    return (UA_CRCL_AngleUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_AngleUnitEnumDataType_copy(const UA_CRCL_AngleUnitEnumDataType *src, UA_CRCL_AngleUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_deleteMembers(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_clear(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_delete(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

/* CRCL_JointStatusDataType */
static UA_INLINE void
UA_CRCL_JointStatusDataType_init(UA_CRCL_JointStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointStatusDataType));
}

static UA_INLINE UA_CRCL_JointStatusDataType *
UA_CRCL_JointStatusDataType_new(void) {
    return (UA_CRCL_JointStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusDataType_copy(const UA_CRCL_JointStatusDataType *src, UA_CRCL_JointStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointStatusDataType_deleteMembers(UA_CRCL_JointStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusDataType_clear(UA_CRCL_JointStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusDataType_delete(UA_CRCL_JointStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

/* CRCL_TransSpeedAbsoluteDataType */
static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_init(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedAbsoluteDataType));
}

static UA_INLINE UA_CRCL_TransSpeedAbsoluteDataType *
UA_CRCL_TransSpeedAbsoluteDataType_new(void) {
    return (UA_CRCL_TransSpeedAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedAbsoluteDataType_copy(const UA_CRCL_TransSpeedAbsoluteDataType *src, UA_CRCL_TransSpeedAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_deleteMembers(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_clear(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_delete(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

/* OpenToolChangerParamsSetDataType */
static UA_INLINE void
UA_OpenToolChangerParamsSetDataType_init(UA_OpenToolChangerParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_OpenToolChangerParamsSetDataType));
}

static UA_INLINE UA_OpenToolChangerParamsSetDataType *
UA_OpenToolChangerParamsSetDataType_new(void) {
    return (UA_OpenToolChangerParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_OpenToolChangerParamsSetDataType_copy(const UA_OpenToolChangerParamsSetDataType *src, UA_OpenToolChangerParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenToolChangerParamsSetDataType_deleteMembers(UA_OpenToolChangerParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerParamsSetDataType_clear(UA_OpenToolChangerParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerParamsSetDataType_delete(UA_OpenToolChangerParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMSSETDATATYPE]);
}

/* SetAngleUnitsParamsSetDataType */
static UA_INLINE void
UA_SetAngleUnitsParamsSetDataType_init(UA_SetAngleUnitsParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetAngleUnitsParamsSetDataType));
}

static UA_INLINE UA_SetAngleUnitsParamsSetDataType *
UA_SetAngleUnitsParamsSetDataType_new(void) {
    return (UA_SetAngleUnitsParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetAngleUnitsParamsSetDataType_copy(const UA_SetAngleUnitsParamsSetDataType *src, UA_SetAngleUnitsParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetAngleUnitsParamsSetDataType_deleteMembers(UA_SetAngleUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsParamsSetDataType_clear(UA_SetAngleUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsParamsSetDataType_delete(UA_SetAngleUnitsParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMSSETDATATYPE]);
}

/* CRCL_ParameterSettingDataType */
static UA_INLINE void
UA_CRCL_ParameterSettingDataType_init(UA_CRCL_ParameterSettingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ParameterSettingDataType));
}

static UA_INLINE UA_CRCL_ParameterSettingDataType *
UA_CRCL_ParameterSettingDataType_new(void) {
    return (UA_CRCL_ParameterSettingDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ParameterSettingDataType_copy(const UA_CRCL_ParameterSettingDataType *src, UA_CRCL_ParameterSettingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ParameterSettingDataType_deleteMembers(UA_CRCL_ParameterSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParameterSettingDataType_clear(UA_CRCL_ParameterSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParameterSettingDataType_delete(UA_CRCL_ParameterSettingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

/* CRCL_ConfigureJointReportDataType */
static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_init(UA_CRCL_ConfigureJointReportDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ConfigureJointReportDataType));
}

static UA_INLINE UA_CRCL_ConfigureJointReportDataType *
UA_CRCL_ConfigureJointReportDataType_new(void) {
    return (UA_CRCL_ConfigureJointReportDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ConfigureJointReportDataType_copy(const UA_CRCL_ConfigureJointReportDataType *src, UA_CRCL_ConfigureJointReportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_deleteMembers(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_clear(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_delete(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

/* CRCLCommandParamsSetDataType */
static UA_INLINE void
UA_CRCLCommandParamsSetDataType_init(UA_CRCLCommandParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandParamsSetDataType));
}

static UA_INLINE UA_CRCLCommandParamsSetDataType *
UA_CRCLCommandParamsSetDataType_new(void) {
    return (UA_CRCLCommandParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandParamsSetDataType_copy(const UA_CRCLCommandParamsSetDataType *src, UA_CRCLCommandParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandParamsSetDataType_deleteMembers(UA_CRCLCommandParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandParamsSetDataType_clear(UA_CRCLCommandParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandParamsSetDataType_delete(UA_CRCLCommandParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMSSETDATATYPE]);
}

/* CRCL_JointPositionToleranceSettingDataType */
static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_init(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointPositionToleranceSettingDataType));
}

static UA_INLINE UA_CRCL_JointPositionToleranceSettingDataType *
UA_CRCL_JointPositionToleranceSettingDataType_new(void) {
    return (UA_CRCL_JointPositionToleranceSettingDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionToleranceSettingDataType_copy(const UA_CRCL_JointPositionToleranceSettingDataType *src, UA_CRCL_JointPositionToleranceSettingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_deleteMembers(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_clear(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_delete(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

/* CRCL_RotAccelAbsoluteDataType */
static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_init(UA_CRCL_RotAccelAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelAbsoluteDataType));
}

static UA_INLINE UA_CRCL_RotAccelAbsoluteDataType *
UA_CRCL_RotAccelAbsoluteDataType_new(void) {
    return (UA_CRCL_RotAccelAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelAbsoluteDataType_copy(const UA_CRCL_RotAccelAbsoluteDataType *src, UA_CRCL_RotAccelAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_deleteMembers(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_clear(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_delete(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

/* CRCL_CommandStateEnumDataType */
static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_init(UA_CRCL_CommandStateEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CommandStateEnumDataType));
}

static UA_INLINE UA_CRCL_CommandStateEnumDataType *
UA_CRCL_CommandStateEnumDataType_new(void) {
    return (UA_CRCL_CommandStateEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CommandStateEnumDataType_copy(const UA_CRCL_CommandStateEnumDataType *src, UA_CRCL_CommandStateEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_deleteMembers(UA_CRCL_CommandStateEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_clear(UA_CRCL_CommandStateEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_delete(UA_CRCL_CommandStateEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

/* CRCL_LengthUnitEnumDataType */
static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_init(UA_CRCL_LengthUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_LengthUnitEnumDataType));
}

static UA_INLINE UA_CRCL_LengthUnitEnumDataType *
UA_CRCL_LengthUnitEnumDataType_new(void) {
    return (UA_CRCL_LengthUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_LengthUnitEnumDataType_copy(const UA_CRCL_LengthUnitEnumDataType *src, UA_CRCL_LengthUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_deleteMembers(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_clear(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_delete(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

/* CRCL_VectorDataType */
static UA_INLINE void
UA_CRCL_VectorDataType_init(UA_CRCL_VectorDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_VectorDataType));
}

static UA_INLINE UA_CRCL_VectorDataType *
UA_CRCL_VectorDataType_new(void) {
    return (UA_CRCL_VectorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_VectorDataType_copy(const UA_CRCL_VectorDataType *src, UA_CRCL_VectorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_VectorDataType_deleteMembers(UA_CRCL_VectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VectorDataType_clear(UA_CRCL_VectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VectorDataType_delete(UA_CRCL_VectorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

/* CRCL_GripperStatusDataType */
static UA_INLINE void
UA_CRCL_GripperStatusDataType_init(UA_CRCL_GripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GripperStatusDataType));
}

static UA_INLINE UA_CRCL_GripperStatusDataType *
UA_CRCL_GripperStatusDataType_new(void) {
    return (UA_CRCL_GripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GripperStatusDataType_copy(const UA_CRCL_GripperStatusDataType *src, UA_CRCL_GripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GripperStatusDataType_deleteMembers(UA_CRCL_GripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GripperStatusDataType_clear(UA_CRCL_GripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GripperStatusDataType_delete(UA_CRCL_GripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

/* CRCL_JointForceTorqueDataType */
static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_init(UA_CRCL_JointForceTorqueDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointForceTorqueDataType));
}

static UA_INLINE UA_CRCL_JointForceTorqueDataType *
UA_CRCL_JointForceTorqueDataType_new(void) {
    return (UA_CRCL_JointForceTorqueDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointForceTorqueDataType_copy(const UA_CRCL_JointForceTorqueDataType *src, UA_CRCL_JointForceTorqueDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_deleteMembers(UA_CRCL_JointForceTorqueDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_clear(UA_CRCL_JointForceTorqueDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_delete(UA_CRCL_JointForceTorqueDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

/* CRCL_GuardLimitEnumDataType */
static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_init(UA_CRCL_GuardLimitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GuardLimitEnumDataType));
}

static UA_INLINE UA_CRCL_GuardLimitEnumDataType *
UA_CRCL_GuardLimitEnumDataType_new(void) {
    return (UA_CRCL_GuardLimitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GuardLimitEnumDataType_copy(const UA_CRCL_GuardLimitEnumDataType *src, UA_CRCL_GuardLimitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_deleteMembers(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_clear(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_delete(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

/* DisableRobotParameterStatusParamsSetDataType */
static UA_INLINE void
UA_DisableRobotParameterStatusParamsSetDataType_init(UA_DisableRobotParameterStatusParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_DisableRobotParameterStatusParamsSetDataType));
}

static UA_INLINE UA_DisableRobotParameterStatusParamsSetDataType *
UA_DisableRobotParameterStatusParamsSetDataType_new(void) {
    return (UA_DisableRobotParameterStatusParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusParamsSetDataType_copy(const UA_DisableRobotParameterStatusParamsSetDataType *src, UA_DisableRobotParameterStatusParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableRobotParameterStatusParamsSetDataType_deleteMembers(UA_DisableRobotParameterStatusParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusParamsSetDataType_clear(UA_DisableRobotParameterStatusParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusParamsSetDataType_delete(UA_DisableRobotParameterStatusParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMSSETDATATYPE]);
}

/* CRCL_RotSpeedRelativeDataType */
static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_init(UA_CRCL_RotSpeedRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedRelativeDataType));
}

static UA_INLINE UA_CRCL_RotSpeedRelativeDataType *
UA_CRCL_RotSpeedRelativeDataType_new(void) {
    return (UA_CRCL_RotSpeedRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedRelativeDataType_copy(const UA_CRCL_RotSpeedRelativeDataType *src, UA_CRCL_RotSpeedRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_deleteMembers(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_clear(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_delete(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

/* CRCL_RotAccelRelativeDataType */
static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_init(UA_CRCL_RotAccelRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelRelativeDataType));
}

static UA_INLINE UA_CRCL_RotAccelRelativeDataType *
UA_CRCL_RotAccelRelativeDataType_new(void) {
    return (UA_CRCL_RotAccelRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelRelativeDataType_copy(const UA_CRCL_RotAccelRelativeDataType *src, UA_CRCL_RotAccelRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_deleteMembers(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_clear(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_delete(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

/* CRCL_RotAccelDataType */
static UA_INLINE void
UA_CRCL_RotAccelDataType_init(UA_CRCL_RotAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelDataType));
}

static UA_INLINE UA_CRCL_RotAccelDataType *
UA_CRCL_RotAccelDataType_new(void) {
    return (UA_CRCL_RotAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelDataType_copy(const UA_CRCL_RotAccelDataType *src, UA_CRCL_RotAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelDataType_deleteMembers(UA_CRCL_RotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelDataType_clear(UA_CRCL_RotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelDataType_delete(UA_CRCL_RotAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

/* CloseToolChangerParamsSetDataType */
static UA_INLINE void
UA_CloseToolChangerParamsSetDataType_init(UA_CloseToolChangerParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_CloseToolChangerParamsSetDataType));
}

static UA_INLINE UA_CloseToolChangerParamsSetDataType *
UA_CloseToolChangerParamsSetDataType_new(void) {
    return (UA_CloseToolChangerParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CloseToolChangerParamsSetDataType_copy(const UA_CloseToolChangerParamsSetDataType *src, UA_CloseToolChangerParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseToolChangerParamsSetDataType_deleteMembers(UA_CloseToolChangerParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerParamsSetDataType_clear(UA_CloseToolChangerParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerParamsSetDataType_delete(UA_CloseToolChangerParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMSSETDATATYPE]);
}

/* SetRobotParametersParamsSetDataType */
static UA_INLINE void
UA_SetRobotParametersParamsSetDataType_init(UA_SetRobotParametersParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetRobotParametersParamsSetDataType));
}

static UA_INLINE UA_SetRobotParametersParamsSetDataType *
UA_SetRobotParametersParamsSetDataType_new(void) {
    return (UA_SetRobotParametersParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRobotParametersParamsSetDataType_copy(const UA_SetRobotParametersParamsSetDataType *src, UA_SetRobotParametersParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRobotParametersParamsSetDataType_deleteMembers(UA_SetRobotParametersParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersParamsSetDataType_clear(UA_SetRobotParametersParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersParamsSetDataType_delete(UA_SetRobotParametersParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMSSETDATATYPE]);
}

/* CRCL_ScalarSensorStatusDataType */
static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_init(UA_CRCL_ScalarSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ScalarSensorStatusDataType));
}

static UA_INLINE UA_CRCL_ScalarSensorStatusDataType *
UA_CRCL_ScalarSensorStatusDataType_new(void) {
    return (UA_CRCL_ScalarSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ScalarSensorStatusDataType_copy(const UA_CRCL_ScalarSensorStatusDataType *src, UA_CRCL_ScalarSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_deleteMembers(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_clear(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_delete(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

/* EndCanonParamsSetDataType */
static UA_INLINE void
UA_EndCanonParamsSetDataType_init(UA_EndCanonParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_EndCanonParamsSetDataType));
}

static UA_INLINE UA_EndCanonParamsSetDataType *
UA_EndCanonParamsSetDataType_new(void) {
    return (UA_EndCanonParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EndCanonParamsSetDataType_copy(const UA_EndCanonParamsSetDataType *src, UA_EndCanonParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndCanonParamsSetDataType_deleteMembers(UA_EndCanonParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EndCanonParamsSetDataType_clear(UA_EndCanonParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EndCanonParamsSetDataType_delete(UA_EndCanonParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMSSETDATATYPE]);
}

/* SetIntermediatePoseToleranceParamsSetDataType */
static UA_INLINE void
UA_SetIntermediatePoseToleranceParamsSetDataType_init(UA_SetIntermediatePoseToleranceParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetIntermediatePoseToleranceParamsSetDataType));
}

static UA_INLINE UA_SetIntermediatePoseToleranceParamsSetDataType *
UA_SetIntermediatePoseToleranceParamsSetDataType_new(void) {
    return (UA_SetIntermediatePoseToleranceParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceParamsSetDataType_copy(const UA_SetIntermediatePoseToleranceParamsSetDataType *src, UA_SetIntermediatePoseToleranceParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetIntermediatePoseToleranceParamsSetDataType_deleteMembers(UA_SetIntermediatePoseToleranceParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceParamsSetDataType_clear(UA_SetIntermediatePoseToleranceParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceParamsSetDataType_delete(UA_SetIntermediatePoseToleranceParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMSSETDATATYPE]);
}

/* CRCL_ForceUnitEnumDataType */
static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_init(UA_CRCL_ForceUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ForceUnitEnumDataType));
}

static UA_INLINE UA_CRCL_ForceUnitEnumDataType *
UA_CRCL_ForceUnitEnumDataType_new(void) {
    return (UA_CRCL_ForceUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ForceUnitEnumDataType_copy(const UA_CRCL_ForceUnitEnumDataType *src, UA_CRCL_ForceUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_deleteMembers(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_clear(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_delete(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

/* SetEndeffectorParamsSetDataType */
static UA_INLINE void
UA_SetEndeffectorParamsSetDataType_init(UA_SetEndeffectorParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorParamsSetDataType));
}

static UA_INLINE UA_SetEndeffectorParamsSetDataType *
UA_SetEndeffectorParamsSetDataType_new(void) {
    return (UA_SetEndeffectorParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorParamsSetDataType_copy(const UA_SetEndeffectorParamsSetDataType *src, UA_SetEndeffectorParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorParamsSetDataType_deleteMembers(UA_SetEndeffectorParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParamsSetDataType_clear(UA_SetEndeffectorParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParamsSetDataType_delete(UA_SetEndeffectorParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMSSETDATATYPE]);
}

/* EnableSensorParamsSetDataType */
static UA_INLINE void
UA_EnableSensorParamsSetDataType_init(UA_EnableSensorParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_EnableSensorParamsSetDataType));
}

static UA_INLINE UA_EnableSensorParamsSetDataType *
UA_EnableSensorParamsSetDataType_new(void) {
    return (UA_EnableSensorParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableSensorParamsSetDataType_copy(const UA_EnableSensorParamsSetDataType *src, UA_EnableSensorParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableSensorParamsSetDataType_deleteMembers(UA_EnableSensorParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorParamsSetDataType_clear(UA_EnableSensorParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorParamsSetDataType_delete(UA_EnableSensorParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMSSETDATATYPE]);
}

/* CRCLCommandsBufferState */
static UA_INLINE void
UA_CRCLCommandsBufferState_init(UA_CRCLCommandsBufferState *p) {
    memset(p, 0, sizeof(UA_CRCLCommandsBufferState));
}

static UA_INLINE UA_CRCLCommandsBufferState *
UA_CRCLCommandsBufferState_new(void) {
    return (UA_CRCLCommandsBufferState*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandsBufferState_copy(const UA_CRCLCommandsBufferState *src, UA_CRCLCommandsBufferState *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandsBufferState_deleteMembers(UA_CRCLCommandsBufferState *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE]);
}

static UA_INLINE void
UA_CRCLCommandsBufferState_clear(UA_CRCLCommandsBufferState *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE]);
}

static UA_INLINE void
UA_CRCLCommandsBufferState_delete(UA_CRCLCommandsBufferState *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE]);
}

/* CRCL_JointStatusesDataType */
static UA_INLINE void
UA_CRCL_JointStatusesDataType_init(UA_CRCL_JointStatusesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointStatusesDataType));
}

static UA_INLINE UA_CRCL_JointStatusesDataType *
UA_CRCL_JointStatusesDataType_new(void) {
    return (UA_CRCL_JointStatusesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusesDataType_copy(const UA_CRCL_JointStatusesDataType *src, UA_CRCL_JointStatusesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointStatusesDataType_deleteMembers(UA_CRCL_JointStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusesDataType_clear(UA_CRCL_JointStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusesDataType_delete(UA_CRCL_JointStatusesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

/* CRCL_StopConditionEnumDataType */
static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_init(UA_CRCL_StopConditionEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_StopConditionEnumDataType));
}

static UA_INLINE UA_CRCL_StopConditionEnumDataType *
UA_CRCL_StopConditionEnumDataType_new(void) {
    return (UA_CRCL_StopConditionEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_StopConditionEnumDataType_copy(const UA_CRCL_StopConditionEnumDataType *src, UA_CRCL_StopConditionEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_deleteMembers(UA_CRCL_StopConditionEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_clear(UA_CRCL_StopConditionEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_delete(UA_CRCL_StopConditionEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

/* CRCL_RotSpeedAbsoluteDataType */
static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_init(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedAbsoluteDataType));
}

static UA_INLINE UA_CRCL_RotSpeedAbsoluteDataType *
UA_CRCL_RotSpeedAbsoluteDataType_new(void) {
    return (UA_CRCL_RotSpeedAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedAbsoluteDataType_copy(const UA_CRCL_RotSpeedAbsoluteDataType *src, UA_CRCL_RotSpeedAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_deleteMembers(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_clear(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_delete(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

/* SetTorqueUnitsParamsSetDataType */
static UA_INLINE void
UA_SetTorqueUnitsParamsSetDataType_init(UA_SetTorqueUnitsParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetTorqueUnitsParamsSetDataType));
}

static UA_INLINE UA_SetTorqueUnitsParamsSetDataType *
UA_SetTorqueUnitsParamsSetDataType_new(void) {
    return (UA_SetTorqueUnitsParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsParamsSetDataType_copy(const UA_SetTorqueUnitsParamsSetDataType *src, UA_SetTorqueUnitsParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTorqueUnitsParamsSetDataType_deleteMembers(UA_SetTorqueUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsParamsSetDataType_clear(UA_SetTorqueUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsParamsSetDataType_delete(UA_SetTorqueUnitsParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMSSETDATATYPE]);
}

/* CRCL_GuardDataType */
static UA_INLINE void
UA_CRCL_GuardDataType_init(UA_CRCL_GuardDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GuardDataType));
}

static UA_INLINE UA_CRCL_GuardDataType *
UA_CRCL_GuardDataType_new(void) {
    return (UA_CRCL_GuardDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GuardDataType_copy(const UA_CRCL_GuardDataType *src, UA_CRCL_GuardDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GuardDataType_deleteMembers(UA_CRCL_GuardDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardDataType_clear(UA_CRCL_GuardDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardDataType_delete(UA_CRCL_GuardDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

/* ConfigureStatusReportDataType */
static UA_INLINE void
UA_ConfigureStatusReportDataType_init(UA_ConfigureStatusReportDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureStatusReportDataType));
}

static UA_INLINE UA_ConfigureStatusReportDataType *
UA_ConfigureStatusReportDataType_new(void) {
    return (UA_ConfigureStatusReportDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportDataType_copy(const UA_ConfigureStatusReportDataType *src, UA_ConfigureStatusReportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureStatusReportDataType_deleteMembers(UA_ConfigureStatusReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportDataType_clear(UA_ConfigureStatusReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportDataType_delete(UA_ConfigureStatusReportDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

/* RunProgramDataType */
static UA_INLINE void
UA_RunProgramDataType_init(UA_RunProgramDataType *p) {
    memset(p, 0, sizeof(UA_RunProgramDataType));
}

static UA_INLINE UA_RunProgramDataType *
UA_RunProgramDataType_new(void) {
    return (UA_RunProgramDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_RunProgramDataType_copy(const UA_RunProgramDataType *src, UA_RunProgramDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RunProgramDataType_deleteMembers(UA_RunProgramDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

static UA_INLINE void
UA_RunProgramDataType_clear(UA_RunProgramDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

static UA_INLINE void
UA_RunProgramDataType_delete(UA_RunProgramDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

/* CRCL_ParallelGripperStatusDataType */
static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_init(UA_CRCL_ParallelGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ParallelGripperStatusDataType));
}

static UA_INLINE UA_CRCL_ParallelGripperStatusDataType *
UA_CRCL_ParallelGripperStatusDataType_new(void) {
    return (UA_CRCL_ParallelGripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ParallelGripperStatusDataType_copy(const UA_CRCL_ParallelGripperStatusDataType *src, UA_CRCL_ParallelGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_deleteMembers(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_clear(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_delete(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

/* CRCLCommandDataType */
static UA_INLINE void
UA_CRCLCommandDataType_init(UA_CRCLCommandDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandDataType));
}

static UA_INLINE UA_CRCLCommandDataType *
UA_CRCLCommandDataType_new(void) {
    return (UA_CRCLCommandDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandDataType_copy(const UA_CRCLCommandDataType *src, UA_CRCLCommandDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandDataType_deleteMembers(UA_CRCLCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandDataType_clear(UA_CRCLCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandDataType_delete(UA_CRCLCommandDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

/* SetIntermediatePoseToleranceDataType */
static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_init(UA_SetIntermediatePoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_SetIntermediatePoseToleranceDataType));
}

static UA_INLINE UA_SetIntermediatePoseToleranceDataType *
UA_SetIntermediatePoseToleranceDataType_new(void) {
    return (UA_SetIntermediatePoseToleranceDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceDataType_copy(const UA_SetIntermediatePoseToleranceDataType *src, UA_SetIntermediatePoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_deleteMembers(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_clear(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_delete(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

/* SetRobotParametersDataType */
static UA_INLINE void
UA_SetRobotParametersDataType_init(UA_SetRobotParametersDataType *p) {
    memset(p, 0, sizeof(UA_SetRobotParametersDataType));
}

static UA_INLINE UA_SetRobotParametersDataType *
UA_SetRobotParametersDataType_new(void) {
    return (UA_SetRobotParametersDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRobotParametersDataType_copy(const UA_SetRobotParametersDataType *src, UA_SetRobotParametersDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRobotParametersDataType_deleteMembers(UA_SetRobotParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersDataType_clear(UA_SetRobotParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersDataType_delete(UA_SetRobotParametersDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

/* CRCL_ForceTorqueSensorStatusDataType */
static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_init(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ForceTorqueSensorStatusDataType));
}

static UA_INLINE UA_CRCL_ForceTorqueSensorStatusDataType *
UA_CRCL_ForceTorqueSensorStatusDataType_new(void) {
    return (UA_CRCL_ForceTorqueSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ForceTorqueSensorStatusDataType_copy(const UA_CRCL_ForceTorqueSensorStatusDataType *src, UA_CRCL_ForceTorqueSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_deleteMembers(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_clear(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_delete(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

/* CRCL_OnOffSensorStatusDataType */
static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_init(UA_CRCL_OnOffSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_OnOffSensorStatusDataType));
}

static UA_INLINE UA_CRCL_OnOffSensorStatusDataType *
UA_CRCL_OnOffSensorStatusDataType_new(void) {
    return (UA_CRCL_OnOffSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_OnOffSensorStatusDataType_copy(const UA_CRCL_OnOffSensorStatusDataType *src, UA_CRCL_OnOffSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_deleteMembers(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_clear(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_delete(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

/* CRCL_JointDetailsDataType */
static UA_INLINE void
UA_CRCL_JointDetailsDataType_init(UA_CRCL_JointDetailsDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointDetailsDataType));
}

static UA_INLINE UA_CRCL_JointDetailsDataType *
UA_CRCL_JointDetailsDataType_new(void) {
    return (UA_CRCL_JointDetailsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointDetailsDataType_copy(const UA_CRCL_JointDetailsDataType *src, UA_CRCL_JointDetailsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointDetailsDataType_deleteMembers(UA_CRCL_JointDetailsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointDetailsDataType_clear(UA_CRCL_JointDetailsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointDetailsDataType_delete(UA_CRCL_JointDetailsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

/* EnableGripperParamsSetDataType */
static UA_INLINE void
UA_EnableGripperParamsSetDataType_init(UA_EnableGripperParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_EnableGripperParamsSetDataType));
}

static UA_INLINE UA_EnableGripperParamsSetDataType *
UA_EnableGripperParamsSetDataType_new(void) {
    return (UA_EnableGripperParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableGripperParamsSetDataType_copy(const UA_EnableGripperParamsSetDataType *src, UA_EnableGripperParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableGripperParamsSetDataType_deleteMembers(UA_EnableGripperParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperParamsSetDataType_clear(UA_EnableGripperParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperParamsSetDataType_delete(UA_EnableGripperParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMSSETDATATYPE]);
}

/* CRCL_SensorStatusDataType */
static UA_INLINE void
UA_CRCL_SensorStatusDataType_init(UA_CRCL_SensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SensorStatusDataType));
}

static UA_INLINE UA_CRCL_SensorStatusDataType *
UA_CRCL_SensorStatusDataType_new(void) {
    return (UA_CRCL_SensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusDataType_copy(const UA_CRCL_SensorStatusDataType *src, UA_CRCL_SensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SensorStatusDataType_deleteMembers(UA_CRCL_SensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusDataType_clear(UA_CRCL_SensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusDataType_delete(UA_CRCL_SensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

/* CRCL_TwistDataType */
static UA_INLINE void
UA_CRCL_TwistDataType_init(UA_CRCL_TwistDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TwistDataType));
}

static UA_INLINE UA_CRCL_TwistDataType *
UA_CRCL_TwistDataType_new(void) {
    return (UA_CRCL_TwistDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TwistDataType_copy(const UA_CRCL_TwistDataType *src, UA_CRCL_TwistDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TwistDataType_deleteMembers(UA_CRCL_TwistDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TwistDataType_clear(UA_CRCL_TwistDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TwistDataType_delete(UA_CRCL_TwistDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

/* CRCL_ThreeFingerGripperStatusDataType */
static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_init(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ThreeFingerGripperStatusDataType));
}

static UA_INLINE UA_CRCL_ThreeFingerGripperStatusDataType *
UA_CRCL_ThreeFingerGripperStatusDataType_new(void) {
    return (UA_CRCL_ThreeFingerGripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ThreeFingerGripperStatusDataType_copy(const UA_CRCL_ThreeFingerGripperStatusDataType *src, UA_CRCL_ThreeFingerGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_deleteMembers(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_clear(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_delete(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

/* CRCL_TransSpeedRelativeDataType */
static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_init(UA_CRCL_TransSpeedRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedRelativeDataType));
}

static UA_INLINE UA_CRCL_TransSpeedRelativeDataType *
UA_CRCL_TransSpeedRelativeDataType_new(void) {
    return (UA_CRCL_TransSpeedRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedRelativeDataType_copy(const UA_CRCL_TransSpeedRelativeDataType *src, UA_CRCL_TransSpeedRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_deleteMembers(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_clear(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_delete(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

/* CRCL_TransAccelRelativeDataType */
static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_init(UA_CRCL_TransAccelRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelRelativeDataType));
}

static UA_INLINE UA_CRCL_TransAccelRelativeDataType *
UA_CRCL_TransAccelRelativeDataType_new(void) {
    return (UA_CRCL_TransAccelRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelRelativeDataType_copy(const UA_CRCL_TransAccelRelativeDataType *src, UA_CRCL_TransAccelRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_deleteMembers(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_clear(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_delete(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

/* SetLengthUnitsParamsSetDataType */
static UA_INLINE void
UA_SetLengthUnitsParamsSetDataType_init(UA_SetLengthUnitsParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetLengthUnitsParamsSetDataType));
}

static UA_INLINE UA_SetLengthUnitsParamsSetDataType *
UA_SetLengthUnitsParamsSetDataType_new(void) {
    return (UA_SetLengthUnitsParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetLengthUnitsParamsSetDataType_copy(const UA_SetLengthUnitsParamsSetDataType *src, UA_SetLengthUnitsParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetLengthUnitsParamsSetDataType_deleteMembers(UA_SetLengthUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsParamsSetDataType_clear(UA_SetLengthUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsParamsSetDataType_delete(UA_SetLengthUnitsParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMSSETDATATYPE]);
}

/* CRCL_SettingsStatusDataType */
static UA_INLINE void
UA_CRCL_SettingsStatusDataType_init(UA_CRCL_SettingsStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SettingsStatusDataType));
}

static UA_INLINE UA_CRCL_SettingsStatusDataType *
UA_CRCL_SettingsStatusDataType_new(void) {
    return (UA_CRCL_SettingsStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SettingsStatusDataType_copy(const UA_CRCL_SettingsStatusDataType *src, UA_CRCL_SettingsStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SettingsStatusDataType_deleteMembers(UA_CRCL_SettingsStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SettingsStatusDataType_clear(UA_CRCL_SettingsStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SettingsStatusDataType_delete(UA_CRCL_SettingsStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

/* StopMotionDataType */
static UA_INLINE void
UA_StopMotionDataType_init(UA_StopMotionDataType *p) {
    memset(p, 0, sizeof(UA_StopMotionDataType));
}

static UA_INLINE UA_StopMotionDataType *
UA_StopMotionDataType_new(void) {
    return (UA_StopMotionDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_StopMotionDataType_copy(const UA_StopMotionDataType *src, UA_StopMotionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_StopMotionDataType_deleteMembers(UA_StopMotionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

static UA_INLINE void
UA_StopMotionDataType_clear(UA_StopMotionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

static UA_INLINE void
UA_StopMotionDataType_delete(UA_StopMotionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

/* OpenToolChangerDataType */
static UA_INLINE void
UA_OpenToolChangerDataType_init(UA_OpenToolChangerDataType *p) {
    memset(p, 0, sizeof(UA_OpenToolChangerDataType));
}

static UA_INLINE UA_OpenToolChangerDataType *
UA_OpenToolChangerDataType_new(void) {
    return (UA_OpenToolChangerDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_OpenToolChangerDataType_copy(const UA_OpenToolChangerDataType *src, UA_OpenToolChangerDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenToolChangerDataType_deleteMembers(UA_OpenToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerDataType_clear(UA_OpenToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerDataType_delete(UA_OpenToolChangerDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

/* SetForceUnitsDataType */
static UA_INLINE void
UA_SetForceUnitsDataType_init(UA_SetForceUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetForceUnitsDataType));
}

static UA_INLINE UA_SetForceUnitsDataType *
UA_SetForceUnitsDataType_new(void) {
    return (UA_SetForceUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetForceUnitsDataType_copy(const UA_SetForceUnitsDataType *src, UA_SetForceUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetForceUnitsDataType_deleteMembers(UA_SetForceUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsDataType_clear(UA_SetForceUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsDataType_delete(UA_SetForceUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

/* SetEndeffectorDataType */
static UA_INLINE void
UA_SetEndeffectorDataType_init(UA_SetEndeffectorDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorDataType));
}

static UA_INLINE UA_SetEndeffectorDataType *
UA_SetEndeffectorDataType_new(void) {
    return (UA_SetEndeffectorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorDataType_copy(const UA_SetEndeffectorDataType *src, UA_SetEndeffectorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorDataType_deleteMembers(UA_SetEndeffectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorDataType_clear(UA_SetEndeffectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorDataType_delete(UA_SetEndeffectorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

/* ConfigureJointReportsDataType */
static UA_INLINE void
UA_ConfigureJointReportsDataType_init(UA_ConfigureJointReportsDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureJointReportsDataType));
}

static UA_INLINE UA_ConfigureJointReportsDataType *
UA_ConfigureJointReportsDataType_new(void) {
    return (UA_ConfigureJointReportsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsDataType_copy(const UA_ConfigureJointReportsDataType *src, UA_ConfigureJointReportsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureJointReportsDataType_deleteMembers(UA_ConfigureJointReportsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsDataType_clear(UA_ConfigureJointReportsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsDataType_delete(UA_ConfigureJointReportsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

/* CloseToolChangerDataType */
static UA_INLINE void
UA_CloseToolChangerDataType_init(UA_CloseToolChangerDataType *p) {
    memset(p, 0, sizeof(UA_CloseToolChangerDataType));
}

static UA_INLINE UA_CloseToolChangerDataType *
UA_CloseToolChangerDataType_new(void) {
    return (UA_CloseToolChangerDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CloseToolChangerDataType_copy(const UA_CloseToolChangerDataType *src, UA_CloseToolChangerDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseToolChangerDataType_deleteMembers(UA_CloseToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerDataType_clear(UA_CloseToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerDataType_delete(UA_CloseToolChangerDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

/* SetRotAccelParamsSetDataType */
static UA_INLINE void
UA_SetRotAccelParamsSetDataType_init(UA_SetRotAccelParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetRotAccelParamsSetDataType));
}

static UA_INLINE UA_SetRotAccelParamsSetDataType *
UA_SetRotAccelParamsSetDataType_new(void) {
    return (UA_SetRotAccelParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotAccelParamsSetDataType_copy(const UA_SetRotAccelParamsSetDataType *src, UA_SetRotAccelParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotAccelParamsSetDataType_deleteMembers(UA_SetRotAccelParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelParamsSetDataType_clear(UA_SetRotAccelParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelParamsSetDataType_delete(UA_SetRotAccelParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMSSETDATATYPE]);
}

/* SetEndeffectorParametersParamsSetDataType */
static UA_INLINE void
UA_SetEndeffectorParametersParamsSetDataType_init(UA_SetEndeffectorParametersParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorParametersParamsSetDataType));
}

static UA_INLINE UA_SetEndeffectorParametersParamsSetDataType *
UA_SetEndeffectorParametersParamsSetDataType_new(void) {
    return (UA_SetEndeffectorParametersParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersParamsSetDataType_copy(const UA_SetEndeffectorParametersParamsSetDataType *src, UA_SetEndeffectorParametersParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorParametersParamsSetDataType_deleteMembers(UA_SetEndeffectorParametersParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersParamsSetDataType_clear(UA_SetEndeffectorParametersParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersParamsSetDataType_delete(UA_SetEndeffectorParametersParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMSSETDATATYPE]);
}

/* GetStatusDataType */
static UA_INLINE void
UA_GetStatusDataType_init(UA_GetStatusDataType *p) {
    memset(p, 0, sizeof(UA_GetStatusDataType));
}

static UA_INLINE UA_GetStatusDataType *
UA_GetStatusDataType_new(void) {
    return (UA_GetStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_GetStatusDataType_copy(const UA_GetStatusDataType *src, UA_GetStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_GetStatusDataType_deleteMembers(UA_GetStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

static UA_INLINE void
UA_GetStatusDataType_clear(UA_GetStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

static UA_INLINE void
UA_GetStatusDataType_delete(UA_GetStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

/* SetForceUnitsParamsSetDataType */
static UA_INLINE void
UA_SetForceUnitsParamsSetDataType_init(UA_SetForceUnitsParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetForceUnitsParamsSetDataType));
}

static UA_INLINE UA_SetForceUnitsParamsSetDataType *
UA_SetForceUnitsParamsSetDataType_new(void) {
    return (UA_SetForceUnitsParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetForceUnitsParamsSetDataType_copy(const UA_SetForceUnitsParamsSetDataType *src, UA_SetForceUnitsParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetForceUnitsParamsSetDataType_deleteMembers(UA_SetForceUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsParamsSetDataType_clear(UA_SetForceUnitsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsParamsSetDataType_delete(UA_SetForceUnitsParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMSSETDATATYPE]);
}

/* CRCL_WrenchDataType */
static UA_INLINE void
UA_CRCL_WrenchDataType_init(UA_CRCL_WrenchDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_WrenchDataType));
}

static UA_INLINE UA_CRCL_WrenchDataType *
UA_CRCL_WrenchDataType_new(void) {
    return (UA_CRCL_WrenchDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_WrenchDataType_copy(const UA_CRCL_WrenchDataType *src, UA_CRCL_WrenchDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_WrenchDataType_deleteMembers(UA_CRCL_WrenchDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE void
UA_CRCL_WrenchDataType_clear(UA_CRCL_WrenchDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE void
UA_CRCL_WrenchDataType_delete(UA_CRCL_WrenchDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

/* ConfigureJointReportsParamsSetDataType */
static UA_INLINE void
UA_ConfigureJointReportsParamsSetDataType_init(UA_ConfigureJointReportsParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureJointReportsParamsSetDataType));
}

static UA_INLINE UA_ConfigureJointReportsParamsSetDataType *
UA_ConfigureJointReportsParamsSetDataType_new(void) {
    return (UA_ConfigureJointReportsParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsParamsSetDataType_copy(const UA_ConfigureJointReportsParamsSetDataType *src, UA_ConfigureJointReportsParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureJointReportsParamsSetDataType_deleteMembers(UA_ConfigureJointReportsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsParamsSetDataType_clear(UA_ConfigureJointReportsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsParamsSetDataType_delete(UA_ConfigureJointReportsParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMSSETDATATYPE]);
}

/* CRCL_CommandStatusDataType */
static UA_INLINE void
UA_CRCL_CommandStatusDataType_init(UA_CRCL_CommandStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CommandStatusDataType));
}

static UA_INLINE UA_CRCL_CommandStatusDataType *
UA_CRCL_CommandStatusDataType_new(void) {
    return (UA_CRCL_CommandStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CommandStatusDataType_copy(const UA_CRCL_CommandStatusDataType *src, UA_CRCL_CommandStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CommandStatusDataType_deleteMembers(UA_CRCL_CommandStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStatusDataType_clear(UA_CRCL_CommandStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStatusDataType_delete(UA_CRCL_CommandStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

/* InitCanonDataType */
static UA_INLINE void
UA_InitCanonDataType_init(UA_InitCanonDataType *p) {
    memset(p, 0, sizeof(UA_InitCanonDataType));
}

static UA_INLINE UA_InitCanonDataType *
UA_InitCanonDataType_new(void) {
    return (UA_InitCanonDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_InitCanonDataType_copy(const UA_InitCanonDataType *src, UA_InitCanonDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_InitCanonDataType_deleteMembers(UA_InitCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

static UA_INLINE void
UA_InitCanonDataType_clear(UA_InitCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

static UA_INLINE void
UA_InitCanonDataType_delete(UA_InitCanonDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

/* DisableRobotParameterStatusDataType */
static UA_INLINE void
UA_DisableRobotParameterStatusDataType_init(UA_DisableRobotParameterStatusDataType *p) {
    memset(p, 0, sizeof(UA_DisableRobotParameterStatusDataType));
}

static UA_INLINE UA_DisableRobotParameterStatusDataType *
UA_DisableRobotParameterStatusDataType_new(void) {
    return (UA_DisableRobotParameterStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusDataType_copy(const UA_DisableRobotParameterStatusDataType *src, UA_DisableRobotParameterStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableRobotParameterStatusDataType_deleteMembers(UA_DisableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusDataType_clear(UA_DisableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusDataType_delete(UA_DisableRobotParameterStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

/* CRCL_PoseDataType */
static UA_INLINE void
UA_CRCL_PoseDataType_init(UA_CRCL_PoseDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseDataType));
}

static UA_INLINE UA_CRCL_PoseDataType *
UA_CRCL_PoseDataType_new(void) {
    return (UA_CRCL_PoseDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseDataType_copy(const UA_CRCL_PoseDataType *src, UA_CRCL_PoseDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseDataType_deleteMembers(UA_CRCL_PoseDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseDataType_clear(UA_CRCL_PoseDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseDataType_delete(UA_CRCL_PoseDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

/* CRCL_TransSpeedDataType */
static UA_INLINE void
UA_CRCL_TransSpeedDataType_init(UA_CRCL_TransSpeedDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedDataType));
}

static UA_INLINE UA_CRCL_TransSpeedDataType *
UA_CRCL_TransSpeedDataType_new(void) {
    return (UA_CRCL_TransSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedDataType_copy(const UA_CRCL_TransSpeedDataType *src, UA_CRCL_TransSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedDataType_deleteMembers(UA_CRCL_TransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedDataType_clear(UA_CRCL_TransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedDataType_delete(UA_CRCL_TransSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

/* MoveToDataType */
static UA_INLINE void
UA_MoveToDataType_init(UA_MoveToDataType *p) {
    memset(p, 0, sizeof(UA_MoveToDataType));
}

static UA_INLINE UA_MoveToDataType *
UA_MoveToDataType_new(void) {
    return (UA_MoveToDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveToDataType_copy(const UA_MoveToDataType *src, UA_MoveToDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveToDataType_deleteMembers(UA_MoveToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

static UA_INLINE void
UA_MoveToDataType_clear(UA_MoveToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

static UA_INLINE void
UA_MoveToDataType_delete(UA_MoveToDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

/* CRCL_VacuumGripperStatusDataType */
static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_init(UA_CRCL_VacuumGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_VacuumGripperStatusDataType));
}

static UA_INLINE UA_CRCL_VacuumGripperStatusDataType *
UA_CRCL_VacuumGripperStatusDataType_new(void) {
    return (UA_CRCL_VacuumGripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_VacuumGripperStatusDataType_copy(const UA_CRCL_VacuumGripperStatusDataType *src, UA_CRCL_VacuumGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_deleteMembers(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_clear(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_delete(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

/* CRCL_RotSpeedDataType */
static UA_INLINE void
UA_CRCL_RotSpeedDataType_init(UA_CRCL_RotSpeedDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedDataType));
}

static UA_INLINE UA_CRCL_RotSpeedDataType *
UA_CRCL_RotSpeedDataType_new(void) {
    return (UA_CRCL_RotSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedDataType_copy(const UA_CRCL_RotSpeedDataType *src, UA_CRCL_RotSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedDataType_deleteMembers(UA_CRCL_RotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedDataType_clear(UA_CRCL_RotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedDataType_delete(UA_CRCL_RotSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

/* SetMotionCoordinationDataType */
static UA_INLINE void
UA_SetMotionCoordinationDataType_init(UA_SetMotionCoordinationDataType *p) {
    memset(p, 0, sizeof(UA_SetMotionCoordinationDataType));
}

static UA_INLINE UA_SetMotionCoordinationDataType *
UA_SetMotionCoordinationDataType_new(void) {
    return (UA_SetMotionCoordinationDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationDataType_copy(const UA_SetMotionCoordinationDataType *src, UA_SetMotionCoordinationDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetMotionCoordinationDataType_deleteMembers(UA_SetMotionCoordinationDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationDataType_clear(UA_SetMotionCoordinationDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationDataType_delete(UA_SetMotionCoordinationDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

/* DwellDataType */
static UA_INLINE void
UA_DwellDataType_init(UA_DwellDataType *p) {
    memset(p, 0, sizeof(UA_DwellDataType));
}

static UA_INLINE UA_DwellDataType *
UA_DwellDataType_new(void) {
    return (UA_DwellDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DwellDataType_copy(const UA_DwellDataType *src, UA_DwellDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DwellDataType_deleteMembers(UA_DwellDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

static UA_INLINE void
UA_DwellDataType_clear(UA_DwellDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

static UA_INLINE void
UA_DwellDataType_delete(UA_DwellDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

/* CRCL_CountSensorStatusDataType */
static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_init(UA_CRCL_CountSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CountSensorStatusDataType));
}

static UA_INLINE UA_CRCL_CountSensorStatusDataType *
UA_CRCL_CountSensorStatusDataType_new(void) {
    return (UA_CRCL_CountSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CountSensorStatusDataType_copy(const UA_CRCL_CountSensorStatusDataType *src, UA_CRCL_CountSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_deleteMembers(UA_CRCL_CountSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_clear(UA_CRCL_CountSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_delete(UA_CRCL_CountSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

/* SetRotAccelDataType */
static UA_INLINE void
UA_SetRotAccelDataType_init(UA_SetRotAccelDataType *p) {
    memset(p, 0, sizeof(UA_SetRotAccelDataType));
}

static UA_INLINE UA_SetRotAccelDataType *
UA_SetRotAccelDataType_new(void) {
    return (UA_SetRotAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotAccelDataType_copy(const UA_SetRotAccelDataType *src, UA_SetRotAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotAccelDataType_deleteMembers(UA_SetRotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelDataType_clear(UA_SetRotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelDataType_delete(UA_SetRotAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

/* EnableGripperDataType */
static UA_INLINE void
UA_EnableGripperDataType_init(UA_EnableGripperDataType *p) {
    memset(p, 0, sizeof(UA_EnableGripperDataType));
}

static UA_INLINE UA_EnableGripperDataType *
UA_EnableGripperDataType_new(void) {
    return (UA_EnableGripperDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableGripperDataType_copy(const UA_EnableGripperDataType *src, UA_EnableGripperDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableGripperDataType_deleteMembers(UA_EnableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperDataType_clear(UA_EnableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperDataType_delete(UA_EnableGripperDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

/* MiddleCommandDataType */
static UA_INLINE void
UA_MiddleCommandDataType_init(UA_MiddleCommandDataType *p) {
    memset(p, 0, sizeof(UA_MiddleCommandDataType));
}

static UA_INLINE UA_MiddleCommandDataType *
UA_MiddleCommandDataType_new(void) {
    return (UA_MiddleCommandDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MiddleCommandDataType_copy(const UA_MiddleCommandDataType *src, UA_MiddleCommandDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MiddleCommandDataType_deleteMembers(UA_MiddleCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE void
UA_MiddleCommandDataType_clear(UA_MiddleCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE void
UA_MiddleCommandDataType_delete(UA_MiddleCommandDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

/* SetRotSpeedDataType */
static UA_INLINE void
UA_SetRotSpeedDataType_init(UA_SetRotSpeedDataType *p) {
    memset(p, 0, sizeof(UA_SetRotSpeedDataType));
}

static UA_INLINE UA_SetRotSpeedDataType *
UA_SetRotSpeedDataType_new(void) {
    return (UA_SetRotSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotSpeedDataType_copy(const UA_SetRotSpeedDataType *src, UA_SetRotSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotSpeedDataType_deleteMembers(UA_SetRotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedDataType_clear(UA_SetRotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedDataType_delete(UA_SetRotSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

/* CRCL_SensorStatusesDataType */
static UA_INLINE void
UA_CRCL_SensorStatusesDataType_init(UA_CRCL_SensorStatusesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SensorStatusesDataType));
}

static UA_INLINE UA_CRCL_SensorStatusesDataType *
UA_CRCL_SensorStatusesDataType_new(void) {
    return (UA_CRCL_SensorStatusesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusesDataType_copy(const UA_CRCL_SensorStatusesDataType *src, UA_CRCL_SensorStatusesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SensorStatusesDataType_deleteMembers(UA_CRCL_SensorStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusesDataType_clear(UA_CRCL_SensorStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusesDataType_delete(UA_CRCL_SensorStatusesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

/* DisableSensorDataType */
static UA_INLINE void
UA_DisableSensorDataType_init(UA_DisableSensorDataType *p) {
    memset(p, 0, sizeof(UA_DisableSensorDataType));
}

static UA_INLINE UA_DisableSensorDataType *
UA_DisableSensorDataType_new(void) {
    return (UA_DisableSensorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableSensorDataType_copy(const UA_DisableSensorDataType *src, UA_DisableSensorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableSensorDataType_deleteMembers(UA_DisableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorDataType_clear(UA_DisableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorDataType_delete(UA_DisableSensorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

/* CRCL_JointPositionsTolerancesDataType */
static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_init(UA_CRCL_JointPositionsTolerancesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointPositionsTolerancesDataType));
}

static UA_INLINE UA_CRCL_JointPositionsTolerancesDataType *
UA_CRCL_JointPositionsTolerancesDataType_new(void) {
    return (UA_CRCL_JointPositionsTolerancesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionsTolerancesDataType_copy(const UA_CRCL_JointPositionsTolerancesDataType *src, UA_CRCL_JointPositionsTolerancesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_deleteMembers(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_clear(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_delete(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

/* EnableSensorDataType */
static UA_INLINE void
UA_EnableSensorDataType_init(UA_EnableSensorDataType *p) {
    memset(p, 0, sizeof(UA_EnableSensorDataType));
}

static UA_INLINE UA_EnableSensorDataType *
UA_EnableSensorDataType_new(void) {
    return (UA_EnableSensorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableSensorDataType_copy(const UA_EnableSensorDataType *src, UA_EnableSensorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableSensorDataType_deleteMembers(UA_EnableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorDataType_clear(UA_EnableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorDataType_delete(UA_EnableSensorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

/* SetEndeffectorParametersDataType */
static UA_INLINE void
UA_SetEndeffectorParametersDataType_init(UA_SetEndeffectorParametersDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorParametersDataType));
}

static UA_INLINE UA_SetEndeffectorParametersDataType *
UA_SetEndeffectorParametersDataType_new(void) {
    return (UA_SetEndeffectorParametersDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersDataType_copy(const UA_SetEndeffectorParametersDataType *src, UA_SetEndeffectorParametersDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorParametersDataType_deleteMembers(UA_SetEndeffectorParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersDataType_clear(UA_SetEndeffectorParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersDataType_delete(UA_SetEndeffectorParametersDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

/* EnableRobotParameterStatusDataType */
static UA_INLINE void
UA_EnableRobotParameterStatusDataType_init(UA_EnableRobotParameterStatusDataType *p) {
    memset(p, 0, sizeof(UA_EnableRobotParameterStatusDataType));
}

static UA_INLINE UA_EnableRobotParameterStatusDataType *
UA_EnableRobotParameterStatusDataType_new(void) {
    return (UA_EnableRobotParameterStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusDataType_copy(const UA_EnableRobotParameterStatusDataType *src, UA_EnableRobotParameterStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableRobotParameterStatusDataType_deleteMembers(UA_EnableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusDataType_clear(UA_EnableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusDataType_delete(UA_EnableRobotParameterStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

/* SetTransSpeedParamsSetDataType */
static UA_INLINE void
UA_SetTransSpeedParamsSetDataType_init(UA_SetTransSpeedParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetTransSpeedParamsSetDataType));
}

static UA_INLINE UA_SetTransSpeedParamsSetDataType *
UA_SetTransSpeedParamsSetDataType_new(void) {
    return (UA_SetTransSpeedParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransSpeedParamsSetDataType_copy(const UA_SetTransSpeedParamsSetDataType *src, UA_SetTransSpeedParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransSpeedParamsSetDataType_deleteMembers(UA_SetTransSpeedParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedParamsSetDataType_clear(UA_SetTransSpeedParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedParamsSetDataType_delete(UA_SetTransSpeedParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMSSETDATATYPE]);
}

/* MoveThroughToParamsSetDataType */
static UA_INLINE void
UA_MoveThroughToParamsSetDataType_init(UA_MoveThroughToParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_MoveThroughToParamsSetDataType));
}

static UA_INLINE UA_MoveThroughToParamsSetDataType *
UA_MoveThroughToParamsSetDataType_new(void) {
    return (UA_MoveThroughToParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveThroughToParamsSetDataType_copy(const UA_MoveThroughToParamsSetDataType *src, UA_MoveThroughToParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveThroughToParamsSetDataType_deleteMembers(UA_MoveThroughToParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToParamsSetDataType_clear(UA_MoveThroughToParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToParamsSetDataType_delete(UA_MoveThroughToParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMSSETDATATYPE]);
}

/* EndCanonDataType */
static UA_INLINE void
UA_EndCanonDataType_init(UA_EndCanonDataType *p) {
    memset(p, 0, sizeof(UA_EndCanonDataType));
}

static UA_INLINE UA_EndCanonDataType *
UA_EndCanonDataType_new(void) {
    return (UA_EndCanonDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EndCanonDataType_copy(const UA_EndCanonDataType *src, UA_EndCanonDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndCanonDataType_deleteMembers(UA_EndCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

static UA_INLINE void
UA_EndCanonDataType_clear(UA_EndCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

static UA_INLINE void
UA_EndCanonDataType_delete(UA_EndCanonDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

/* SetEndPoseToleranceDataType */
static UA_INLINE void
UA_SetEndPoseToleranceDataType_init(UA_SetEndPoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_SetEndPoseToleranceDataType));
}

static UA_INLINE UA_SetEndPoseToleranceDataType *
UA_SetEndPoseToleranceDataType_new(void) {
    return (UA_SetEndPoseToleranceDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceDataType_copy(const UA_SetEndPoseToleranceDataType *src, UA_SetEndPoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndPoseToleranceDataType_deleteMembers(UA_SetEndPoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceDataType_clear(UA_SetEndPoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceDataType_delete(UA_SetEndPoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

/* MoveToParamsSetDataType */
static UA_INLINE void
UA_MoveToParamsSetDataType_init(UA_MoveToParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_MoveToParamsSetDataType));
}

static UA_INLINE UA_MoveToParamsSetDataType *
UA_MoveToParamsSetDataType_new(void) {
    return (UA_MoveToParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveToParamsSetDataType_copy(const UA_MoveToParamsSetDataType *src, UA_MoveToParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveToParamsSetDataType_deleteMembers(UA_MoveToParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveToParamsSetDataType_clear(UA_MoveToParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveToParamsSetDataType_delete(UA_MoveToParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMSSETDATATYPE]);
}

/* SetAngleUnitsDataType */
static UA_INLINE void
UA_SetAngleUnitsDataType_init(UA_SetAngleUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetAngleUnitsDataType));
}

static UA_INLINE UA_SetAngleUnitsDataType *
UA_SetAngleUnitsDataType_new(void) {
    return (UA_SetAngleUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetAngleUnitsDataType_copy(const UA_SetAngleUnitsDataType *src, UA_SetAngleUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetAngleUnitsDataType_deleteMembers(UA_SetAngleUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsDataType_clear(UA_SetAngleUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsDataType_delete(UA_SetAngleUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

/* SetTorqueUnitsDataType */
static UA_INLINE void
UA_SetTorqueUnitsDataType_init(UA_SetTorqueUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetTorqueUnitsDataType));
}

static UA_INLINE UA_SetTorqueUnitsDataType *
UA_SetTorqueUnitsDataType_new(void) {
    return (UA_SetTorqueUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsDataType_copy(const UA_SetTorqueUnitsDataType *src, UA_SetTorqueUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTorqueUnitsDataType_deleteMembers(UA_SetTorqueUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsDataType_clear(UA_SetTorqueUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsDataType_delete(UA_SetTorqueUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

/* StopMotionParamsSetDataType */
static UA_INLINE void
UA_StopMotionParamsSetDataType_init(UA_StopMotionParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_StopMotionParamsSetDataType));
}

static UA_INLINE UA_StopMotionParamsSetDataType *
UA_StopMotionParamsSetDataType_new(void) {
    return (UA_StopMotionParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_StopMotionParamsSetDataType_copy(const UA_StopMotionParamsSetDataType *src, UA_StopMotionParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_StopMotionParamsSetDataType_deleteMembers(UA_StopMotionParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_StopMotionParamsSetDataType_clear(UA_StopMotionParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_StopMotionParamsSetDataType_delete(UA_StopMotionParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMSSETDATATYPE]);
}

/* MessageDataType */
static UA_INLINE void
UA_MessageDataType_init(UA_MessageDataType *p) {
    memset(p, 0, sizeof(UA_MessageDataType));
}

static UA_INLINE UA_MessageDataType *
UA_MessageDataType_new(void) {
    return (UA_MessageDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MessageDataType_copy(const UA_MessageDataType *src, UA_MessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MessageDataType_deleteMembers(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_clear(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_delete(UA_MessageDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

/* CRCL_PoseStatusDataType */
static UA_INLINE void
UA_CRCL_PoseStatusDataType_init(UA_CRCL_PoseStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseStatusDataType));
}

static UA_INLINE UA_CRCL_PoseStatusDataType *
UA_CRCL_PoseStatusDataType_new(void) {
    return (UA_CRCL_PoseStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseStatusDataType_copy(const UA_CRCL_PoseStatusDataType *src, UA_CRCL_PoseStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseStatusDataType_deleteMembers(UA_CRCL_PoseStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseStatusDataType_clear(UA_CRCL_PoseStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseStatusDataType_delete(UA_CRCL_PoseStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

/* MoveThroughToDataType */
static UA_INLINE void
UA_MoveThroughToDataType_init(UA_MoveThroughToDataType *p) {
    memset(p, 0, sizeof(UA_MoveThroughToDataType));
}

static UA_INLINE UA_MoveThroughToDataType *
UA_MoveThroughToDataType_new(void) {
    return (UA_MoveThroughToDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveThroughToDataType_copy(const UA_MoveThroughToDataType *src, UA_MoveThroughToDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveThroughToDataType_deleteMembers(UA_MoveThroughToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToDataType_clear(UA_MoveThroughToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToDataType_delete(UA_MoveThroughToDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

/* DisableGripperDataType */
static UA_INLINE void
UA_DisableGripperDataType_init(UA_DisableGripperDataType *p) {
    memset(p, 0, sizeof(UA_DisableGripperDataType));
}

static UA_INLINE UA_DisableGripperDataType *
UA_DisableGripperDataType_new(void) {
    return (UA_DisableGripperDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableGripperDataType_copy(const UA_DisableGripperDataType *src, UA_DisableGripperDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableGripperDataType_deleteMembers(UA_DisableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperDataType_clear(UA_DisableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperDataType_delete(UA_DisableGripperDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

/* SetLengthUnitsDataType */
static UA_INLINE void
UA_SetLengthUnitsDataType_init(UA_SetLengthUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetLengthUnitsDataType));
}

static UA_INLINE UA_SetLengthUnitsDataType *
UA_SetLengthUnitsDataType_new(void) {
    return (UA_SetLengthUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetLengthUnitsDataType_copy(const UA_SetLengthUnitsDataType *src, UA_SetLengthUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetLengthUnitsDataType_deleteMembers(UA_SetLengthUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsDataType_clear(UA_SetLengthUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsDataType_delete(UA_SetLengthUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

/* SetDefaultJointPositionsTolerancesParamsSetDataType */
static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_init(UA_SetDefaultJointPositionsTolerancesParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetDefaultJointPositionsTolerancesParamsSetDataType));
}

static UA_INLINE UA_SetDefaultJointPositionsTolerancesParamsSetDataType *
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_new(void) {
    return (UA_SetDefaultJointPositionsTolerancesParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_copy(const UA_SetDefaultJointPositionsTolerancesParamsSetDataType *src, UA_SetDefaultJointPositionsTolerancesParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_deleteMembers(UA_SetDefaultJointPositionsTolerancesParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_clear(UA_SetDefaultJointPositionsTolerancesParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParamsSetDataType_delete(UA_SetDefaultJointPositionsTolerancesParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMSSETDATATYPE]);
}

/* MoveScrewParamsSetDataType */
static UA_INLINE void
UA_MoveScrewParamsSetDataType_init(UA_MoveScrewParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_MoveScrewParamsSetDataType));
}

static UA_INLINE UA_MoveScrewParamsSetDataType *
UA_MoveScrewParamsSetDataType_new(void) {
    return (UA_MoveScrewParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveScrewParamsSetDataType_copy(const UA_MoveScrewParamsSetDataType *src, UA_MoveScrewParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveScrewParamsSetDataType_deleteMembers(UA_MoveScrewParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewParamsSetDataType_clear(UA_MoveScrewParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewParamsSetDataType_delete(UA_MoveScrewParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMSSETDATATYPE]);
}

/* CRCL_ActuateJointDataType */
static UA_INLINE void
UA_CRCL_ActuateJointDataType_init(UA_CRCL_ActuateJointDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ActuateJointDataType));
}

static UA_INLINE UA_CRCL_ActuateJointDataType *
UA_CRCL_ActuateJointDataType_new(void) {
    return (UA_CRCL_ActuateJointDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ActuateJointDataType_copy(const UA_CRCL_ActuateJointDataType *src, UA_CRCL_ActuateJointDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ActuateJointDataType_deleteMembers(UA_CRCL_ActuateJointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ActuateJointDataType_clear(UA_CRCL_ActuateJointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ActuateJointDataType_delete(UA_CRCL_ActuateJointDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

/* ActuateJointsParamsSetDataType */
static UA_INLINE void
UA_ActuateJointsParamsSetDataType_init(UA_ActuateJointsParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_ActuateJointsParamsSetDataType));
}

static UA_INLINE UA_ActuateJointsParamsSetDataType *
UA_ActuateJointsParamsSetDataType_new(void) {
    return (UA_ActuateJointsParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ActuateJointsParamsSetDataType_copy(const UA_ActuateJointsParamsSetDataType *src, UA_ActuateJointsParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActuateJointsParamsSetDataType_deleteMembers(UA_ActuateJointsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsParamsSetDataType_clear(UA_ActuateJointsParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsParamsSetDataType_delete(UA_ActuateJointsParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMSSETDATATYPE]);
}

/* CRCL_TransAccelDataType */
static UA_INLINE void
UA_CRCL_TransAccelDataType_init(UA_CRCL_TransAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelDataType));
}

static UA_INLINE UA_CRCL_TransAccelDataType *
UA_CRCL_TransAccelDataType_new(void) {
    return (UA_CRCL_TransAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelDataType_copy(const UA_CRCL_TransAccelDataType *src, UA_CRCL_TransAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelDataType_deleteMembers(UA_CRCL_TransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelDataType_clear(UA_CRCL_TransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelDataType_delete(UA_CRCL_TransAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

/* MoveScrewDataType */
static UA_INLINE void
UA_MoveScrewDataType_init(UA_MoveScrewDataType *p) {
    memset(p, 0, sizeof(UA_MoveScrewDataType));
}

static UA_INLINE UA_MoveScrewDataType *
UA_MoveScrewDataType_new(void) {
    return (UA_MoveScrewDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveScrewDataType_copy(const UA_MoveScrewDataType *src, UA_MoveScrewDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveScrewDataType_deleteMembers(UA_MoveScrewDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewDataType_clear(UA_MoveScrewDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewDataType_delete(UA_MoveScrewDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

/* SetDefaultJointPositionsTolerancesDataType */
static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_init(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    memset(p, 0, sizeof(UA_SetDefaultJointPositionsTolerancesDataType));
}

static UA_INLINE UA_SetDefaultJointPositionsTolerancesDataType *
UA_SetDefaultJointPositionsTolerancesDataType_new(void) {
    return (UA_SetDefaultJointPositionsTolerancesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesDataType_copy(const UA_SetDefaultJointPositionsTolerancesDataType *src, UA_SetDefaultJointPositionsTolerancesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_deleteMembers(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_clear(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_delete(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

/* SetRotSpeedParamsSetDataType */
static UA_INLINE void
UA_SetRotSpeedParamsSetDataType_init(UA_SetRotSpeedParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetRotSpeedParamsSetDataType));
}

static UA_INLINE UA_SetRotSpeedParamsSetDataType *
UA_SetRotSpeedParamsSetDataType_new(void) {
    return (UA_SetRotSpeedParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotSpeedParamsSetDataType_copy(const UA_SetRotSpeedParamsSetDataType *src, UA_SetRotSpeedParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotSpeedParamsSetDataType_deleteMembers(UA_SetRotSpeedParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedParamsSetDataType_clear(UA_SetRotSpeedParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedParamsSetDataType_delete(UA_SetRotSpeedParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMSSETDATATYPE]);
}

/* CRCLStatusDataType */
static UA_INLINE void
UA_CRCLStatusDataType_init(UA_CRCLStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCLStatusDataType));
}

static UA_INLINE UA_CRCLStatusDataType *
UA_CRCLStatusDataType_new(void) {
    return (UA_CRCLStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLStatusDataType_copy(const UA_CRCLStatusDataType *src, UA_CRCLStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLStatusDataType_deleteMembers(UA_CRCLStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCLStatusDataType_clear(UA_CRCLStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCLStatusDataType_delete(UA_CRCLStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

/* SetTransSpeedDataType */
static UA_INLINE void
UA_SetTransSpeedDataType_init(UA_SetTransSpeedDataType *p) {
    memset(p, 0, sizeof(UA_SetTransSpeedDataType));
}

static UA_INLINE UA_SetTransSpeedDataType *
UA_SetTransSpeedDataType_new(void) {
    return (UA_SetTransSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransSpeedDataType_copy(const UA_SetTransSpeedDataType *src, UA_SetTransSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransSpeedDataType_deleteMembers(UA_SetTransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedDataType_clear(UA_SetTransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedDataType_delete(UA_SetTransSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

/* ActuateJointsDataType */
static UA_INLINE void
UA_ActuateJointsDataType_init(UA_ActuateJointsDataType *p) {
    memset(p, 0, sizeof(UA_ActuateJointsDataType));
}

static UA_INLINE UA_ActuateJointsDataType *
UA_ActuateJointsDataType_new(void) {
    return (UA_ActuateJointsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ActuateJointsDataType_copy(const UA_ActuateJointsDataType *src, UA_ActuateJointsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActuateJointsDataType_deleteMembers(UA_ActuateJointsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsDataType_clear(UA_ActuateJointsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsDataType_delete(UA_ActuateJointsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

/* CRCL_PoseAndSetDataType */
static UA_INLINE void
UA_CRCL_PoseAndSetDataType_init(UA_CRCL_PoseAndSetDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseAndSetDataType));
}

static UA_INLINE UA_CRCL_PoseAndSetDataType *
UA_CRCL_PoseAndSetDataType_new(void) {
    return (UA_CRCL_PoseAndSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseAndSetDataType_copy(const UA_CRCL_PoseAndSetDataType *src, UA_CRCL_PoseAndSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseAndSetDataType_deleteMembers(UA_CRCL_PoseAndSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseAndSetDataType_clear(UA_CRCL_PoseAndSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseAndSetDataType_delete(UA_CRCL_PoseAndSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

/* SetTransAccelParamsSetDataType */
static UA_INLINE void
UA_SetTransAccelParamsSetDataType_init(UA_SetTransAccelParamsSetDataType *p) {
    memset(p, 0, sizeof(UA_SetTransAccelParamsSetDataType));
}

static UA_INLINE UA_SetTransAccelParamsSetDataType *
UA_SetTransAccelParamsSetDataType_new(void) {
    return (UA_SetTransAccelParamsSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransAccelParamsSetDataType_copy(const UA_SetTransAccelParamsSetDataType *src, UA_SetTransAccelParamsSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransAccelParamsSetDataType_deleteMembers(UA_SetTransAccelParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelParamsSetDataType_clear(UA_SetTransAccelParamsSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelParamsSetDataType_delete(UA_SetTransAccelParamsSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMSSETDATATYPE]);
}

/* SetTransAccelDataType */
static UA_INLINE void
UA_SetTransAccelDataType_init(UA_SetTransAccelDataType *p) {
    memset(p, 0, sizeof(UA_SetTransAccelDataType));
}

static UA_INLINE UA_SetTransAccelDataType *
UA_SetTransAccelDataType_new(void) {
    return (UA_SetTransAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransAccelDataType_copy(const UA_SetTransAccelDataType *src, UA_SetTransAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransAccelDataType_deleteMembers(UA_SetTransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelDataType_clear(UA_SetTransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelDataType_delete(UA_SetTransAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

/* CRCLCommandsParamsSetsUnionDataType */
static UA_INLINE void
UA_CRCLCommandsParamsSetsUnionDataType_init(UA_CRCLCommandsParamsSetsUnionDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandsParamsSetsUnionDataType));
}

static UA_INLINE UA_CRCLCommandsParamsSetsUnionDataType *
UA_CRCLCommandsParamsSetsUnionDataType_new(void) {
    return (UA_CRCLCommandsParamsSetsUnionDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandsParamsSetsUnionDataType_copy(const UA_CRCLCommandsParamsSetsUnionDataType *src, UA_CRCLCommandsParamsSetsUnionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandsParamsSetsUnionDataType_deleteMembers(UA_CRCLCommandsParamsSetsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsParamsSetsUnionDataType_clear(UA_CRCLCommandsParamsSetsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsParamsSetsUnionDataType_delete(UA_CRCLCommandsParamsSetsUnionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSUNIONDATATYPE]);
}

/* CRCLCommandsUnionDataType */
static UA_INLINE void
UA_CRCLCommandsUnionDataType_init(UA_CRCLCommandsUnionDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandsUnionDataType));
}

static UA_INLINE UA_CRCLCommandsUnionDataType *
UA_CRCLCommandsUnionDataType_new(void) {
    return (UA_CRCLCommandsUnionDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandsUnionDataType_copy(const UA_CRCLCommandsUnionDataType *src, UA_CRCLCommandsUnionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandsUnionDataType_deleteMembers(UA_CRCLCommandsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsUnionDataType_clear(UA_CRCLCommandsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsUnionDataType_delete(UA_CRCLCommandsUnionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

/* CRCLCommandsParamsSetsBufferDataType */
static UA_INLINE void
UA_CRCLCommandsParamsSetsBufferDataType_init(UA_CRCLCommandsParamsSetsBufferDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandsParamsSetsBufferDataType));
}

static UA_INLINE UA_CRCLCommandsParamsSetsBufferDataType *
UA_CRCLCommandsParamsSetsBufferDataType_new(void) {
    return (UA_CRCLCommandsParamsSetsBufferDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandsParamsSetsBufferDataType_copy(const UA_CRCLCommandsParamsSetsBufferDataType *src, UA_CRCLCommandsParamsSetsBufferDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandsParamsSetsBufferDataType_deleteMembers(UA_CRCLCommandsParamsSetsBufferDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsParamsSetsBufferDataType_clear(UA_CRCLCommandsParamsSetsBufferDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsParamsSetsBufferDataType_delete(UA_CRCLCommandsParamsSetsBufferDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE]);
}

/* CRCLCommandsBufferDataType */
static UA_INLINE void
UA_CRCLCommandsBufferDataType_init(UA_CRCLCommandsBufferDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandsBufferDataType));
}

static UA_INLINE UA_CRCLCommandsBufferDataType *
UA_CRCLCommandsBufferDataType_new(void) {
    return (UA_CRCLCommandsBufferDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandsBufferDataType_copy(const UA_CRCLCommandsBufferDataType *src, UA_CRCLCommandsBufferDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandsBufferDataType_deleteMembers(UA_CRCLCommandsBufferDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsBufferDataType_clear(UA_CRCLCommandsBufferDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsBufferDataType_delete(UA_CRCLCommandsBufferDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSBUFFERDATATYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_CRCL_GENERATED_HANDLING_H_ */
