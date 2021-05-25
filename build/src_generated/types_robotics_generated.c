/* Generated from Opc.Ua.Robotics.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-05-25 09:43:23 */

#include "types_robotics_generated.h"

/* OperationalModeEnumeration */
#define OperationalModeEnumeration_members NULL

/* ExecutionModeEnumeration */
#define ExecutionModeEnumeration_members NULL

/* AxisMotionProfileEnumeration */
#define AxisMotionProfileEnumeration_members NULL

/* MotionDeviceCategoryEnumeration */
#define MotionDeviceCategoryEnumeration_members NULL
const UA_DataType UA_TYPES_ROBOTICS[UA_TYPES_ROBOTICS_COUNT] = {
/* OperationalModeEnumeration */
{
    {4, UA_NODEIDTYPE_NUMERIC, {3006LU}}, /* .typeId */
    {4, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_OperationalModeEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    OperationalModeEnumeration_members  /* .members */
    UA_TYPENAME("OperationalModeEnumeration") /* .typeName */
},
/* ExecutionModeEnumeration */
{
    {4, UA_NODEIDTYPE_NUMERIC, {18191LU}}, /* .typeId */
    {4, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ExecutionModeEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ExecutionModeEnumeration_members  /* .members */
    UA_TYPENAME("ExecutionModeEnumeration") /* .typeName */
},
/* AxisMotionProfileEnumeration */
{
    {4, UA_NODEIDTYPE_NUMERIC, {3008LU}}, /* .typeId */
    {4, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_AxisMotionProfileEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    AxisMotionProfileEnumeration_members  /* .members */
    UA_TYPENAME("AxisMotionProfileEnumeration") /* .typeName */
},
/* MotionDeviceCategoryEnumeration */
{
    {4, UA_NODEIDTYPE_NUMERIC, {18193LU}}, /* .typeId */
    {4, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_MotionDeviceCategoryEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    MotionDeviceCategoryEnumeration_members  /* .members */
    UA_TYPENAME("MotionDeviceCategoryEnumeration") /* .typeName */
},
};

