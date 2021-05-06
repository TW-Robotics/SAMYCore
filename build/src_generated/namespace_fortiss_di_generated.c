/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_fortiss_di_generated.h"


/* SkillTransitionEventType - ns=3;i=15844 */

static UA_StatusCode function_namespace_fortiss_di_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SkillTransitionEventType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An event caused by the skill state transition.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15844LU),
UA_NODEID_NUMERIC(ns[0], 2378LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "SkillTransitionEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15844LU)
);
}

/* https://fortiss.org/UA/DI/ - ns=3;i=15473 */

static UA_StatusCode function_namespace_fortiss_di_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://fortiss.org/UA/DI/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "https://fortiss.org/UA/DI/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15473LU)
);
}

/* DefaultAccessRestrictions - ns=3;i=15908 */

static UA_StatusCode function_namespace_fortiss_di_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 95LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultAccessRestrictions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15908LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultAccessRestrictions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15908LU)
);
}

/* DefaultUserRolePermissions - ns=3;i=15907 */

static UA_StatusCode function_namespace_fortiss_di_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultUserRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15907LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultUserRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15907LU)
);
}

/* DefaultRolePermissions - ns=3;i=15906 */

static UA_StatusCode function_namespace_fortiss_di_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15906LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15906LU)
);
}

/* StaticNodeIdTypes - ns=3;i=15881 */

static UA_StatusCode function_namespace_fortiss_di_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256LU);
UA_Int32 variablenode_ns_3_i_15881_variant_DataContents[1];
variablenode_ns_3_i_15881_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_15881_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15881LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15881LU)
);
}

/* StaticNumericNodeIdRange - ns=3;i=15882 */

static UA_StatusCode function_namespace_fortiss_di_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291LU);
UA_String variablenode_ns_3_i_15882_variant_DataContents[1];
variablenode_ns_3_i_15882_variant_DataContents[0] = UA_STRING("1:65535");
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_15882_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15882LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15882LU)
);
}

/* StaticStringNodeIdPattern - ns=3;i=15883 */

static UA_StatusCode function_namespace_fortiss_di_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_15883_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_15883_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_15883_variant_DataContents);
*variablenode_ns_3_i_15883_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15883_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15883LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_15883_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15883LU)
);
}

/* NamespaceVersion - ns=3;i=15738 */

static UA_StatusCode function_namespace_fortiss_di_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_15738_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_15738_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_15738_variant_DataContents);
*variablenode_ns_3_i_15738_variant_DataContents = UA_STRING_ALLOC("1.00");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15738_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15738LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_15738_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15738LU)
);
}

/* NamespaceUri - ns=3;i=15702 */

static UA_StatusCode function_namespace_fortiss_di_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_15702_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_15702_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_15702_variant_DataContents);
*variablenode_ns_3_i_15702_variant_DataContents = UA_STRING_ALLOC("https://fortiss.org/UA/DI/");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15702_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15702LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_15702_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15702LU)
);
}

/* NamespacePublicationDate - ns=3;i=15772 */

static UA_StatusCode function_namespace_fortiss_di_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_3_i_15772_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_3_i_15772_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_3_i_15772_variant_DataContents);
*variablenode_ns_3_i_15772_variant_DataContents = ( (UA_DateTime)(1546300800000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15772_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15772LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_3_i_15772_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15772LU)
);
}

/* IsNamespaceSubset - ns=3;i=15812 */

static UA_StatusCode function_namespace_fortiss_di_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_3_i_15812_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_3_i_15812_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_3_i_15812_variant_DataContents);
*variablenode_ns_3_i_15812_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15812_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15812LU),
UA_NODEID_NUMERIC(ns[3], 15473LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_3_i_15812_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15812LU)
);
}

/* GripperDeviceControllerType - ns=3;i=15463 */

static UA_StatusCode function_namespace_fortiss_di_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GripperDeviceControllerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The GripperDeviceControllerType represents a controller for a gripper device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15463LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "GripperDeviceControllerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15463LU)
);
}

/* Skills - ns=3;i=15499 */

static UA_StatusCode function_namespace_fortiss_di_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Skills");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the skills of the gripper controller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15499LU),
UA_NODEID_NUMERIC(ns[3], 15463LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Skills"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15499LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15499LU)
);
}

/* SensorType - ns=3;i=15692 */

static UA_StatusCode function_namespace_fortiss_di_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SensorType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A generic object type for any sensor. A sensor only provides data, but can not be controlled.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15692LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "SensorType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15692LU)
);
}

/* ForceTorqueSensorType - ns=3;i=15728 */

static UA_StatusCode function_namespace_fortiss_di_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ForceTorqueSensorType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ForceTorqueSensorType represents a controller type for a sensor");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15728LU),
UA_NODEID_NUMERIC(ns[3], 15692LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ForceTorqueSensorType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15728LU)
);
}

/* ForceSensor - ns=3;i=15764 */

static UA_StatusCode function_namespace_fortiss_di_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ForceSensor");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Offers information about force experienced by the robot");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15764LU),
UA_NODEID_NUMERIC(ns[3], 15728LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ForceSensor"),
UA_NODEID_NUMERIC(ns[3], 15692LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15764LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15764LU)
);
}

/* Force - ns=3;i=15798 */

static UA_StatusCode function_namespace_fortiss_di_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Force");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The current forces in X Y and Z in N");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15798LU),
UA_NODEID_NUMERIC(ns[3], 15764LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Force"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15798LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15798LU)
);
}

/* EURange - ns=3;i=15802 */

static UA_StatusCode function_namespace_fortiss_di_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15802LU),
UA_NODEID_NUMERIC(ns[3], 15798LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15802LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15802LU)
);
}

/* TorqueSensor - ns=3;i=15804 */

static UA_StatusCode function_namespace_fortiss_di_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TorqueSensor");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Offers information about torque experienced by the sensor");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15804LU),
UA_NODEID_NUMERIC(ns[3], 15728LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "TorqueSensor"),
UA_NODEID_NUMERIC(ns[3], 15692LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15804LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15804LU)
);
}

/* Torque - ns=3;i=15838 */

static UA_StatusCode function_namespace_fortiss_di_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Torque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The torque in X Y and Z in Nm");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15838LU),
UA_NODEID_NUMERIC(ns[3], 15804LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Torque"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15838LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15838LU)
);
}

/* EURange - ns=3;i=15842 */

static UA_StatusCode function_namespace_fortiss_di_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15842LU),
UA_NODEID_NUMERIC(ns[3], 15838LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15842LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15842LU)
);
}

/* SkillType - ns=3;i=15034 */

static UA_StatusCode function_namespace_fortiss_di_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A skill type");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 2391LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "SkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15034LU)
);
}

/* Start - ns=3;i=15095 */

static UA_StatusCode function_namespace_fortiss_di_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15095LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15095LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15095LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Resume - ns=3;i=15097 */

static UA_StatusCode function_namespace_fortiss_di_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15097LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15097LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15097LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspend - ns=3;i=15096 */

static UA_StatusCode function_namespace_fortiss_di_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15096LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15096LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15096LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SuspendedToReady - ns=3;i=15091 */

static UA_StatusCode function_namespace_fortiss_di_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15091LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15091LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15091LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15091LU)
);
}

/* TransitionNumber - ns=3;i=15092 */

