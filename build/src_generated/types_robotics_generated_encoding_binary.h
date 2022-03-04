/* Generated from Opc.Ua.Robotics.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2022-03-04 02:15:52 */

#ifndef TYPES_ROBOTICS_GENERATED_ENCODING_BINARY_H_
#define TYPES_ROBOTICS_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_robotics_generated.h"
#endif



/* OperationalModeEnumeration */
static UA_INLINE size_t
UA_OperationalModeEnumeration_calcSizeBinary(const UA_OperationalModeEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_OperationalModeEnumeration_encodeBinary(const UA_OperationalModeEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OperationalModeEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OperationalModeEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION], NULL);
}

/* ExecutionModeEnumeration */
static UA_INLINE size_t
UA_ExecutionModeEnumeration_calcSizeBinary(const UA_ExecutionModeEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_ExecutionModeEnumeration_encodeBinary(const UA_ExecutionModeEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ExecutionModeEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ExecutionModeEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION], NULL);
}

/* AxisMotionProfileEnumeration */
static UA_INLINE size_t
UA_AxisMotionProfileEnumeration_calcSizeBinary(const UA_AxisMotionProfileEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_AxisMotionProfileEnumeration_encodeBinary(const UA_AxisMotionProfileEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AxisMotionProfileEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AxisMotionProfileEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION], NULL);
}

/* MotionDeviceCategoryEnumeration */
static UA_INLINE size_t
UA_MotionDeviceCategoryEnumeration_calcSizeBinary(const UA_MotionDeviceCategoryEnumeration *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION]);
}
static UA_INLINE UA_StatusCode
UA_MotionDeviceCategoryEnumeration_encodeBinary(const UA_MotionDeviceCategoryEnumeration *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MotionDeviceCategoryEnumeration_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MotionDeviceCategoryEnumeration *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION], NULL);
}

#endif /* TYPES_ROBOTICS_GENERATED_ENCODING_BINARY_H_ */
