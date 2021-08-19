/* Generated from Opc.Ua.Robotics.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py * on host jbg by user jbg at 2021-08-19 10:40:23 */

#ifndef TYPES_ROBOTICS_GENERATED_H_
#define TYPES_ROBOTICS_GENERATED_H_

#ifdef UA_ENABLE_AMALGAMATION
#include "open62541.h"
#else
#include <open62541/types.h>
#include <open62541/types_generated.h>

#endif

_UA_BEGIN_DECLS


/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TYPES_ROBOTICS_COUNT 4
extern UA_EXPORT const UA_DataType UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_COUNT];

/**
 * OperationalModeEnumeration
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_OPERATIONALMODEENUMERATION_OTHER = 0,
    UA_OPERATIONALMODEENUMERATION_MANUAL_REDUCED_SPEED = 1,
    UA_OPERATIONALMODEENUMERATION_MANUAL_HIGH_SPEED = 2,
    UA_OPERATIONALMODEENUMERATION_AUTOMATIC = 3,
    UA_OPERATIONALMODEENUMERATION_AUTOMATIC_EXTERNAL = 4,
    __UA_OPERATIONALMODEENUMERATION_FORCE32BIT = 0x7fffffff
} UA_OperationalModeEnumeration;
UA_STATIC_ASSERT(sizeof(UA_OperationalModeEnumeration) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_ROBOTICS_OPERATIONALMODEENUMERATION 0

/**
 * ExecutionModeEnumeration
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_EXECUTIONMODEENUMERATION_CYCLE = 0,
    UA_EXECUTIONMODEENUMERATION_CONTINUOUS = 1,
    UA_EXECUTIONMODEENUMERATION_STEP = 2,
    __UA_EXECUTIONMODEENUMERATION_FORCE32BIT = 0x7fffffff
} UA_ExecutionModeEnumeration;
UA_STATIC_ASSERT(sizeof(UA_ExecutionModeEnumeration) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_ROBOTICS_EXECUTIONMODEENUMERATION 1

/**
 * AxisMotionProfileEnumeration
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_AXISMOTIONPROFILEENUMERATION_OTHER = 0,
    UA_AXISMOTIONPROFILEENUMERATION_ROTARY = 1,
    UA_AXISMOTIONPROFILEENUMERATION_ROTARY_ENDLESS = 2,
    UA_AXISMOTIONPROFILEENUMERATION_LINEAR = 3,
    UA_AXISMOTIONPROFILEENUMERATION_LINEAR_ENDLESS = 4,
    __UA_AXISMOTIONPROFILEENUMERATION_FORCE32BIT = 0x7fffffff
} UA_AxisMotionProfileEnumeration;
UA_STATIC_ASSERT(sizeof(UA_AxisMotionProfileEnumeration) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_ROBOTICS_AXISMOTIONPROFILEENUMERATION 2

/**
 * MotionDeviceCategoryEnumeration
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_MOTIONDEVICECATEGORYENUMERATION_OTHER = 0,
    UA_MOTIONDEVICECATEGORYENUMERATION_ARTICULATED_ROBOT = 1,
    UA_MOTIONDEVICECATEGORYENUMERATION_SCARA_ROBOT = 2,
    UA_MOTIONDEVICECATEGORYENUMERATION_CARTESIAN_ROBOT = 3,
    UA_MOTIONDEVICECATEGORYENUMERATION_SPHERICAL_ROBOT = 4,
    UA_MOTIONDEVICECATEGORYENUMERATION_PARALLEL_ROBOT = 5,
    UA_MOTIONDEVICECATEGORYENUMERATION_CYLINDRICAL_ROBOT = 6,
    __UA_MOTIONDEVICECATEGORYENUMERATION_FORCE32BIT = 0x7fffffff
} UA_MotionDeviceCategoryEnumeration;
UA_STATIC_ASSERT(sizeof(UA_MotionDeviceCategoryEnumeration) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_ROBOTICS_MOTIONDEVICECATEGORYENUMERATION 3


_UA_END_DECLS

#endif /* TYPES_ROBOTICS_GENERATED_H_ */