static UA_StatusCode function_namespace_fortiss_di_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15092_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15092_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15092_variant_DataContents);
*variablenode_ns_3_i_15092_variant_DataContents = (UA_UInt32) 8;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15092_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15092LU),
UA_NODEID_NUMERIC(ns[3], 15091LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15092_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15092LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15092LU)
);
}

/* ReadyToRunning - ns=3;i=15079 */

static UA_StatusCode function_namespace_fortiss_di_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15079LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15079LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15079LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15095LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15079LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15079LU)
);
}

/* TransitionNumber - ns=3;i=15080 */

static UA_StatusCode function_namespace_fortiss_di_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15080_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15080_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15080_variant_DataContents);
*variablenode_ns_3_i_15080_variant_DataContents = (UA_UInt32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15080_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15080LU),
UA_NODEID_NUMERIC(ns[3], 15079LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15080_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15080LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15080LU)
);
}

/* HaltedToReady - ns=3;i=15077 */

static UA_StatusCode function_namespace_fortiss_di_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15077LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15077LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15077LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15077LU)
);
}

/* TransitionNumber - ns=3;i=15078 */

static UA_StatusCode function_namespace_fortiss_di_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15078_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15078_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15078_variant_DataContents);
*variablenode_ns_3_i_15078_variant_DataContents = (UA_UInt32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15078_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15078LU),
UA_NODEID_NUMERIC(ns[3], 15077LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15078_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15078LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15078LU)
);
}

/* GraspGripperSkill - ns=3;i=15628 */

static UA_StatusCode function_namespace_fortiss_di_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GraspGripperSkill");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[3], 15499LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "GraspGripperSkill"),
UA_NODEID_NUMERIC(ns[3], 15034LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15628LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15628LU)
);
}

/* Suspend - ns=3;i=15690 */

static UA_StatusCode function_namespace_fortiss_di_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15690LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15690LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15690LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Start - ns=3;i=15691 */

static UA_StatusCode function_namespace_fortiss_di_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15691LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15691LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15691LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CurrentState - ns=3;i=15629 */

static UA_StatusCode function_namespace_fortiss_di_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15629LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15629LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15629LU)
);
}

/* Id - ns=3;i=15630 */

static UA_StatusCode function_namespace_fortiss_di_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15630LU),
UA_NODEID_NUMERIC(ns[3], 15629LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15630LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15630LU)
);
}

/* Number - ns=3;i=15632 */

static UA_StatusCode function_namespace_fortiss_di_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15632LU),
UA_NODEID_NUMERIC(ns[3], 15629LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15632LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15632LU)
);
}

/* LastTransition - ns=3;i=15634 */

static UA_StatusCode function_namespace_fortiss_di_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastTransition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15634LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15634LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15634LU)
);
}

/* TransitionTime - ns=3;i=15638 */

static UA_StatusCode function_namespace_fortiss_di_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15638LU),
UA_NODEID_NUMERIC(ns[3], 15634LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15638LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15638LU)
);
}

/* Number - ns=3;i=15637 */

static UA_StatusCode function_namespace_fortiss_di_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15637LU),
UA_NODEID_NUMERIC(ns[3], 15634LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15637LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15637LU)
);
}

/* Id - ns=3;i=15635 */

static UA_StatusCode function_namespace_fortiss_di_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15635LU),
UA_NODEID_NUMERIC(ns[3], 15634LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15635LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15635LU)
);
}

/* Suspended - ns=3;i=15679 */

static UA_StatusCode function_namespace_fortiss_di_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15679LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15679LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15679LU)
);
}

/* StateNumber - ns=3;i=15680 */

static UA_StatusCode function_namespace_fortiss_di_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15680LU),
UA_NODEID_NUMERIC(ns[3], 15679LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15680LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15680LU)
);
}

/* Running - ns=3;i=15671 */

static UA_StatusCode function_namespace_fortiss_di_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15671LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15671LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15671LU)
);
}

/* StateNumber - ns=3;i=15672 */

static UA_StatusCode function_namespace_fortiss_di_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15672LU),
UA_NODEID_NUMERIC(ns[3], 15671LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15672LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15672LU)
);
}

/* RunningToHalted - ns=3;i=15673 */

static UA_StatusCode function_namespace_fortiss_di_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15673LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15673LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15673LU)
);
}

/* TransitionNumber - ns=3;i=15674 */

static UA_StatusCode function_namespace_fortiss_di_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15674LU),
UA_NODEID_NUMERIC(ns[3], 15673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15674LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15674LU)
);
}

/* RunningToReady - ns=3;i=15675 */

static UA_StatusCode function_namespace_fortiss_di_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15675LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15675LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15675LU)
);
}

/* TransitionNumber - ns=3;i=15676 */

static UA_StatusCode function_namespace_fortiss_di_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15676LU),
UA_NODEID_NUMERIC(ns[3], 15675LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15676LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15676LU)
);
}

/* RunningToSuspended - ns=3;i=15677 */

static UA_StatusCode function_namespace_fortiss_di_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15677LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15677LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15677LU)
);
}

/* TransitionNumber - ns=3;i=15678 */

static UA_StatusCode function_namespace_fortiss_di_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15678LU),
UA_NODEID_NUMERIC(ns[3], 15677LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15678LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15678LU)
);
}

/* RecycleCount - ns=3;i=15644 */

static UA_StatusCode function_namespace_fortiss_di_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RecycleCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15644LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15644LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15644LU)
);
}

/* Deletable - ns=3;i=15642 */

static UA_StatusCode function_namespace_fortiss_di_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Deletable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15642LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15642LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15642LU)
);
}

/* AutoDelete - ns=3;i=15643 */

static UA_StatusCode function_namespace_fortiss_di_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AutoDelete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15643LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15643LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15643LU)
);
}

/* MaxInstanceCount - ns=3;i=15660 */

static UA_StatusCode function_namespace_fortiss_di_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxInstanceCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15660LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15660LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15660LU)
);
}

/* SuspendedToHalted - ns=3;i=15681 */

static UA_StatusCode function_namespace_fortiss_di_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15681LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15681LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15681LU)
);
}

/* TransitionNumber - ns=3;i=15682 */

static UA_StatusCode function_namespace_fortiss_di_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15682LU),
UA_NODEID_NUMERIC(ns[3], 15681LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15682LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15682LU)
);
}

/* ReadyToRunning - ns=3;i=15669 */

static UA_StatusCode function_namespace_fortiss_di_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15669LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15669LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15669LU)
);
}

/* TransitionNumber - ns=3;i=15670 */

static UA_StatusCode function_namespace_fortiss_di_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15670LU),
UA_NODEID_NUMERIC(ns[3], 15669LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15670LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15670LU)
);
}

/* HaltedToReady - ns=3;i=15663 */

static UA_StatusCode function_namespace_fortiss_di_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15663LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15663LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15663LU)
);
}

/* TransitionNumber - ns=3;i=15664 */

static UA_StatusCode function_namespace_fortiss_di_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15664LU),
UA_NODEID_NUMERIC(ns[3], 15663LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15664LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15664LU)
);
}

/* Halted - ns=3;i=15661 */

static UA_StatusCode function_namespace_fortiss_di_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15661LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15661LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15661LU)
);
}

/* StateNumber - ns=3;i=15662 */

static UA_StatusCode function_namespace_fortiss_di_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15662LU),
UA_NODEID_NUMERIC(ns[3], 15661LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15662LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15662LU)
);
}

