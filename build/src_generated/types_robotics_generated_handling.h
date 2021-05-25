/* Generated from Opc.Ua.Robotics.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-05-25 09:43:23 */

#ifndef TYPES_ROBOTICS_GENERATED_HANDLING_H_
#define TYPES_ROBOTICS_GENERATED_HANDLING_H_

#include "types_robotics_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* OperationalModeEnumeration */
static UA_INLINE void
UA_OperationalModeEnumeration_init(UA_OperationalModeEnumeration *p) {
    memset(p, 0, sizeof(UA_OperationalModeEnumeration));
}

static UA_INLINE UA_OperationalModeEnumeration *
UA_OperationalModeEnumeration_new(void) {
    return (UA_OperationalModeEnumeration*)UA_new(&UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_OperationalModeEnumeration_copy(const UA_OperationalModeEnumeration *src, UA_OperationalModeEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_OperationalModeEnumeration_deleteMembers(UA_OperationalModeEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION]);
}

static UA_INLINE void
UA_OperationalModeEnumeration_clear(UA_OperationalModeEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION]);
}

static UA_INLINE void
UA_OperationalModeEnumeration_delete(UA_OperationalModeEnumeration *p) {
    UA_delete(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION]);
}

/* ExecutionModeEnumeration */
static UA_INLINE void
UA_ExecutionModeEnumeration_init(UA_ExecutionModeEnumeration *p) {
    memset(p, 0, sizeof(UA_ExecutionModeEnumeration));
}

static UA_INLINE UA_ExecutionModeEnumeration *
UA_ExecutionModeEnumeration_new(void) {
    return (UA_ExecutionModeEnumeration*)UA_new(&UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_ExecutionModeEnumeration_copy(const UA_ExecutionModeEnumeration *src, UA_ExecutionModeEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_ExecutionModeEnumeration_deleteMembers(UA_ExecutionModeEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION]);
}

static UA_INLINE void
UA_ExecutionModeEnumeration_clear(UA_ExecutionModeEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION]);
}

static UA_INLINE void
UA_ExecutionModeEnumeration_delete(UA_ExecutionModeEnumeration *p) {
    UA_delete(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION]);
}

/* AxisMotionProfileEnumeration */
static UA_INLINE void
UA_AxisMotionProfileEnumeration_init(UA_AxisMotionProfileEnumeration *p) {
    memset(p, 0, sizeof(UA_AxisMotionProfileEnumeration));
}

static UA_INLINE UA_AxisMotionProfileEnumeration *
UA_AxisMotionProfileEnumeration_new(void) {
    return (UA_AxisMotionProfileEnumeration*)UA_new(&UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_AxisMotionProfileEnumeration_copy(const UA_AxisMotionProfileEnumeration *src, UA_AxisMotionProfileEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_AxisMotionProfileEnumeration_deleteMembers(UA_AxisMotionProfileEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION]);
}

static UA_INLINE void
UA_AxisMotionProfileEnumeration_clear(UA_AxisMotionProfileEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION]);
}

static UA_INLINE void
UA_AxisMotionProfileEnumeration_delete(UA_AxisMotionProfileEnumeration *p) {
    UA_delete(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION]);
}

/* MotionDeviceCategoryEnumeration */
static UA_INLINE void
UA_MotionDeviceCategoryEnumeration_init(UA_MotionDeviceCategoryEnumeration *p) {
    memset(p, 0, sizeof(UA_MotionDeviceCategoryEnumeration));
}

static UA_INLINE UA_MotionDeviceCategoryEnumeration *
UA_MotionDeviceCategoryEnumeration_new(void) {
    return (UA_MotionDeviceCategoryEnumeration*)UA_new(&UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_MotionDeviceCategoryEnumeration_copy(const UA_MotionDeviceCategoryEnumeration *src, UA_MotionDeviceCategoryEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_MotionDeviceCategoryEnumeration_deleteMembers(UA_MotionDeviceCategoryEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION]);
}

static UA_INLINE void
UA_MotionDeviceCategoryEnumeration_clear(UA_MotionDeviceCategoryEnumeration *p) {
    UA_clear(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION]);
}

static UA_INLINE void
UA_MotionDeviceCategoryEnumeration_delete(UA_MotionDeviceCategoryEnumeration *p) {
    UA_delete(p, &UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_ROBOTICS_GENERATED_HANDLING_H_ */