/* ReadyToHalted - ns=3;i=15667 */

static UA_StatusCode function_namespace_fortiss_di_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15667LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15667LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15667LU)
);
}

/* TransitionNumber - ns=3;i=15668 */

static UA_StatusCode function_namespace_fortiss_di_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15668LU),
UA_NODEID_NUMERIC(ns[3], 15667LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15668LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15668LU)
);
}

/* Ready - ns=3;i=15665 */

static UA_StatusCode function_namespace_fortiss_di_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15665LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15665LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15665LU)
);
}

/* StateNumber - ns=3;i=15666 */

static UA_StatusCode function_namespace_fortiss_di_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15666LU),
UA_NODEID_NUMERIC(ns[3], 15665LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15666LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15666LU)
);
}

/* Resume - ns=3;i=15689 */

static UA_StatusCode function_namespace_fortiss_di_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15689LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15689LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15689LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Reset - ns=3;i=15688 */

static UA_StatusCode function_namespace_fortiss_di_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15688LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15688LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15688LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Halt - ns=3;i=15687 */

static UA_StatusCode function_namespace_fortiss_di_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15687LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15687LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15687LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SuspendedToReady - ns=3;i=15683 */

static UA_StatusCode function_namespace_fortiss_di_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15683LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15683LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15683LU)
);
}

/* TransitionNumber - ns=3;i=15684 */

static UA_StatusCode function_namespace_fortiss_di_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15684LU),
UA_NODEID_NUMERIC(ns[3], 15683LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15684LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15684LU)
);
}

/* SuspendedToRunning - ns=3;i=15685 */

static UA_StatusCode function_namespace_fortiss_di_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15685LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15685LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15685LU)
);
}

/* TransitionNumber - ns=3;i=15686 */

static UA_StatusCode function_namespace_fortiss_di_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15686LU),
UA_NODEID_NUMERIC(ns[3], 15685LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15686LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15686LU)
);
}

/* Name - ns=3;i=15659 */

static UA_StatusCode function_namespace_fortiss_di_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the skill");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15659LU),
UA_NODEID_NUMERIC(ns[3], 15628LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15659LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15659LU)
);
}

/* Suspended - ns=3;i=15075 */

static UA_StatusCode function_namespace_fortiss_di_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15075LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15075LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15075LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15091LU), false);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15075LU)
);
}

/* StateNumber - ns=3;i=15076 */

static UA_StatusCode function_namespace_fortiss_di_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15076_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15076_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15076_variant_DataContents);
*variablenode_ns_3_i_15076_variant_DataContents = (UA_UInt32) 14;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15076_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15076LU),
UA_NODEID_NUMERIC(ns[3], 15075LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15076_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15076LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15076LU)
);
}

/* Running - ns=3;i=15073 */

static UA_StatusCode function_namespace_fortiss_di_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15073LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15073LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15073LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15079LU), false);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15073LU)
);
}

/* StateNumber - ns=3;i=15074 */

static UA_StatusCode function_namespace_fortiss_di_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15074_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15074_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15074_variant_DataContents);
*variablenode_ns_3_i_15074_variant_DataContents = (UA_UInt32) 13;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15074_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15074LU),
UA_NODEID_NUMERIC(ns[3], 15073LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15074_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15074LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15074LU)
);
}

/* Halt - ns=3;i=15098 */

static UA_StatusCode function_namespace_fortiss_di_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15098LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15098LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15098LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Ready - ns=3;i=15071 */

static UA_StatusCode function_namespace_fortiss_di_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15071LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15071LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15091LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15071LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15077LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15071LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15071LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15079LU), false);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15071LU)
);
}

/* StateNumber - ns=3;i=15072 */

static UA_StatusCode function_namespace_fortiss_di_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15072_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15072_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15072_variant_DataContents);
*variablenode_ns_3_i_15072_variant_DataContents = (UA_UInt32) 12;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15072_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15072LU),
UA_NODEID_NUMERIC(ns[3], 15071LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15072_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15072LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15072LU)
);
}

/* MoveGripperSkill - ns=3;i=15500 */

static UA_StatusCode function_namespace_fortiss_di_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MoveGripperSkill");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[3], 15499LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MoveGripperSkill"),
UA_NODEID_NUMERIC(ns[3], 15034LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15500LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15500LU)
);
}

/* AutoDelete - ns=3;i=15515 */

static UA_StatusCode function_namespace_fortiss_di_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AutoDelete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15515LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15515LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15515LU)
);
}

/* Deletable - ns=3;i=15514 */

static UA_StatusCode function_namespace_fortiss_di_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Deletable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15514LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15514LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15514LU)
);
}

/* MaxInstanceCount - ns=3;i=15532 */

static UA_StatusCode function_namespace_fortiss_di_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxInstanceCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15532LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15532LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15532LU)
);
}

/* Name - ns=3;i=15531 */

static UA_StatusCode function_namespace_fortiss_di_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the skill");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15531LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15531LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15531LU)
);
}

/* RecycleCount - ns=3;i=15516 */

static UA_StatusCode function_namespace_fortiss_di_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RecycleCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15516LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15516LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15516LU)
);
}

/* RunningToSuspended - ns=3;i=15549 */

static UA_StatusCode function_namespace_fortiss_di_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15549LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15549LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15549LU)
);
}

/* TransitionNumber - ns=3;i=15550 */

static UA_StatusCode function_namespace_fortiss_di_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15550LU),
UA_NODEID_NUMERIC(ns[3], 15549LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15550LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15550LU)
);
}

/* Halt - ns=3;i=15559 */

static UA_StatusCode function_namespace_fortiss_di_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15559LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15559LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15559LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ReadyToHalted - ns=3;i=15539 */

static UA_StatusCode function_namespace_fortiss_di_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15539LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15539LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15539LU)
);
}

/* TransitionNumber - ns=3;i=15540 */

static UA_StatusCode function_namespace_fortiss_di_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15540LU),
UA_NODEID_NUMERIC(ns[3], 15539LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15540LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15540LU)
);
}

/* Suspended - ns=3;i=15551 */

static UA_StatusCode function_namespace_fortiss_di_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15551LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15551LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15551LU)
);
}

/* StateNumber - ns=3;i=15552 */

static UA_StatusCode function_namespace_fortiss_di_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15552LU),
UA_NODEID_NUMERIC(ns[3], 15551LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15552LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15552LU)
);
}

/* SuspendedToHalted - ns=3;i=15553 */

static UA_StatusCode function_namespace_fortiss_di_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15553LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15553LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15553LU)
);
}

/* TransitionNumber - ns=3;i=15554 */

static UA_StatusCode function_namespace_fortiss_di_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15554LU),
UA_NODEID_NUMERIC(ns[3], 15553LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15554LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15554LU)
);
}

/* SuspendedToReady - ns=3;i=15555 */

static UA_StatusCode function_namespace_fortiss_di_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15555LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15555LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15555LU)
);
}

/* TransitionNumber - ns=3;i=15556 */

static UA_StatusCode function_namespace_fortiss_di_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15556LU),
UA_NODEID_NUMERIC(ns[3], 15555LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15556LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15556LU)
);
}

/* SuspendedToRunning - ns=3;i=15557 */

static UA_StatusCode function_namespace_fortiss_di_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15557LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15557LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15557LU)
);
}

/* TransitionNumber - ns=3;i=15558 */

static UA_StatusCode function_namespace_fortiss_di_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15558LU),
UA_NODEID_NUMERIC(ns[3], 15557LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15558LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15558LU)
);
}

/* Resume - ns=3;i=15561 */

static UA_StatusCode function_namespace_fortiss_di_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15561LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15561LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15561LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Reset - ns=3;i=15560 */

static UA_StatusCode function_namespace_fortiss_di_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15560LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15560LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15560LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Start - ns=3;i=15563 */

static UA_StatusCode function_namespace_fortiss_di_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15563LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15563LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15563LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspend - ns=3;i=15562 */

static UA_StatusCode function_namespace_fortiss_di_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15562LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15562LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15562LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Running - ns=3;i=15543 */

static UA_StatusCode function_namespace_fortiss_di_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15543LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15543LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15543LU)
);
}

/* StateNumber - ns=3;i=15544 */

static UA_StatusCode function_namespace_fortiss_di_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15544LU),
UA_NODEID_NUMERIC(ns[3], 15543LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15544LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15544LU)
);
}

/* Ready - ns=3;i=15537 */

static UA_StatusCode function_namespace_fortiss_di_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15537LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15537LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15537LU)
);
}

/* StateNumber - ns=3;i=15538 */

static UA_StatusCode function_namespace_fortiss_di_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15538LU),
UA_NODEID_NUMERIC(ns[3], 15537LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15538LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15538LU)
);
}

/* HaltedToReady - ns=3;i=15535 */

static UA_StatusCode function_namespace_fortiss_di_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15535LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15535LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15535LU)
);
}

/* TransitionNumber - ns=3;i=15536 */

static UA_StatusCode function_namespace_fortiss_di_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15536LU),
UA_NODEID_NUMERIC(ns[3], 15535LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15536LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15536LU)
);
}

/* LastTransition - ns=3;i=15506 */

static UA_StatusCode function_namespace_fortiss_di_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastTransition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15506LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15506LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15506LU)
);
}

/* Number - ns=3;i=15509 */

static UA_StatusCode function_namespace_fortiss_di_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15509LU),
UA_NODEID_NUMERIC(ns[3], 15506LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15509LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15509LU)
);
}

/* TransitionTime - ns=3;i=15510 */

static UA_StatusCode function_namespace_fortiss_di_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15510LU),
UA_NODEID_NUMERIC(ns[3], 15506LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15510LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15510LU)
);
}

/* Id - ns=3;i=15507 */

static UA_StatusCode function_namespace_fortiss_di_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15507LU),
UA_NODEID_NUMERIC(ns[3], 15506LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15507LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15507LU)
);
}

/* Halted - ns=3;i=15533 */

static UA_StatusCode function_namespace_fortiss_di_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15533LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15533LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15533LU)
);
}

/* StateNumber - ns=3;i=15534 */

static UA_StatusCode function_namespace_fortiss_di_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15534LU),
UA_NODEID_NUMERIC(ns[3], 15533LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15534LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15534LU)
);
}

/* CurrentState - ns=3;i=15501 */

static UA_StatusCode function_namespace_fortiss_di_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15501LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15501LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15501LU)
);
}

/* Number - ns=3;i=15504 */

static UA_StatusCode function_namespace_fortiss_di_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15504LU),
UA_NODEID_NUMERIC(ns[3], 15501LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15504LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15504LU)
);
}

/* Id - ns=3;i=15502 */

static UA_StatusCode function_namespace_fortiss_di_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15502LU),
UA_NODEID_NUMERIC(ns[3], 15501LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15502LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15502LU)
);
}

/* RunningToHalted - ns=3;i=15545 */

static UA_StatusCode function_namespace_fortiss_di_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15545LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15545LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15545LU)
);
}

/* TransitionNumber - ns=3;i=15546 */

static UA_StatusCode function_namespace_fortiss_di_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15546LU),
UA_NODEID_NUMERIC(ns[3], 15545LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15546LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15546LU)
);
}

/* ReadyToRunning - ns=3;i=15541 */

static UA_StatusCode function_namespace_fortiss_di_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15541LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15541LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15541LU)
);
}

/* TransitionNumber - ns=3;i=15542 */

static UA_StatusCode function_namespace_fortiss_di_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15542LU),
UA_NODEID_NUMERIC(ns[3], 15541LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15542LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15542LU)
);
}

/* RunningToReady - ns=3;i=15547 */

static UA_StatusCode function_namespace_fortiss_di_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15547LU),
UA_NODEID_NUMERIC(ns[3], 15500LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15547LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15547LU)
);
}

/* TransitionNumber - ns=3;i=15548 */

static UA_StatusCode function_namespace_fortiss_di_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15548LU),
UA_NODEID_NUMERIC(ns[3], 15547LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15548LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15548LU)
);
}

/* Halted - ns=3;i=15069 */

static UA_StatusCode function_namespace_fortiss_di_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15069LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15069LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15069LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15077LU), false);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15069LU)
);
}

/* StateNumber - ns=3;i=15070 */

static UA_StatusCode function_namespace_fortiss_di_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15070_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15070_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15070_variant_DataContents);
*variablenode_ns_3_i_15070_variant_DataContents = (UA_UInt32) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15070_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15070LU),
UA_NODEID_NUMERIC(ns[3], 15069LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15070_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15070LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15070LU)
);
}

/* ReadyToHalted - ns=3;i=15093 */

static UA_StatusCode function_namespace_fortiss_di_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15093LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15093LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15098LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15093LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15071LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15093LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15093LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15093LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15069LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15093LU)
);
}

/* TransitionNumber - ns=3;i=15094 */

static UA_StatusCode function_namespace_fortiss_di_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15094_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15094_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15094_variant_DataContents);
*variablenode_ns_3_i_15094_variant_DataContents = (UA_UInt32) 9;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15094_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15094LU),
UA_NODEID_NUMERIC(ns[3], 15093LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15094_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15094LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15094LU)
);
}

/* RunningToReady - ns=3;i=15083 */

static UA_StatusCode function_namespace_fortiss_di_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15083LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15083LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15071LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15083LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15083LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15073LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15083LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15083LU)
);
}

/* TransitionNumber - ns=3;i=15084 */

static UA_StatusCode function_namespace_fortiss_di_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15084_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15084_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15084_variant_DataContents);
*variablenode_ns_3_i_15084_variant_DataContents = (UA_UInt32) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15084_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15084LU),
UA_NODEID_NUMERIC(ns[3], 15083LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15084_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15084LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15084LU)
);
}

/* RunningToHalted - ns=3;i=15081 */

static UA_StatusCode function_namespace_fortiss_di_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15081LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15081LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15081LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15069LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15081LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15098LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15081LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15073LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15081LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15081LU)
);
}

/* TransitionNumber - ns=3;i=15082 */

static UA_StatusCode function_namespace_fortiss_di_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15082_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15082_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15082_variant_DataContents);
*variablenode_ns_3_i_15082_variant_DataContents = (UA_UInt32) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15082_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15082LU),
UA_NODEID_NUMERIC(ns[3], 15081LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15082_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15082LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15082LU)
);
}

/* FinalResultData - ns=3;i=15068 */

static UA_StatusCode function_namespace_fortiss_di_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FinalResultData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15068LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "FinalResultData"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15068LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15068LU)
);
}

/* SuspendedToRunning - ns=3;i=15087 */

static UA_StatusCode function_namespace_fortiss_di_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15087LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15087LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15087LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15073LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15087LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15087LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15097LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15087LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15075LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15087LU)
);
}

/* TransitionNumber - ns=3;i=15088 */

static UA_StatusCode function_namespace_fortiss_di_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15088_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15088_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15088_variant_DataContents);
*variablenode_ns_3_i_15088_variant_DataContents = (UA_UInt32) 6;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15088_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15088LU),
UA_NODEID_NUMERIC(ns[3], 15087LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15088_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15088LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15088LU)
);
}

/* RunningToSuspended - ns=3;i=15085 */

static UA_StatusCode function_namespace_fortiss_di_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15085LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15085LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15085LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15073LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15085LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15096LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15085LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15075LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15085LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15085LU)
);
}

/* TransitionNumber - ns=3;i=15086 */

static UA_StatusCode function_namespace_fortiss_di_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15086_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15086_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15086_variant_DataContents);
*variablenode_ns_3_i_15086_variant_DataContents = (UA_UInt32) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15086_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15086LU),
UA_NODEID_NUMERIC(ns[3], 15085LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15086_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15086LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15086LU)
);
}

/* GripperSkillType - ns=3;i=15101 */

static UA_StatusCode function_namespace_fortiss_di_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GripperSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A gripper skill type");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15101LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "GripperSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15101LU)
);
}

/* GraspGripperSkill - ns=3;i=15168 */

static UA_StatusCode function_namespace_fortiss_di_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GraspGripperSkill");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Close the gripper to its minimum width");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15168LU),
UA_NODEID_NUMERIC(ns[3], 15101LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "GraspGripperSkill"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15168LU)
);
}

/* ParameterSet - ns=3;i=15235 */

static UA_StatusCode function_namespace_fortiss_di_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15235LU),
UA_NODEID_NUMERIC(ns[3], 15168LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15235LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15235LU)
);
}

/* Force - ns=3;i=15236 */

static UA_StatusCode function_namespace_fortiss_di_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Force");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The gripper force");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15236LU),
UA_NODEID_NUMERIC(ns[3], 15235LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Force"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15236LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15236LU)
);
}

/* EURange - ns=3;i=15240 */

static UA_StatusCode function_namespace_fortiss_di_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15240LU),
UA_NODEID_NUMERIC(ns[3], 15236LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15240LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15240LU)
);
}

/* ReleaseGripperSkill - ns=3;i=15242 */

static UA_StatusCode function_namespace_fortiss_di_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReleaseGripperSkill");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Open the gripper to its maximum width");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15242LU),
UA_NODEID_NUMERIC(ns[3], 15101LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ReleaseGripperSkill"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15242LU)
);
}

/* ParameterSet - ns=3;i=15309 */

static UA_StatusCode function_namespace_fortiss_di_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15309LU),
UA_NODEID_NUMERIC(ns[3], 15242LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15309LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15309LU)
);
}

/* Force - ns=3;i=15310 */

static UA_StatusCode function_namespace_fortiss_di_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Force");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The gripper force");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15310LU),
UA_NODEID_NUMERIC(ns[3], 15309LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Force"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15310LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15310LU)
);
}

/* EURange - ns=3;i=15314 */

static UA_StatusCode function_namespace_fortiss_di_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15314LU),
UA_NODEID_NUMERIC(ns[3], 15310LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15314LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15314LU)
);
}

/* MoveGripperSkill - ns=3;i=15316 */

static UA_StatusCode function_namespace_fortiss_di_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MoveGripperSkill");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Open/Close the gripper to a specific width");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15316LU),
UA_NODEID_NUMERIC(ns[3], 15101LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "MoveGripperSkill"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15316LU)
);
}

/* ParameterSet - ns=3;i=15383 */

static UA_StatusCode function_namespace_fortiss_di_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15383LU),
UA_NODEID_NUMERIC(ns[3], 15316LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15383LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15383LU)
);
}

/* Width - ns=3;i=15384 */

static UA_StatusCode function_namespace_fortiss_di_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Width");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The gripper width");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15384LU),
UA_NODEID_NUMERIC(ns[3], 15383LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Width"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15384LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15384LU)
);
}

/* EURange - ns=3;i=15388 */

static UA_StatusCode function_namespace_fortiss_di_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15388LU),
UA_NODEID_NUMERIC(ns[3], 15384LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15388LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15388LU)
);
}

/* Force - ns=3;i=15390 */

static UA_StatusCode function_namespace_fortiss_di_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Force");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The gripper force");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15390LU),
UA_NODEID_NUMERIC(ns[3], 15383LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Force"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15390LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15390LU)
);
}

/* EURange - ns=3;i=15394 */

static UA_StatusCode function_namespace_fortiss_di_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15394LU),
UA_NODEID_NUMERIC(ns[3], 15390LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15394LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15394LU)
);
}

/* SuspendedToHalted - ns=3;i=15089 */

static UA_StatusCode function_namespace_fortiss_di_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15089LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15089LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15075LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15089LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15069LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15089LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15098LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15089LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2378LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15089LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15089LU)
);
}

/* TransitionNumber - ns=3;i=15090 */

static UA_StatusCode function_namespace_fortiss_di_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_3_i_15090_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_3_i_15090_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_3_i_15090_variant_DataContents);
*variablenode_ns_3_i_15090_variant_DataContents = (UA_UInt32) 7;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_15090_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15090LU),
UA_NODEID_NUMERIC(ns[3], 15089LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_3_i_15090_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15090LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15090LU)
);
}

/* Reset - ns=3;i=15099 */

static UA_StatusCode function_namespace_fortiss_di_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15099LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15099LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15099LU), UA_NODEID_NUMERIC(ns[0], 53LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15077LU), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15099LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* MaxInstanceCount - ns=3;i=15053 */

static UA_StatusCode function_namespace_fortiss_di_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxInstanceCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15053LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15053LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15053LU)
);
}

/* Name - ns=3;i=15100 */

static UA_StatusCode function_namespace_fortiss_di_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the skill");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15100LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15100LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15100LU)
);
}

/* ReleaseGripperSkill - ns=3;i=15564 */

static UA_StatusCode function_namespace_fortiss_di_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReleaseGripperSkill");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[3], 15499LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ReleaseGripperSkill"),
UA_NODEID_NUMERIC(ns[3], 15034LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15564LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15564LU)
);
}

/* RunningToReady - ns=3;i=15611 */

static UA_StatusCode function_namespace_fortiss_di_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15611LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15611LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15611LU)
);
}

/* TransitionNumber - ns=3;i=15612 */

static UA_StatusCode function_namespace_fortiss_di_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15612LU),
UA_NODEID_NUMERIC(ns[3], 15611LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15612LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15612LU)
);
}

/* RunningToSuspended - ns=3;i=15613 */

static UA_StatusCode function_namespace_fortiss_di_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15613LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15613LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15613LU)
);
}

/* TransitionNumber - ns=3;i=15614 */

static UA_StatusCode function_namespace_fortiss_di_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15614LU),
UA_NODEID_NUMERIC(ns[3], 15613LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15614LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15614LU)
);
}

/* LastTransition - ns=3;i=15570 */

static UA_StatusCode function_namespace_fortiss_di_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastTransition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15570LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15570LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15570LU)
);
}

/* TransitionTime - ns=3;i=15574 */

static UA_StatusCode function_namespace_fortiss_di_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15574LU),
UA_NODEID_NUMERIC(ns[3], 15570LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15574LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15574LU)
);
}

/* Number - ns=3;i=15573 */

static UA_StatusCode function_namespace_fortiss_di_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15573LU),
UA_NODEID_NUMERIC(ns[3], 15570LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15573LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15573LU)
);
}

/* Id - ns=3;i=15571 */

static UA_StatusCode function_namespace_fortiss_di_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15571LU),
UA_NODEID_NUMERIC(ns[3], 15570LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15571LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15571LU)
);
}

/* SuspendedToHalted - ns=3;i=15617 */

static UA_StatusCode function_namespace_fortiss_di_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15617LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15617LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15617LU)
);
}

/* TransitionNumber - ns=3;i=15618 */

static UA_StatusCode function_namespace_fortiss_di_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15618LU),
UA_NODEID_NUMERIC(ns[3], 15617LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15618LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15618LU)
);
}

/* SuspendedToReady - ns=3;i=15619 */

static UA_StatusCode function_namespace_fortiss_di_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15619LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15619LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15619LU)
);
}

/* TransitionNumber - ns=3;i=15620 */

static UA_StatusCode function_namespace_fortiss_di_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15620LU),
UA_NODEID_NUMERIC(ns[3], 15619LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15620LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15620LU)
);
}

/* CurrentState - ns=3;i=15565 */

static UA_StatusCode function_namespace_fortiss_di_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15565LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15565LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15565LU)
);
}

/* Id - ns=3;i=15566 */

static UA_StatusCode function_namespace_fortiss_di_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15566LU),
UA_NODEID_NUMERIC(ns[3], 15565LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15566LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15566LU)
);
}

/* Number - ns=3;i=15568 */

static UA_StatusCode function_namespace_fortiss_di_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15568LU),
UA_NODEID_NUMERIC(ns[3], 15565LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15568LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15568LU)
);
}

/* Suspended - ns=3;i=15615 */

static UA_StatusCode function_namespace_fortiss_di_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15615LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15615LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15615LU)
);
}

/* StateNumber - ns=3;i=15616 */

static UA_StatusCode function_namespace_fortiss_di_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15616LU),
UA_NODEID_NUMERIC(ns[3], 15615LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15616LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15616LU)
);
}

/* Halt - ns=3;i=15623 */

static UA_StatusCode function_namespace_fortiss_di_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15623LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15623LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15623LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RecycleCount - ns=3;i=15580 */

static UA_StatusCode function_namespace_fortiss_di_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RecycleCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15580LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15580LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15580LU)
);
}

/* Reset - ns=3;i=15624 */

static UA_StatusCode function_namespace_fortiss_di_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15624LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15624LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15624LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Resume - ns=3;i=15625 */

static UA_StatusCode function_namespace_fortiss_di_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15625LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15625LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15625LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspend - ns=3;i=15626 */

static UA_StatusCode function_namespace_fortiss_di_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15626LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15626LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15626LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Start - ns=3;i=15627 */

static UA_StatusCode function_namespace_fortiss_di_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15627LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15627LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15627LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SuspendedToRunning - ns=3;i=15621 */

static UA_StatusCode function_namespace_fortiss_di_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15621LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15621LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15621LU)
);
}

/* TransitionNumber - ns=3;i=15622 */

static UA_StatusCode function_namespace_fortiss_di_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15622LU),
UA_NODEID_NUMERIC(ns[3], 15621LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15622LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15622LU)
);
}

/* RunningToHalted - ns=3;i=15609 */

static UA_StatusCode function_namespace_fortiss_di_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15609LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15609LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15609LU)
);
}

/* TransitionNumber - ns=3;i=15610 */

static UA_StatusCode function_namespace_fortiss_di_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15610LU),
UA_NODEID_NUMERIC(ns[3], 15609LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15610LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15610LU)
);
}

/* Running - ns=3;i=15607 */

static UA_StatusCode function_namespace_fortiss_di_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15607LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15607LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15607LU)
);
}

/* StateNumber - ns=3;i=15608 */

static UA_StatusCode function_namespace_fortiss_di_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15608LU),
UA_NODEID_NUMERIC(ns[3], 15607LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15608LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15608LU)
);
}

/* ReadyToRunning - ns=3;i=15605 */

static UA_StatusCode function_namespace_fortiss_di_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15605LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15605LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15605LU)
);
}

/* TransitionNumber - ns=3;i=15606 */

static UA_StatusCode function_namespace_fortiss_di_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15606LU),
UA_NODEID_NUMERIC(ns[3], 15605LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15606LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15606LU)
);
}

/* ReadyToHalted - ns=3;i=15603 */

static UA_StatusCode function_namespace_fortiss_di_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15603LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15603LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15603LU)
);
}

/* TransitionNumber - ns=3;i=15604 */

static UA_StatusCode function_namespace_fortiss_di_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15604LU),
UA_NODEID_NUMERIC(ns[3], 15603LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15604LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15604LU)
);
}

/* Ready - ns=3;i=15601 */

static UA_StatusCode function_namespace_fortiss_di_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15601LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15601LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15601LU)
);
}

/* StateNumber - ns=3;i=15602 */

static UA_StatusCode function_namespace_fortiss_di_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15602LU),
UA_NODEID_NUMERIC(ns[3], 15601LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15602LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15602LU)
);
}

/* AutoDelete - ns=3;i=15579 */

static UA_StatusCode function_namespace_fortiss_di_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AutoDelete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15579LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15579LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15579LU)
);
}

/* Deletable - ns=3;i=15578 */

static UA_StatusCode function_namespace_fortiss_di_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Deletable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15578LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15578LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15578LU)
);
}

/* HaltedToReady - ns=3;i=15599 */

static UA_StatusCode function_namespace_fortiss_di_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15599LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15599LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15599LU)
);
}

/* TransitionNumber - ns=3;i=15600 */

static UA_StatusCode function_namespace_fortiss_di_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15600LU),
UA_NODEID_NUMERIC(ns[3], 15599LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15600LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15600LU)
);
}

/* Halted - ns=3;i=15597 */

static UA_StatusCode function_namespace_fortiss_di_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15597LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15597LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15597LU)
);
}

/* StateNumber - ns=3;i=15598 */

static UA_StatusCode function_namespace_fortiss_di_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15598LU),
UA_NODEID_NUMERIC(ns[3], 15597LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15598LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15598LU)
);
}

/* MaxInstanceCount - ns=3;i=15596 */

static UA_StatusCode function_namespace_fortiss_di_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxInstanceCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15596LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15596LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15596LU)
);
}

/* Name - ns=3;i=15595 */

static UA_StatusCode function_namespace_fortiss_di_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the skill");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15595LU),
UA_NODEID_NUMERIC(ns[3], 15564LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15595LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15595LU)
);
}

/* ISkillControllerType - ns=3;i=15396 */

static UA_StatusCode function_namespace_fortiss_di_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ISkillControllerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The interface definition for a skill controller type. Represents an object which contains skill instances.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15396LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ISkillControllerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15396LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15463LU), false);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15396LU)
);
}

/* Skills - ns=3;i=15398 */

static UA_StatusCode function_namespace_fortiss_di_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Skills");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the skills of the Component");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15398LU),
UA_NODEID_NUMERIC(ns[3], 15396LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Skills"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15398LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15398LU)
);
}

/* Skill_<No> - ns=3;i=15399 */

static UA_StatusCode function_namespace_fortiss_di_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Skill_<No>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[3], 15398LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Skill_<No>"),
UA_NODEID_NUMERIC(ns[3], 15034LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15399LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15399LU)
);
}

/* Reset - ns=3;i=15459 */

static UA_StatusCode function_namespace_fortiss_di_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15459LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15459LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15459LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Halt - ns=3;i=15458 */

static UA_StatusCode function_namespace_fortiss_di_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15458LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15458LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15458LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspended - ns=3;i=15450 */

static UA_StatusCode function_namespace_fortiss_di_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15450LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15450LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15450LU)
);
}

/* StateNumber - ns=3;i=15451 */

static UA_StatusCode function_namespace_fortiss_di_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15451LU),
UA_NODEID_NUMERIC(ns[3], 15450LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15451LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15451LU)
);
}

/* SuspendedToHalted - ns=3;i=15452 */

static UA_StatusCode function_namespace_fortiss_di_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15452LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15452LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15452LU)
);
}

/* TransitionNumber - ns=3;i=15453 */

static UA_StatusCode function_namespace_fortiss_di_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15453LU),
UA_NODEID_NUMERIC(ns[3], 15452LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15453LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15453LU)
);
}

/* SuspendedToReady - ns=3;i=15454 */

static UA_StatusCode function_namespace_fortiss_di_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15454LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15454LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15454LU)
);
}

/* TransitionNumber - ns=3;i=15455 */

static UA_StatusCode function_namespace_fortiss_di_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15455LU),
UA_NODEID_NUMERIC(ns[3], 15454LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15455LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15455LU)
);
}

/* SuspendedToRunning - ns=3;i=15456 */

static UA_StatusCode function_namespace_fortiss_di_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15456LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15456LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15456LU)
);
}

/* TransitionNumber - ns=3;i=15457 */

static UA_StatusCode function_namespace_fortiss_di_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15457LU),
UA_NODEID_NUMERIC(ns[3], 15456LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15457LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15457LU)
);
}

/* RunningToReady - ns=3;i=15446 */

static UA_StatusCode function_namespace_fortiss_di_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15446LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15446LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15446LU)
);
}

/* TransitionNumber - ns=3;i=15447 */

static UA_StatusCode function_namespace_fortiss_di_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15447LU),
UA_NODEID_NUMERIC(ns[3], 15446LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15447LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15447LU)
);
}

/* RunningToHalted - ns=3;i=15444 */

static UA_StatusCode function_namespace_fortiss_di_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15444LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15444LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15444LU)
);
}

/* TransitionNumber - ns=3;i=15445 */

static UA_StatusCode function_namespace_fortiss_di_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15445LU),
UA_NODEID_NUMERIC(ns[3], 15444LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15445LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15445LU)
);
}

/* Running - ns=3;i=15442 */

static UA_StatusCode function_namespace_fortiss_di_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15442LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15442LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15442LU)
);
}

/* StateNumber - ns=3;i=15443 */

static UA_StatusCode function_namespace_fortiss_di_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15443LU),
UA_NODEID_NUMERIC(ns[3], 15442LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15443LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15443LU)
);
}

/* ReadyToRunning - ns=3;i=15440 */

static UA_StatusCode function_namespace_fortiss_di_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15440LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15440LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15440LU)
);
}

/* TransitionNumber - ns=3;i=15441 */

static UA_StatusCode function_namespace_fortiss_di_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15441LU),
UA_NODEID_NUMERIC(ns[3], 15440LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15441LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15441LU)
);
}

/* CurrentState - ns=3;i=15400 */

static UA_StatusCode function_namespace_fortiss_di_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15400LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15400LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15400LU)
);
}

/* Number - ns=3;i=15403 */

static UA_StatusCode function_namespace_fortiss_di_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15403LU),
UA_NODEID_NUMERIC(ns[3], 15400LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15403LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15403LU)
);
}

/* Id - ns=3;i=15401 */

static UA_StatusCode function_namespace_fortiss_di_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15401LU),
UA_NODEID_NUMERIC(ns[3], 15400LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15401LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15401LU)
);
}

/* RunningToSuspended - ns=3;i=15448 */

static UA_StatusCode function_namespace_fortiss_di_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15448LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15448LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15448LU)
);
}

/* TransitionNumber - ns=3;i=15449 */

static UA_StatusCode function_namespace_fortiss_di_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15449LU),
UA_NODEID_NUMERIC(ns[3], 15448LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15449LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15449LU)
);
}

/* LastTransition - ns=3;i=15405 */

static UA_StatusCode function_namespace_fortiss_di_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastTransition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15405LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15405LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15405LU)
);
}

/* TransitionTime - ns=3;i=15409 */

static UA_StatusCode function_namespace_fortiss_di_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15409LU),
UA_NODEID_NUMERIC(ns[3], 15405LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15409LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15409LU)
);
}

/* Number - ns=3;i=15408 */

static UA_StatusCode function_namespace_fortiss_di_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15408LU),
UA_NODEID_NUMERIC(ns[3], 15405LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15408LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15408LU)
);
}

/* Id - ns=3;i=15406 */

static UA_StatusCode function_namespace_fortiss_di_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15406LU),
UA_NODEID_NUMERIC(ns[3], 15405LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15406LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15406LU)
);
}

/* Deletable - ns=3;i=15413 */

static UA_StatusCode function_namespace_fortiss_di_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Deletable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15413LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15413LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15413LU)
);
}

/* AutoDelete - ns=3;i=15414 */

static UA_StatusCode function_namespace_fortiss_di_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AutoDelete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15414LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15414LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15414LU)
);
}

/* RecycleCount - ns=3;i=15415 */

static UA_StatusCode function_namespace_fortiss_di_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RecycleCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15415LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15415LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15415LU)
);
}

/* Name - ns=3;i=15430 */

static UA_StatusCode function_namespace_fortiss_di_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the skill");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15430LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15430LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15430LU)
);
}

/* MaxInstanceCount - ns=3;i=15431 */

static UA_StatusCode function_namespace_fortiss_di_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxInstanceCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15431LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15431LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15431LU)
);
}

/* Resume - ns=3;i=15460 */

static UA_StatusCode function_namespace_fortiss_di_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15460LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15460LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15460LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspend - ns=3;i=15461 */

static UA_StatusCode function_namespace_fortiss_di_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15461LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15461LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15461LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Start - ns=3;i=15462 */

static UA_StatusCode function_namespace_fortiss_di_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15462LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15462LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_di_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15462LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Halted - ns=3;i=15432 */

static UA_StatusCode function_namespace_fortiss_di_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15432LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15432LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15432LU)
);
}

/* StateNumber - ns=3;i=15433 */

static UA_StatusCode function_namespace_fortiss_di_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15433LU),
UA_NODEID_NUMERIC(ns[3], 15432LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15433LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15433LU)
);
}

/* Ready - ns=3;i=15436 */

static UA_StatusCode function_namespace_fortiss_di_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15436LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15436LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15436LU)
);
}

/* StateNumber - ns=3;i=15437 */

static UA_StatusCode function_namespace_fortiss_di_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15437LU),
UA_NODEID_NUMERIC(ns[3], 15436LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15437LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15437LU)
);
}

/* HaltedToReady - ns=3;i=15434 */

static UA_StatusCode function_namespace_fortiss_di_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15434LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15434LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15434LU)
);
}

/* TransitionNumber - ns=3;i=15435 */

static UA_StatusCode function_namespace_fortiss_di_generated_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15435LU),
UA_NODEID_NUMERIC(ns[3], 15434LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15435LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15435LU)
);
}

/* ReadyToHalted - ns=3;i=15438 */

static UA_StatusCode function_namespace_fortiss_di_generated_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15438LU),
UA_NODEID_NUMERIC(ns[3], 15399LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15438LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15438LU)
);
}

/* TransitionNumber - ns=3;i=15439 */

static UA_StatusCode function_namespace_fortiss_di_generated_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15439LU),
UA_NODEID_NUMERIC(ns[3], 15438LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15439LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15439LU)
);
}

/* Name - ns=3;i=15397 */

static UA_StatusCode function_namespace_fortiss_di_generated_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15397LU),
UA_NODEID_NUMERIC(ns[3], 15396LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15397LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_di_generated_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15397LU)
);
}

static UA_DataTypeArray customUA_TYPES_FORTISS_DI = {
    NULL,
    UA_TYPES_FORTISS_DI_COUNT,
    UA_TYPES_FORTISS_DI
};

static UA_DataTypeArray customUA_TYPES_DI = {
    NULL,
    UA_TYPES_DI_COUNT,
    UA_TYPES_DI
};

static UA_DataTypeArray customUA_TYPES_ROBOTICS = {
    NULL,
    UA_TYPES_ROBOTICS_COUNT,
    UA_TYPES_ROBOTICS
};

UA_StatusCode namespace_fortiss_di_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[4];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/Robotics/");
ns[3] = UA_Server_addNamespace(server, "https://fortiss.org/UA/DI/");

/* Load custom datatype definitions into the server */
if(UA_TYPES_FORTISS_DI_COUNT > 0) {
customUA_TYPES_FORTISS_DI.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_FORTISS_DI;

}
if(UA_TYPES_DI_COUNT > 0) {
customUA_TYPES_DI.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_DI;

}
if(UA_TYPES_ROBOTICS_COUNT > 0) {
customUA_TYPES_ROBOTICS.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_ROBOTICS;

}
bool dummy = (
!(retVal = function_namespace_fortiss_di_generated_0_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_1_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_2_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_3_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_4_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_5_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_6_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_7_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_8_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_9_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_10_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_11_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_12_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_13_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_14_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_15_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_16_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_17_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_18_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_19_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_20_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_21_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_22_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_23_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_24_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_25_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_26_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_27_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_28_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_29_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_30_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_31_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_32_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_33_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_34_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_35_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_36_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_37_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_38_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_39_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_40_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_41_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_42_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_43_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_44_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_45_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_46_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_47_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_48_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_49_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_50_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_51_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_52_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_53_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_54_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_55_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_56_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_57_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_58_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_59_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_60_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_61_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_62_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_63_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_64_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_65_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_66_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_67_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_68_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_69_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_70_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_71_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_72_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_73_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_74_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_75_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_76_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_77_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_78_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_79_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_80_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_81_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_82_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_83_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_84_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_85_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_86_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_87_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_88_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_89_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_90_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_91_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_92_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_93_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_94_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_95_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_96_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_97_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_98_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_99_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_100_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_101_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_102_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_103_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_104_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_105_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_106_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_107_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_108_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_109_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_110_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_111_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_112_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_113_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_114_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_115_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_116_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_117_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_118_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_119_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_120_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_121_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_122_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_123_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_124_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_125_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_126_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_127_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_128_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_129_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_130_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_131_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_132_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_133_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_134_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_135_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_136_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_137_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_138_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_139_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_140_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_141_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_142_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_143_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_144_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_145_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_146_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_147_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_148_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_149_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_150_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_151_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_152_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_153_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_154_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_155_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_156_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_157_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_158_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_159_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_160_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_161_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_162_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_163_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_164_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_165_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_166_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_167_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_168_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_169_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_170_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_171_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_172_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_173_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_174_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_175_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_176_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_177_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_178_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_179_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_180_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_181_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_182_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_183_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_184_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_185_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_186_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_187_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_188_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_189_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_190_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_191_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_192_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_193_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_194_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_195_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_196_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_197_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_198_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_199_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_200_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_201_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_202_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_203_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_204_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_205_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_206_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_207_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_208_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_209_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_210_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_211_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_212_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_213_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_214_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_215_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_216_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_217_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_218_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_219_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_220_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_221_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_222_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_223_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_224_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_225_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_226_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_227_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_228_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_229_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_230_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_231_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_232_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_233_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_234_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_235_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_236_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_237_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_238_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_239_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_240_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_241_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_242_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_243_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_244_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_245_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_246_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_247_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_248_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_249_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_250_begin(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_250_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_249_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_248_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_247_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_246_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_245_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_244_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_243_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_242_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_241_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_240_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_239_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_238_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_237_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_236_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_235_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_234_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_233_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_232_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_231_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_230_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_229_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_228_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_227_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_226_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_225_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_224_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_223_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_222_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_221_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_220_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_219_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_218_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_217_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_216_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_215_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_214_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_213_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_212_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_211_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_210_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_209_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_208_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_207_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_206_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_205_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_204_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_203_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_202_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_201_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_200_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_199_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_198_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_197_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_196_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_195_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_194_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_193_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_192_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_191_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_190_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_189_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_188_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_187_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_186_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_185_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_184_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_183_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_182_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_181_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_180_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_179_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_178_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_177_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_176_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_175_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_174_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_173_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_172_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_171_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_170_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_169_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_168_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_167_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_166_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_165_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_164_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_163_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_162_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_161_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_160_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_159_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_158_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_157_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_156_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_155_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_154_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_153_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_152_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_151_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_150_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_149_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_148_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_147_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_146_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_145_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_144_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_143_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_142_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_141_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_140_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_139_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_138_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_137_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_136_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_135_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_134_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_133_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_132_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_131_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_130_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_129_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_128_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_127_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_126_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_125_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_124_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_123_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_122_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_121_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_120_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_119_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_118_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_117_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_116_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_115_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_114_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_113_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_112_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_111_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_110_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_109_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_108_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_107_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_106_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_105_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_104_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_103_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_102_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_101_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_100_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_99_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_98_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_97_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_96_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_95_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_94_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_93_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_92_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_91_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_90_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_89_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_88_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_87_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_86_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_85_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_84_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_83_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_82_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_81_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_80_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_79_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_78_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_77_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_76_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_75_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_74_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_73_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_72_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_71_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_70_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_69_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_68_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_67_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_66_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_65_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_64_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_63_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_62_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_61_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_60_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_59_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_58_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_57_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_56_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_55_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_54_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_53_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_52_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_51_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_50_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_49_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_48_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_47_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_46_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_45_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_44_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_43_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_42_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_41_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_40_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_39_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_38_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_37_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_36_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_35_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_34_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_33_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_32_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_31_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_30_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_29_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_28_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_27_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_26_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_25_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_24_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_23_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_22_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_21_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_20_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_19_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_18_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_17_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_16_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_15_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_14_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_13_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_12_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_11_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_10_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_9_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_8_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_7_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_6_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_5_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_4_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_3_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_2_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_1_finish(server, ns))
&& !(retVal = function_namespace_fortiss_di_generated_0_finish(server, ns))
); (void)(dummy);
return retVal;
}
