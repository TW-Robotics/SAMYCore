/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_robotics_generated.h"


/* Requires - ns=2;i=18179 */

static UA_StatusCode function_namespace_robotics_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsRequiredBy");
attr.displayName = UA_LOCALIZEDTEXT("", "Requires");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reference: Describe the coupling between a power train and axes from the axis point of view. An axis has a Requires reference to all powertrains that need to move such that only this single axis moves.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 18179LU),
UA_NODEID_NUMERIC(ns[0], 33LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "Requires"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18179LU)
);
}

/* Moves - ns=2;i=18178 */

static UA_StatusCode function_namespace_robotics_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsMovedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "Moves");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reference: Describe the coupling between a power train and the axes from the power train point of view.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 18178LU),
UA_NODEID_NUMERIC(ns[0], 33LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "Moves"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18178LU)
);
}

/* ExecutionModeEnumeration - ns=2;i=18191 */

static UA_StatusCode function_namespace_robotics_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecutionModeEnumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 18191LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "ExecutionModeEnumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18191LU)
);
}

/* EnumStrings - ns=2;i=18192 */

static UA_StatusCode function_namespace_robotics_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_2_i_18192_variant_DataContents[3];
variablenode_ns_2_i_18192_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "CYCLE");
variablenode_ns_2_i_18192_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "CONTINUOUS");
variablenode_ns_2_i_18192_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "STEP");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_18192_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18192LU),
UA_NODEID_NUMERIC(ns[2], 18191LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18192LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18192LU)
);
}

/* AxisMotionProfileEnumeration - ns=2;i=3008 */

static UA_StatusCode function_namespace_robotics_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisMotionProfileEnumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 3008LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "AxisMotionProfileEnumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 3008LU)
);
}

/* EnumStrings - ns=2;i=6027 */

static UA_StatusCode function_namespace_robotics_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_2_i_6027_variant_DataContents[5];
variablenode_ns_2_i_6027_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "OTHER");
variablenode_ns_2_i_6027_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "ROTARY");
variablenode_ns_2_i_6027_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "ROTARY_ENDLESS");
variablenode_ns_2_i_6027_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "LINEAR");
variablenode_ns_2_i_6027_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "LINEAR_ENDLESS");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6027_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6027LU),
UA_NODEID_NUMERIC(ns[2], 3008LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6027LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6027LU)
);
}

/* Controls - ns=2;i=4002 */

static UA_StatusCode function_namespace_robotics_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsControlledBy");
attr.displayName = UA_LOCALIZEDTEXT("", "Controls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reference: Describe dependencies between objects which have a controlling character.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 4002LU),
UA_NODEID_NUMERIC(ns[0], 33LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "Controls"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 4002LU)
);
}

/* IsDrivenBy - ns=2;i=18180 */

static UA_StatusCode function_namespace_robotics_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "Drives");
attr.displayName = UA_LOCALIZEDTEXT("", "IsDrivenBy");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reference: Describe dependencies between objects which have a driving or powering character. The BrowseName IsDrivenBy and the InverseName Drives describe semantically the hierarchical dependency.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 18180LU),
UA_NODEID_NUMERIC(ns[0], 33LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "IsDrivenBy"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18180LU)
);
}

/* IsConnectedTo - ns=2;i=18181 */

static UA_StatusCode function_namespace_robotics_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.symmetric  = true;
attr.displayName = UA_LOCALIZEDTEXT("", "IsConnectedTo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reference: Describe dependencies between objects which are mounted or mechanically linked or connected to each other. The IsConnectedTo reference is symmetric and has no InverseName.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 18181LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "IsConnectedTo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18181LU)
);
}

/* HasSafetyStates - ns=2;i=18182 */

static UA_StatusCode function_namespace_robotics_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "SafetyStatesOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasSafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reference: Describe dependencies between objects to show which (controller) object is responsible for the execution of the safety-functionality. The BrowseName HasSafetyStates and the InverseName SafetyStatesOf describe semantically the hierarchical dependency.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 18182LU),
UA_NODEID_NUMERIC(ns[0], 33LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "HasSafetyStates"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18182LU)
);
}

/* HasSlave - ns=2;i=18183 */

static UA_StatusCode function_namespace_robotics_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsSlaveOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasSlave");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Reference: Provide the master-slave relationship of power trains which provide torque for a common axis. The InverseName is IsSlaveOf.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[2], 18183LU),
UA_NODEID_NUMERIC(ns[0], 33LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "HasSlave"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18183LU)
);
}

/* MotionDeviceCategoryEnumeration - ns=2;i=18193 */

static UA_StatusCode function_namespace_robotics_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategoryEnumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 18193LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategoryEnumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18193LU)
);
}

/* EnumStrings - ns=2;i=18194 */

static UA_StatusCode function_namespace_robotics_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_2_i_18194_variant_DataContents[7];
variablenode_ns_2_i_18194_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "OTHER");
variablenode_ns_2_i_18194_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "ARTICULATED_ROBOT");
variablenode_ns_2_i_18194_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "SCARA_ROBOT");
variablenode_ns_2_i_18194_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "CARTESIAN_ROBOT");
variablenode_ns_2_i_18194_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "SPHERICAL_ROBOT");
variablenode_ns_2_i_18194_variant_DataContents[5] = UA_LOCALIZEDTEXT("", "PARALLEL_ROBOT");
variablenode_ns_2_i_18194_variant_DataContents[6] = UA_LOCALIZEDTEXT("", "CYLINDRICAL_ROBOT");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_18194_variant_DataContents, (UA_Int32) 7, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18194LU),
UA_NODEID_NUMERIC(ns[2], 18193LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18194LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18194LU)
);
}

/* OperationalModeEnumeration - ns=2;i=3006 */

static UA_StatusCode function_namespace_robotics_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationalModeEnumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 3006LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "OperationalModeEnumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 3006LU)
);
}

/* EnumStrings - ns=2;i=6022 */

static UA_StatusCode function_namespace_robotics_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_2_i_6022_variant_DataContents[5];
variablenode_ns_2_i_6022_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "OTHER");
variablenode_ns_2_i_6022_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "MANUAL_REDUCED_SPEED");
variablenode_ns_2_i_6022_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "MANUAL_HIGH_SPEED");
variablenode_ns_2_i_6022_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "AUTOMATIC");
variablenode_ns_2_i_6022_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "AUTOMATIC_EXTERNAL");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6022_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6022LU),
UA_NODEID_NUMERIC(ns[2], 3006LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6022LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6022LU)
);
}

/* MotorType - ns=2;i=1019 */

static UA_StatusCode function_namespace_robotics_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotorType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The MotorType is for representing instances of electric motors.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1019LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "MotorType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1019LU)
);
}

/* <DriveIdentifiier> - ns=2;i=18763 */

static UA_StatusCode function_namespace_robotics_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<DriveIdentifiier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IsDrivenBy is a reference to provide a relationship from a motor to a drive, which can be a multi-slot-drive or single slot drive. The TypeDefinition of the reference destination as BaseObjectType provides the possibility to point to a slot of a mulit-slot-drive or a motor-integrated-drive. If this reference points to a physical drive (and not a drive slot) it should point to an DriveType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18763LU),
UA_NODEID_NUMERIC(ns[2], 1019LU),
UA_NODEID_NUMERIC(ns[2], 18180LU),
UA_QUALIFIEDNAME(ns[2], "<DriveIdentifiier>"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18763LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18763LU)
);
}

/* ProductCode - ns=2;i=17109 */

static UA_StatusCode function_namespace_robotics_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17109LU),
UA_NODEID_NUMERIC(ns[2], 1019LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17109LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17109LU)
);
}

/* ParameterSet - ns=2;i=5105 */

static UA_StatusCode function_namespace_robotics_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5105LU),
UA_NODEID_NUMERIC(ns[2], 1019LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5105LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5105LU)
);
}

/* EffectiveLoadRate - ns=2;i=6776 */

static UA_StatusCode function_namespace_robotics_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EffectiveLoadRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "EffectiveLoadRate is expressed as a percentage of maximum continuous load. The Joule integral is typically used to calculate the current load. Duration should be defined and documented by the vendor.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6776LU),
UA_NODEID_NUMERIC(ns[2], 5105LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EffectiveLoadRate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6776LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6776LU)
);
}

/* BrakeReleased - ns=2;i=17150 */

static UA_StatusCode function_namespace_robotics_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrakeReleased");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Indicates an optional variable used only for motors with brakes. If BrakeReleased is TRUE the motor is free to run. FALSE means that the motor shaft is locked by the brake.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17150LU),
UA_NODEID_NUMERIC(ns[2], 5105LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "BrakeReleased"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17150LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17150LU)
);
}

/* MotorTemperature - ns=2;i=6757 */

static UA_StatusCode function_namespace_robotics_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotorTemperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The motor temperature provides the temperature of the motor. If there is no temperature sensor the value is set to \\\"null\\\".");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6757LU),
UA_NODEID_NUMERIC(ns[2], 5105LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotorTemperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6757LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6757LU)
);
}

/* EngineeringUnits - ns=2;i=6762 */

static UA_StatusCode function_namespace_robotics_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6762LU),
UA_NODEID_NUMERIC(ns[2], 6757LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6762LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6762LU)
);
}

/* SerialNumber - ns=2;i=17104 */

static UA_StatusCode function_namespace_robotics_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17104LU),
UA_NODEID_NUMERIC(ns[2], 1019LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17104LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17104LU)
);
}

/* Model - ns=2;i=17103 */

static UA_StatusCode function_namespace_robotics_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17103LU),
UA_NODEID_NUMERIC(ns[2], 1019LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17103LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17103LU)
);
}

/* Manufacturer - ns=2;i=17101 */

static UA_StatusCode function_namespace_robotics_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17101LU),
UA_NODEID_NUMERIC(ns[2], 1019LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17101LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17101LU)
);
}

/* <MotorIdentifier> - ns=2;i=18764 */

static UA_StatusCode function_namespace_robotics_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MotorIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IsConnectedTo is a reference to provide the relationship between a motor and a gear of a power train.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18764LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[2], "<MotorIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1019LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18764LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18764LU)
);
}

/* ProductCode - ns=2;i=18793 */

static UA_StatusCode function_namespace_robotics_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18793LU),
UA_NODEID_NUMERIC(ns[2], 18764LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18793LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18793LU)
);
}

/* Manufacturer - ns=2;i=18785 */

static UA_StatusCode function_namespace_robotics_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18785LU),
UA_NODEID_NUMERIC(ns[2], 18764LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18785LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18785LU)
);
}

/* Model - ns=2;i=18787 */

static UA_StatusCode function_namespace_robotics_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18787LU),
UA_NODEID_NUMERIC(ns[2], 18764LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18787LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18787LU)
);
}

/* SerialNumber - ns=2;i=18788 */

static UA_StatusCode function_namespace_robotics_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18788LU),
UA_NODEID_NUMERIC(ns[2], 18764LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18788LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18788LU)
);
}

/* ParameterSet - ns=2;i=18765 */

static UA_StatusCode function_namespace_robotics_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18765LU),
UA_NODEID_NUMERIC(ns[2], 18764LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18765LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18765LU)
);
}

/* MotorTemperature - ns=2;i=18799 */

static UA_StatusCode function_namespace_robotics_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotorTemperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The motor temperature provides the temperature of the motor. If there is no temperature sensor the value is set to \\\"null\\\".");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18799LU),
UA_NODEID_NUMERIC(ns[2], 18765LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotorTemperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18799LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18799LU)
);
}

/* EngineeringUnits - ns=2;i=18804 */

static UA_StatusCode function_namespace_robotics_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18804LU),
UA_NODEID_NUMERIC(ns[2], 18799LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18804LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18804LU)
);
}

/* LoadType - ns=2;i=1018 */

static UA_StatusCode function_namespace_robotics_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LoadType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The LoadType is for describing loads mounted on the motion device typically by an integrator or a customer.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1018LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "LoadType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1018LU)
);
}

/* CenterOfMass - ns=2;i=6013 */

static UA_StatusCode function_namespace_robotics_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CenterOfMass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The position and orientation of the center of the mass related to the mounting point using a FrameType. X, Y, Z define the position of the center of gravity relative to the mounting point coordinate system. A, B, C define the orientation of the principal axes of inertia relative to the mounting point coordinate system. Orientation A, B, C can be \"0\" for systems which do not need these  values.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6013LU),
UA_NODEID_NUMERIC(ns[2], 1018LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CenterOfMass"),
UA_NODEID_NUMERIC(ns[0], 18791LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6013LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6013LU)
);
}

/* Orientation - ns=2;i=16132 */

static UA_StatusCode function_namespace_robotics_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18812LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Orientation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16132LU),
UA_NODEID_NUMERIC(ns[2], 6013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Orientation"),
UA_NODEID_NUMERIC(ns[0], 18781LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16132LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16132LU)
);
}

/* A - ns=2;i=16137 */

static UA_StatusCode function_namespace_robotics_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "A");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16137LU),
UA_NODEID_NUMERIC(ns[2], 16132LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "A"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16137LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16137LU)
);
}

/* C - ns=2;i=16139 */

static UA_StatusCode function_namespace_robotics_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "C");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16139LU),
UA_NODEID_NUMERIC(ns[2], 16132LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "C"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16139LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16139LU)
);
}

/* B - ns=2;i=16138 */

static UA_StatusCode function_namespace_robotics_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "B");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16138LU),
UA_NODEID_NUMERIC(ns[2], 16132LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "B"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16138LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16138LU)
);
}

/* CartesianCoordinates - ns=2;i=16130 */

static UA_StatusCode function_namespace_robotics_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18810LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CartesianCoordinates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16130LU),
UA_NODEID_NUMERIC(ns[2], 6013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CartesianCoordinates"),
UA_NODEID_NUMERIC(ns[0], 18774LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16130LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16130LU)
);
}

/* Z - ns=2;i=16136 */

static UA_StatusCode function_namespace_robotics_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Z");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16136LU),
UA_NODEID_NUMERIC(ns[2], 16130LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16136LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16136LU)
);
}

/* Y - ns=2;i=16135 */

static UA_StatusCode function_namespace_robotics_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Y");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16135LU),
UA_NODEID_NUMERIC(ns[2], 16130LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16135LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16135LU)
);
}

/* X - ns=2;i=16134 */

static UA_StatusCode function_namespace_robotics_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "X");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16134LU),
UA_NODEID_NUMERIC(ns[2], 16130LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16134LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16134LU)
);
}

/* Mass - ns=2;i=6723 */

static UA_StatusCode function_namespace_robotics_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Mass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6723LU),
UA_NODEID_NUMERIC(ns[2], 1018LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Mass"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6723LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6723LU)
);
}

/* EngineeringUnits - ns=2;i=6728 */

static UA_StatusCode function_namespace_robotics_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6728LU),
UA_NODEID_NUMERIC(ns[2], 6723LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6728LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6728LU)
);
}

/* Inertia - ns=2;i=18170 */

static UA_StatusCode function_namespace_robotics_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18808LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Inertia");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Inertia uses the VectorType to describe the three values of the principal moments of inertia with respect to the mounting point coordinate system. If inertia values are provided for rotary axis the CenterOfMass shall be completely filled as well.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18170LU),
UA_NODEID_NUMERIC(ns[2], 1018LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Inertia"),
UA_NODEID_NUMERIC(ns[0], 17716LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18170LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18170LU)
);
}

/* Z - ns=2;i=18173 */

static UA_StatusCode function_namespace_robotics_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Z");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18173LU),
UA_NODEID_NUMERIC(ns[2], 18170LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18173LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18173LU)
);
}

/* Y - ns=2;i=18172 */

static UA_StatusCode function_namespace_robotics_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Y");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18172LU),
UA_NODEID_NUMERIC(ns[2], 18170LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18172LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18172LU)
);
}

/* X - ns=2;i=18171 */

static UA_StatusCode function_namespace_robotics_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "X");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18171LU),
UA_NODEID_NUMERIC(ns[2], 18170LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18171LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18171LU)
);
}

/* TaskControlType - ns=2;i=1011 */

static UA_StatusCode function_namespace_robotics_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControlType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents a specific task control active on the controller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1011LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "TaskControlType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1011LU)
);
}

/* ParameterSet - ns=2;i=15883 */

static UA_StatusCode function_namespace_robotics_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15883LU),
UA_NODEID_NUMERIC(ns[2], 1011LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15883LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15883LU)
);
}

/* ExecutionMode - ns=2;i=17876 */

static UA_StatusCode function_namespace_robotics_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18191LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ExecutionMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Execution mode of the task control (continuous or step-wise).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17876LU),
UA_NODEID_NUMERIC(ns[2], 15883LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ExecutionMode"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17876LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17876LU)
);
}

/* TaskProgramLoaded - ns=2;i=17875 */

static UA_StatusCode function_namespace_robotics_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TaskProgramLoaded");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The TaskProgramLoaded variable is TRUE if a task program is loaded in the task control, FALSE otherwise.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17875LU),
UA_NODEID_NUMERIC(ns[2], 15883LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskProgramLoaded"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17875LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17875LU)
);
}

/* TaskProgramName - ns=2;i=17874 */

static UA_StatusCode function_namespace_robotics_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TaskProgramName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A customer given identifier for the task program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17874LU),
UA_NODEID_NUMERIC(ns[2], 15883LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskProgramName"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17874LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17874LU)
);
}

/* ComponentName - ns=2;i=17873 */

static UA_StatusCode function_namespace_robotics_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ComponentName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A user writeable name provided by the vendor, integrator or user of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17873LU),
UA_NODEID_NUMERIC(ns[2], 1011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ComponentName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17873LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17873LU)
);
}

/* SafetyStateType - ns=2;i=1013 */

static UA_StatusCode function_namespace_robotics_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStateType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SafetyStateType describes the safety states of the motion devices and controllers. One motion device system is associated with one or more instances of the SafetyStateType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1013LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStateType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1013LU)
);
}

/* ParameterSet - ns=2;i=5016 */

static UA_StatusCode function_namespace_robotics_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5016LU),
UA_NODEID_NUMERIC(ns[2], 1013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5016LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5016LU)
);
}

/* EmergencyStop - ns=2;i=15882 */

static UA_StatusCode function_namespace_robotics_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStop");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The EmergencyStop variable is TRUE if one or more of the emergency stop functions in the robot system are active, FALSE otherwise. If the EmergencyStopFunctions object is provided, then the value of this variable is TRUE if one or more of the listed emergency stop functions are active.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15882LU),
UA_NODEID_NUMERIC(ns[2], 5016LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EmergencyStop"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15882LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15882LU)
);
}

/* ProtectiveStop - ns=2;i=15913 */

static UA_StatusCode function_namespace_robotics_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProtectiveStop");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProtectiveStop variable is TRUE if one or more of the enabled protective stop functions in the system are active, FALSE otherwise. If the ProtectiveStopFunctions object is provided, then the value of this variable is TRUE if one or more of the listed protective stop functions are enabled and active.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15913LU),
UA_NODEID_NUMERIC(ns[2], 5016LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProtectiveStop"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15913LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15913LU)
);
}

/* OperationalMode - ns=2;i=15912 */

static UA_StatusCode function_namespace_robotics_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3006LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OperationalMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The OperationalMode variable provides information about the current operational mode. Allowed values are described in OperationalModeEnumeration, see ISO 10218-1:2011 Ch.5.7 Operational Modes.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15912LU),
UA_NODEID_NUMERIC(ns[2], 5016LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "OperationalMode"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15912LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15912LU)
);
}

/* EmergencyStopFunctions - ns=2;i=17221 */

static UA_StatusCode function_namespace_robotics_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStopFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "EmergencyStopFunctions is a container for one or more instances of the EmergencyStopFunctionType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 17221LU),
UA_NODEID_NUMERIC(ns[2], 1013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EmergencyStopFunctions"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17221LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17221LU)
);
}

/* ProtectiveStopFunctions - ns=2;i=17225 */

static UA_StatusCode function_namespace_robotics_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProtectiveStopFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ProtectiveStopFunctions is a container for one or more instances of the ProtectiveStopFunctionType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 17225LU),
UA_NODEID_NUMERIC(ns[2], 1013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProtectiveStopFunctions"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17225LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17225LU)
);
}

/* UserType - ns=2;i=18175 */

static UA_StatusCode function_namespace_robotics_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UserType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The UserType ObjectType describes information of the registred user groups within the control system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 18175LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "UserType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18175LU)
);
}

/* Name - ns=2;i=18177 */

static UA_StatusCode function_namespace_robotics_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "The name for the current user within the control system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18177LU),
UA_NODEID_NUMERIC(ns[2], 18175LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18177LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18177LU)
);
}

/* Level - ns=2;i=18176 */

static UA_StatusCode function_namespace_robotics_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18176LU),
UA_NODEID_NUMERIC(ns[2], 18175LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18176LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18176LU)
);
}

/* ControllerType - ns=2;i=1003 */

static UA_StatusCode function_namespace_robotics_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ControllerType describes the control unit of motion devices. One motion device system can have one or more instances of the ControllerType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "ControllerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1003LU)
);
}

/* Model - ns=2;i=17239 */

static UA_StatusCode function_namespace_robotics_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17239LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17239LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17239LU)
);
}

/* Components - ns=2;i=17252 */

static UA_StatusCode function_namespace_robotics_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Components");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Components is a container for one or more instances of subtypes of ComponentType defined in OPC UA DI. The listed components are installed in the motion device system, e.g. a processing-unit, a power-supply, an IO-board or a drive, and have an electrical interface to the controller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 17252LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Components"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17252LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17252LU)
);
}

/* <ComponentIdentifier> - ns=2;i=18813 */

static UA_StatusCode function_namespace_robotics_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ComponentIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The intention is to integrate inside this container devices which are defined in other companion specifications using DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18813LU),
UA_NODEID_NUMERIC(ns[2], 17252LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<ComponentIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 15063LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18813LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15035LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18813LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15048LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18813LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18813LU)
);
}

/* SerialNumber - ns=2;i=17240 */

static UA_StatusCode function_namespace_robotics_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17240LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17240LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17240LU)
);
}

/* <SafetyStatesIdentifier> - ns=2;i=18918 */

static UA_StatusCode function_namespace_robotics_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<SafetyStatesIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The relationship of safety states to a controller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18918LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[2], 18182LU),
UA_QUALIFIEDNAME(ns[2], "<SafetyStatesIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1013LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18918LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18918LU)
);
}

/* ParameterSet - ns=2;i=18919 */

static UA_StatusCode function_namespace_robotics_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18919LU),
UA_NODEID_NUMERIC(ns[2], 18918LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18919LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18919LU)
);
}

/* ProtectiveStop - ns=2;i=18963 */

static UA_StatusCode function_namespace_robotics_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProtectiveStop");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProtectiveStop variable is TRUE if one or more of the enabled protective stop functions in the system are active, FALSE otherwise. If the ProtectiveStopFunctions object is provided, then the value of this variable is TRUE if one or more of the listed protective stop functions are enabled and active.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18963LU),
UA_NODEID_NUMERIC(ns[2], 18919LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProtectiveStop"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18963LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18963LU)
);
}

/* EmergencyStop - ns=2;i=18962 */

static UA_StatusCode function_namespace_robotics_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStop");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The EmergencyStop variable is TRUE if one or more of the emergency stop functions in the robot system are active, FALSE otherwise. If the EmergencyStopFunctions object is provided, then the value of this variable is TRUE if one or more of the listed emergency stop functions are active.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18962LU),
UA_NODEID_NUMERIC(ns[2], 18919LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EmergencyStop"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18962LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18962LU)
);
}

/* OperationalMode - ns=2;i=18961 */

static UA_StatusCode function_namespace_robotics_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3006LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OperationalMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The OperationalMode variable provides information about the current operational mode. Allowed values are described in OperationalModeEnumeration, see ISO 10218-1:2011 Ch.5.7 Operational Modes.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18961LU),
UA_NODEID_NUMERIC(ns[2], 18919LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "OperationalMode"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18961LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18961LU)
);
}

/* Manufacturer - ns=2;i=17237 */

static UA_StatusCode function_namespace_robotics_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17237LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17237LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17237LU)
);
}

/* ProductCode - ns=2;i=17245 */

static UA_StatusCode function_namespace_robotics_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17245LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17245LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17245LU)
);
}

/* CurrentUser - ns=2;i=17249 */

static UA_StatusCode function_namespace_robotics_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 17249LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17249LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17249LU)
);
}

/* Level - ns=2;i=17250 */

static UA_StatusCode function_namespace_robotics_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17250LU),
UA_NODEID_NUMERIC(ns[2], 17249LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17250LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17250LU)
);
}

/* TaskControls - ns=2;i=15826 */

static UA_StatusCode function_namespace_robotics_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15826LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15826LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15826LU)
);
}

/* <TaskControlIdentifier> - ns=2;i=18881 */

static UA_StatusCode function_namespace_robotics_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TaskControlIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18881LU),
UA_NODEID_NUMERIC(ns[2], 15826LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<TaskControlIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1011LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18881LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18881LU)
);
}

/* ComponentName - ns=2;i=18914 */

static UA_StatusCode function_namespace_robotics_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ComponentName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A user writeable name provided by the vendor, integrator or user of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18914LU),
UA_NODEID_NUMERIC(ns[2], 18881LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ComponentName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18914LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18914LU)
);
}

/* ParameterSet - ns=2;i=18882 */

static UA_StatusCode function_namespace_robotics_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18882LU),
UA_NODEID_NUMERIC(ns[2], 18881LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18882LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18882LU)
);
}

/* TaskProgramLoaded - ns=2;i=18916 */

static UA_StatusCode function_namespace_robotics_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TaskProgramLoaded");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The TaskProgramLoaded variable is TRUE if a task program is loaded in the task control, FALSE otherwise.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18916LU),
UA_NODEID_NUMERIC(ns[2], 18882LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskProgramLoaded"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18916LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18916LU)
);
}

/* TaskProgramName - ns=2;i=18915 */

static UA_StatusCode function_namespace_robotics_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TaskProgramName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A customer given identifier for the task program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18915LU),
UA_NODEID_NUMERIC(ns[2], 18882LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskProgramName"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18915LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18915LU)
);
}

/* ParameterSet - ns=2;i=5004 */

static UA_StatusCode function_namespace_robotics_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5004LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5004LU)
);
}

/* InputVoltage - ns=2;i=17377 */

static UA_StatusCode function_namespace_robotics_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InputVoltage");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The input voltage of the controller which can be a configured value. To distuinguish between an AC or DC supply the optional property Definition of the base type DataItemType shall be used.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17377LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "InputVoltage"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17377LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17377LU)
);
}

/* EngineeringUnits - ns=2;i=17382 */

static UA_StatusCode function_namespace_robotics_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17382LU),
UA_NODEID_NUMERIC(ns[2], 17377LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17382LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17382LU)
);
}

/* CabinetFanSpeed - ns=2;i=17365 */

static UA_StatusCode function_namespace_robotics_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CabinetFanSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The speed of the cabinet fan.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17365LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CabinetFanSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17365LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17365LU)
);
}

/* EngineeringUnits - ns=2;i=17370 */

static UA_StatusCode function_namespace_robotics_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17370LU),
UA_NODEID_NUMERIC(ns[2], 17365LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17370LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17370LU)
);
}

/* Temperature - ns=2;i=17383 */

static UA_StatusCode function_namespace_robotics_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The controller temperature given by a temperature sensor inside of the controller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17383LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17383LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17383LU)
);
}

/* EngineeringUnits - ns=2;i=17388 */

static UA_StatusCode function_namespace_robotics_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17388LU),
UA_NODEID_NUMERIC(ns[2], 17383LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17388LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17388LU)
);
}

/* CPUFanSpeed - ns=2;i=17371 */

static UA_StatusCode function_namespace_robotics_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CPUFanSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The speed of the CPU fan.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17371LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CPUFanSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17371LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17371LU)
);
}

/* EngineeringUnits - ns=2;i=17376 */

static UA_StatusCode function_namespace_robotics_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17376LU),
UA_NODEID_NUMERIC(ns[2], 17371LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17376LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17376LU)
);
}

/* StartUpTime - ns=2;i=15366 */

static UA_StatusCode function_namespace_robotics_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StartUpTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The date and time of the last start-up of the controller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15366LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "StartUpTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15366LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15366LU)
);
}

/* UpsState - ns=2;i=15365 */

static UA_StatusCode function_namespace_robotics_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UpsState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The vendor specific status of an integrated UPS or accumulator system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15365LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UpsState"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15365LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15365LU)
);
}

/* TotalEnergyConsumption - ns=2;i=17359 */

static UA_StatusCode function_namespace_robotics_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalEnergyConsumption");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The total accumulated energy consumed by the motion devices related with this controller instance.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17359LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TotalEnergyConsumption"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17359LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17359LU)
);
}

/* EngineeringUnits - ns=2;i=17364 */

static UA_StatusCode function_namespace_robotics_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17364LU),
UA_NODEID_NUMERIC(ns[2], 17359LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17364LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17364LU)
);
}

/* TotalPowerOnTime - ns=2;i=17358 */

static UA_StatusCode function_namespace_robotics_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12879LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalPowerOnTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The total accumulated time the controller was powered on.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17358LU),
UA_NODEID_NUMERIC(ns[2], 5004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TotalPowerOnTime"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17358LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17358LU)
);
}

/* Software - ns=2;i=15800 */

static UA_StatusCode function_namespace_robotics_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15800LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15800LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15800LU)
);
}

/* <SoftwareIdentifier> - ns=2;i=18847 */

static UA_StatusCode function_namespace_robotics_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<SoftwareIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18847LU),
UA_NODEID_NUMERIC(ns[2], 15800LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<SoftwareIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 15106LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18847LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18847LU)
);
}

/* Model - ns=2;i=18870 */

static UA_StatusCode function_namespace_robotics_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18870LU),
UA_NODEID_NUMERIC(ns[2], 18847LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18870LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18870LU)
);
}

/* SoftwareRevision - ns=2;i=18873 */

static UA_StatusCode function_namespace_robotics_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18873LU),
UA_NODEID_NUMERIC(ns[2], 18847LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18873LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18873LU)
);
}

/* Manufacturer - ns=2;i=18868 */

static UA_StatusCode function_namespace_robotics_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18868LU),
UA_NODEID_NUMERIC(ns[2], 18847LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18868LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18868LU)
);
}

/* MotionDeviceSystemType - ns=2;i=1002 */

static UA_StatusCode function_namespace_robotics_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceSystemType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers and motion devices in a closely-coupled motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1002LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceSystemType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1002LU)
);
}

/* SafetyStates - ns=2;i=5010 */

static UA_StatusCode function_namespace_robotics_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5010LU),
UA_NODEID_NUMERIC(ns[2], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5010LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5010LU)
);
}

/* <SafetyStateIdentifier> - ns=2;i=15697 */

static UA_StatusCode function_namespace_robotics_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<SafetyStateIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15697LU),
UA_NODEID_NUMERIC(ns[2], 5010LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<SafetyStateIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1013LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15697LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15697LU)
);
}

/* ParameterSet - ns=2;i=15698 */

static UA_StatusCode function_namespace_robotics_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15698LU),
UA_NODEID_NUMERIC(ns[2], 15697LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15698LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15698LU)
);
}

/* ProtectiveStop - ns=2;i=15742 */

static UA_StatusCode function_namespace_robotics_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProtectiveStop");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProtectiveStop variable is TRUE if one or more of the enabled protective stop functions in the system are active, FALSE otherwise. If the ProtectiveStopFunctions object is provided, then the value of this variable is TRUE if one or more of the listed protective stop functions are enabled and active.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15742LU),
UA_NODEID_NUMERIC(ns[2], 15698LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProtectiveStop"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15742LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15742LU)
);
}

/* EmergencyStop - ns=2;i=15741 */

static UA_StatusCode function_namespace_robotics_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStop");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The EmergencyStop variable is TRUE if one or more of the emergency stop functions in the robot system are active, FALSE otherwise. If the EmergencyStopFunctions object is provided, then the value of this variable is TRUE if one or more of the listed emergency stop functions are active.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15741LU),
UA_NODEID_NUMERIC(ns[2], 15698LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "EmergencyStop"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15741LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15741LU)
);
}

/* OperationalMode - ns=2;i=15740 */

static UA_StatusCode function_namespace_robotics_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3006LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OperationalMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The OperationalMode variable provides information about the current operational mode. Allowed values are described in OperationalModeEnumeration, see ISO 10218-1:2011 Ch.5.7 Operational Modes.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15740LU),
UA_NODEID_NUMERIC(ns[2], 15698LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "OperationalMode"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15740LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15740LU)
);
}

/* MotionDevices - ns=2;i=5002 */

static UA_StatusCode function_namespace_robotics_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5002LU),
UA_NODEID_NUMERIC(ns[2], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5002LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5002LU)
);
}

/* Controllers - ns=2;i=5001 */

static UA_StatusCode function_namespace_robotics_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5001LU),
UA_NODEID_NUMERIC(ns[2], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5001LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5001LU)
);
}

/* <ControllerIdentifier> - ns=2;i=15405 */

static UA_StatusCode function_namespace_robotics_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ControllerIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[2], 5001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<ControllerIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1003LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15405LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15405LU)
);
}

/* TaskControls - ns=2;i=15518 */

static UA_StatusCode function_namespace_robotics_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15518LU),
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15518LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15518LU)
);
}

/* Manufacturer - ns=2;i=15426 */

static UA_StatusCode function_namespace_robotics_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15426LU),
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15426LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15426LU)
);
}

/* ProductCode - ns=2;i=15434 */

static UA_StatusCode function_namespace_robotics_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15434LU),
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15434LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15434LU)
);
}

/* Software - ns=2;i=15483 */

static UA_StatusCode function_namespace_robotics_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15483LU),
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15483LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15483LU)
);
}

/* SerialNumber - ns=2;i=15429 */

static UA_StatusCode function_namespace_robotics_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15429LU),
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15429LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15429LU)
);
}

/* Model - ns=2;i=15428 */

static UA_StatusCode function_namespace_robotics_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15428LU),
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15428LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15428LU)
);
}

/* CurrentUser - ns=2;i=15440 */

static UA_StatusCode function_namespace_robotics_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15440LU),
UA_NODEID_NUMERIC(ns[2], 15405LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15440LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15440LU)
);
}

/* Level - ns=2;i=15441 */

static UA_StatusCode function_namespace_robotics_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15441LU),
UA_NODEID_NUMERIC(ns[2], 15440LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15441LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15441LU)
);
}

/* Opc.Ua.Robotics - ns=2;i=6118 */
static const UA_Byte variablenode_ns_2_i_6118_variant_DataContents_byteArray[3943] = {60, 120, 115, 58, 115, 99, 104, 101, 109, 97, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 68, 73, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 82, 111, 98, 111, 116, 105, 99, 115, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 116, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 82, 111, 98, 111, 116, 105, 99, 115, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 101, 108, 101, 109, 101, 110, 116, 70, 111, 114, 109, 68, 101, 102, 97, 117, 108, 116, 61, 34, 113, 117, 97, 108, 105, 102, 105, 101, 100, 34, 13, 10, 62, 13, 10, 32, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 47, 62, 13, 10, 32, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 67, 89, 67, 76, 69, 95, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 67, 79, 78, 84, 73, 78, 85, 79, 85, 83, 95, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 83, 84, 69, 80, 95, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 79, 84, 72, 69, 82, 95, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 65, 82, 84, 73, 67, 85, 76, 65, 84, 69, 68, 95, 82, 79, 66, 79, 84, 95, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 83, 67, 65, 82, 65, 95, 82, 79, 66, 79, 84, 95, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 67, 65, 82, 84, 69, 83, 73, 65, 78, 95, 82, 79, 66, 79, 84, 95, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 83, 80, 72, 69, 82, 73, 67, 65, 76, 95, 82, 79, 66, 79, 84, 95, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 80, 65, 82, 65, 76, 76, 69, 76, 95, 82, 79, 66, 79, 84, 95, 53, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 67, 89, 76, 73, 78, 68, 82, 73, 67, 65, 76, 95, 82, 79, 66, 79, 84, 95, 54, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 79, 84, 72, 69, 82, 95, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 82, 79, 84, 65, 82, 89, 95, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 82, 79, 84, 65, 82, 89, 95, 69, 78, 68, 76, 69, 83, 83, 95, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 76, 73, 78, 69, 65, 82, 95, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 76, 73, 78, 69, 65, 82, 95, 69, 78, 68, 76, 69, 83, 83, 95, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 79, 84, 72, 69, 82, 95, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 77, 65, 78, 85, 65, 76, 95, 82, 69, 68, 85, 67, 69, 68, 95, 83, 80, 69, 69, 68, 95, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 77, 65, 78, 85, 65, 76, 95, 72, 73, 71, 72, 95, 83, 80, 69, 69, 68, 95, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 65, 85, 84, 79, 77, 65, 84, 73, 67, 95, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 65, 85, 84, 79, 77, 65, 84, 73, 67, 95, 69, 88, 84, 69, 82, 78, 65, 76, 95, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 60, 47, 120, 115, 58, 115, 99, 104, 101, 109, 97, 62};



static UA_StatusCode function_namespace_robotics_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_2_i_6118_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_2_i_6118_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_2_i_6118_variant_DataContents);
variablenode_ns_2_i_6118_variant_DataContents->length = 3943;
variablenode_ns_2_i_6118_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_2_i_6118_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6118_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.Robotics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6118LU),
UA_NODEID_NUMERIC(ns[0], 92LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Opc.Ua.Robotics"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_2_i_6118_variant_DataContents->data = NULL;
variablenode_ns_2_i_6118_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_2_i_6118_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6118LU)
);
}

/* Deprecated - ns=2;i=15200 */

static UA_StatusCode function_namespace_robotics_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_2_i_15200_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_15200_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_15200_variant_DataContents);
*variablenode_ns_2_i_15200_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15200_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15200LU),
UA_NODEID_NUMERIC(ns[2], 6118LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_15200_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15200LU)
);
}

/* NamespaceUri - ns=2;i=6170 */

static UA_StatusCode function_namespace_robotics_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_6170_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6170_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6170_variant_DataContents);
*variablenode_ns_2_i_6170_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/Robotics/Types.xsd");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6170_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6170LU),
UA_NODEID_NUMERIC(ns[2], 6118LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6170_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6170LU)
);
}

/* Opc.Ua.Robotics - ns=2;i=6110 */
static const UA_Byte variablenode_ns_2_i_6110_variant_DataContents_byteArray[2170] = {60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 68, 73, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 82, 111, 98, 111, 116, 105, 99, 115, 47, 34, 13, 10, 32, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 34, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 34, 13, 10, 32, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 82, 111, 98, 111, 116, 105, 99, 115, 47, 34, 13, 10, 62, 13, 10, 32, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 34, 32, 76, 111, 99, 97, 116, 105, 111, 110, 61, 34, 79, 112, 99, 46, 85, 97, 46, 68, 105, 46, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 46, 98, 115, 100, 34, 47, 62, 13, 10, 32, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 32, 76, 111, 99, 97, 116, 105, 111, 110, 61, 34, 79, 112, 99, 46, 85, 97, 46, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 46, 98, 115, 100, 34, 47, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 69, 120, 101, 99, 117, 116, 105, 111, 110, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 67, 89, 67, 76, 69, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 67, 79, 78, 84, 73, 78, 85, 79, 85, 83, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 83, 84, 69, 80, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 77, 111, 116, 105, 111, 110, 68, 101, 118, 105, 99, 101, 67, 97, 116, 101, 103, 111, 114, 121, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 79, 84, 72, 69, 82, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 65, 82, 84, 73, 67, 85, 76, 65, 84, 69, 68, 95, 82, 79, 66, 79, 84, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 83, 67, 65, 82, 65, 95, 82, 79, 66, 79, 84, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 67, 65, 82, 84, 69, 83, 73, 65, 78, 95, 82, 79, 66, 79, 84, 34, 32, 86, 97, 108, 117, 101, 61, 34, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 83, 80, 72, 69, 82, 73, 67, 65, 76, 95, 82, 79, 66, 79, 84, 34, 32, 86, 97, 108, 117, 101, 61, 34, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 80, 65, 82, 65, 76, 76, 69, 76, 95, 82, 79, 66, 79, 84, 34, 32, 86, 97, 108, 117, 101, 61, 34, 53, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 67, 89, 76, 73, 78, 68, 82, 73, 67, 65, 76, 95, 82, 79, 66, 79, 84, 34, 32, 86, 97, 108, 117, 101, 61, 34, 54, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 65, 120, 105, 115, 77, 111, 116, 105, 111, 110, 80, 114, 111, 102, 105, 108, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 79, 84, 72, 69, 82, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 82, 79, 84, 65, 82, 89, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 82, 79, 84, 65, 82, 89, 95, 69, 78, 68, 76, 69, 83, 83, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 76, 73, 78, 69, 65, 82, 34, 32, 86, 97, 108, 117, 101, 61, 34, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 76, 73, 78, 69, 65, 82, 95, 69, 78, 68, 76, 69, 83, 83, 34, 32, 86, 97, 108, 117, 101, 61, 34, 52, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 79, 112, 101, 114, 97, 116, 105, 111, 110, 97, 108, 77, 111, 100, 101, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 79, 84, 72, 69, 82, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 77, 65, 78, 85, 65, 76, 95, 82, 69, 68, 85, 67, 69, 68, 95, 83, 80, 69, 69, 68, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 77, 65, 78, 85, 65, 76, 95, 72, 73, 71, 72, 95, 83, 80, 69, 69, 68, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 65, 85, 84, 79, 77, 65, 84, 73, 67, 34, 32, 86, 97, 108, 117, 101, 61, 34, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 65, 85, 84, 79, 77, 65, 84, 73, 67, 95, 69, 88, 84, 69, 82, 78, 65, 76, 34, 32, 86, 97, 108, 117, 101, 61, 34, 52, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62};



static UA_StatusCode function_namespace_robotics_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_2_i_6110_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_2_i_6110_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_2_i_6110_variant_DataContents);
variablenode_ns_2_i_6110_variant_DataContents->length = 2170;
variablenode_ns_2_i_6110_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_2_i_6110_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6110_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.Robotics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6110LU),
UA_NODEID_NUMERIC(ns[0], 93LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Opc.Ua.Robotics"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_2_i_6110_variant_DataContents->data = NULL;
variablenode_ns_2_i_6110_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_2_i_6110_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6110LU)
);
}

/* Deprecated - ns=2;i=15196 */

static UA_StatusCode function_namespace_robotics_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_2_i_15196_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_15196_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_15196_variant_DataContents);
*variablenode_ns_2_i_15196_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15196_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15196LU),
UA_NODEID_NUMERIC(ns[2], 6110LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_15196_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15196LU)
);
}

/* NamespaceUri - ns=2;i=6117 */

static UA_StatusCode function_namespace_robotics_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_6117_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6117_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6117_variant_DataContents);
*variablenode_ns_2_i_6117_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/Robotics/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6117_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6117LU),
UA_NODEID_NUMERIC(ns[2], 6110LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6117_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6117LU)
);
}

/* GearType - ns=2;i=1022 */

static UA_StatusCode function_namespace_robotics_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GearType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The GearType describes a gear in a power train, e.g. a gear box or a spindle.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1022LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "GearType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 1022LU), UA_NODEID_NUMERIC(ns[2], 18181LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 18764LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1022LU)
);
}

/* ProductCode - ns=2;i=17160 */

static UA_StatusCode function_namespace_robotics_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17160LU),
UA_NODEID_NUMERIC(ns[2], 1022LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17160LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17160LU)
);
}

/* Pitch - ns=2;i=17165 */

static UA_StatusCode function_namespace_robotics_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Pitch");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Pitch describes the distance covered in millimeters (mm) for linear motion per one revolution of the output side of the driving unit. Pitch is used in combination with GearRatio to describe the overall transmission from input to output of the gear.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17165LU),
UA_NODEID_NUMERIC(ns[2], 1022LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Pitch"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17165LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17165LU)
);
}

/* <GearIdentifier> - ns=2;i=18727 */

static UA_StatusCode function_namespace_robotics_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<GearIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "IsConnectedTo is a reference to provide the relationship between a motor and a gear of a power train.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18727LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[2], "<GearIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1022LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18727LU), UA_NODEID_NUMERIC(ns[2], 18181LU), UA_EXPANDEDNODEID_NUMERIC(ns[2], 1019LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18727LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18727LU)
);
}

/* GearRatio - ns=2;i=18761 */

static UA_StatusCode function_namespace_robotics_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18806LU);
attr.displayName = UA_LOCALIZEDTEXT("", "GearRatio");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The transmission ratio of the gear expressed as a fraction as input velocity (motor side) by output velocity (load side).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18761LU),
UA_NODEID_NUMERIC(ns[2], 18727LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "GearRatio"),
UA_NODEID_NUMERIC(ns[0], 17709LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18761LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18761LU)
);
}

/* Denominator - ns=2;i=15614 */

static UA_StatusCode function_namespace_robotics_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Denominator");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15614LU),
UA_NODEID_NUMERIC(ns[2], 18761LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Denominator"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15614LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15614LU)
);
}

/* Numerator - ns=2;i=15613 */

static UA_StatusCode function_namespace_robotics_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Numerator");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15613LU),
UA_NODEID_NUMERIC(ns[2], 18761LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Numerator"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15613LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15613LU)
);
}

/* Model - ns=2;i=18750 */

static UA_StatusCode function_namespace_robotics_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18750LU),
UA_NODEID_NUMERIC(ns[2], 18727LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18750LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18750LU)
);
}

/* SerialNumber - ns=2;i=18751 */

static UA_StatusCode function_namespace_robotics_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18751LU),
UA_NODEID_NUMERIC(ns[2], 18727LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18751LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18751LU)
);
}

/* ProductCode - ns=2;i=18756 */

static UA_StatusCode function_namespace_robotics_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18756LU),
UA_NODEID_NUMERIC(ns[2], 18727LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18756LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18756LU)
);
}

/* Manufacturer - ns=2;i=18748 */

static UA_StatusCode function_namespace_robotics_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18748LU),
UA_NODEID_NUMERIC(ns[2], 18727LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18748LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18748LU)
);
}

/* Model - ns=2;i=17154 */

static UA_StatusCode function_namespace_robotics_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17154LU),
UA_NODEID_NUMERIC(ns[2], 1022LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17154LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17154LU)
);
}

/* SerialNumber - ns=2;i=17155 */

static UA_StatusCode function_namespace_robotics_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17155LU),
UA_NODEID_NUMERIC(ns[2], 1022LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17155LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17155LU)
);
}

/* Manufacturer - ns=2;i=17152 */

static UA_StatusCode function_namespace_robotics_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17152LU),
UA_NODEID_NUMERIC(ns[2], 1022LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17152LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17152LU)
);
}

/* GearRatio - ns=2;i=15941 */

static UA_StatusCode function_namespace_robotics_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18806LU);
attr.displayName = UA_LOCALIZEDTEXT("", "GearRatio");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The transmission ratio of the gear expressed as a fraction as input velocity (motor side) by output velocity (load side).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15941LU),
UA_NODEID_NUMERIC(ns[2], 1022LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "GearRatio"),
UA_NODEID_NUMERIC(ns[0], 17709LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15941LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15941LU)
);
}

/* Denominator - ns=2;i=15616 */

static UA_StatusCode function_namespace_robotics_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Denominator");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15616LU),
UA_NODEID_NUMERIC(ns[2], 15941LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Denominator"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15616LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15616LU)
);
}

/* Numerator - ns=2;i=15615 */

static UA_StatusCode function_namespace_robotics_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Numerator");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15615LU),
UA_NODEID_NUMERIC(ns[2], 15941LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Numerator"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15615LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15615LU)
);
}

/* DriveType - ns=2;i=17793 */

static UA_StatusCode function_namespace_robotics_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DriveType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drives (multi-slot or single-slot axis amplifier) mounted in a controller cabinet or a motion device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 17793LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "DriveType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17793LU)
);
}

/* ProductCode - ns=2;i=17824 */

static UA_StatusCode function_namespace_robotics_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17824LU),
UA_NODEID_NUMERIC(ns[2], 17793LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17824LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17824LU)
);
}

/* PowerTrainType - ns=2;i=16794 */

static UA_StatusCode function_namespace_robotics_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrainType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The PowerTrainType represents instances of power trains of a motion device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 16794LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrainType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16794LU)
);
}

/* <PowerTrainIdentifier> - ns=2;i=18613 */

static UA_StatusCode function_namespace_robotics_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<PowerTrainIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HasSlave is a reference to provide the master-slave relationship of power trains which provide torque for a common axis. The InverseName is IsSlaveOf.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18613LU),
UA_NODEID_NUMERIC(ns[2], 16794LU),
UA_NODEID_NUMERIC(ns[2], 18183LU),
UA_QUALIFIEDNAME(ns[2], "<PowerTrainIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 16794LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18613LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18613LU)
);
}

/* <GearIdentifier> - ns=2;i=16041 */

static UA_StatusCode function_namespace_robotics_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<GearIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 16041LU),
UA_NODEID_NUMERIC(ns[2], 16794LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<GearIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1022LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16041LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16041LU)
);
}

/* ProductCode - ns=2;i=16068 */

static UA_StatusCode function_namespace_robotics_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16068LU),
UA_NODEID_NUMERIC(ns[2], 16041LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16068LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16068LU)
);
}

/* GearRatio - ns=2;i=16076 */

static UA_StatusCode function_namespace_robotics_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18806LU);
attr.displayName = UA_LOCALIZEDTEXT("", "GearRatio");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The transmission ratio of the gear expressed as a fraction as input velocity (motor side) by output velocity (load side).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16076LU),
UA_NODEID_NUMERIC(ns[2], 16041LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "GearRatio"),
UA_NODEID_NUMERIC(ns[0], 17709LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16076LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16076LU)
);
}

/* Denominator - ns=2;i=16078 */

static UA_StatusCode function_namespace_robotics_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Denominator");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16078LU),
UA_NODEID_NUMERIC(ns[2], 16076LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Denominator"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16078LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16078LU)
);
}

/* Numerator - ns=2;i=16077 */

static UA_StatusCode function_namespace_robotics_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Numerator");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16077LU),
UA_NODEID_NUMERIC(ns[2], 16076LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Numerator"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16077LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16077LU)
);
}

/* Manufacturer - ns=2;i=16062 */

static UA_StatusCode function_namespace_robotics_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16062LU),
UA_NODEID_NUMERIC(ns[2], 16041LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16062LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16062LU)
);
}

/* Model - ns=2;i=16064 */

static UA_StatusCode function_namespace_robotics_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16064LU),
UA_NODEID_NUMERIC(ns[2], 16041LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16064LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16064LU)
);
}

/* SerialNumber - ns=2;i=16071 */

static UA_StatusCode function_namespace_robotics_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16071LU),
UA_NODEID_NUMERIC(ns[2], 16041LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16071LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16071LU)
);
}

/* <MotorIdentifier> - ns=2;i=15998 */

static UA_StatusCode function_namespace_robotics_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MotorIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15998LU),
UA_NODEID_NUMERIC(ns[2], 16794LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<MotorIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1019LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15998LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15998LU)
);
}

/* ParameterSet - ns=2;i=15999 */

static UA_StatusCode function_namespace_robotics_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15999LU),
UA_NODEID_NUMERIC(ns[2], 15998LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15999LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15999LU)
);
}

/* MotorTemperature - ns=2;i=16034 */

static UA_StatusCode function_namespace_robotics_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotorTemperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The motor temperature provides the temperature of the motor. If there is no temperature sensor the value is set to \\\"null\\\".");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16034LU),
UA_NODEID_NUMERIC(ns[2], 15999LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotorTemperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16034LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16034LU)
);
}

/* EngineeringUnits - ns=2;i=16039 */

static UA_StatusCode function_namespace_robotics_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16039LU),
UA_NODEID_NUMERIC(ns[2], 16034LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16039LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16039LU)
);
}

/* Manufacturer - ns=2;i=16019 */

static UA_StatusCode function_namespace_robotics_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16019LU),
UA_NODEID_NUMERIC(ns[2], 15998LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16019LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16019LU)
);
}

/* SerialNumber - ns=2;i=16028 */

static UA_StatusCode function_namespace_robotics_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16028LU),
UA_NODEID_NUMERIC(ns[2], 15998LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16028LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16028LU)
);
}

/* ProductCode - ns=2;i=16025 */

static UA_StatusCode function_namespace_robotics_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16025LU),
UA_NODEID_NUMERIC(ns[2], 15998LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16025LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16025LU)
);
}

/* Model - ns=2;i=16021 */

static UA_StatusCode function_namespace_robotics_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16021LU),
UA_NODEID_NUMERIC(ns[2], 15998LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16021LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16021LU)
);
}

/* AuxiliaryComponentType - ns=2;i=17725 */

static UA_StatusCode function_namespace_robotics_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AuxiliaryComponentType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Components mounted in a controller cabinet or a motion device e.g. an IO-board or a power supply.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 17725LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "AuxiliaryComponentType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17725LU)
);
}

/* ProductCode - ns=2;i=17756 */

static UA_StatusCode function_namespace_robotics_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17756LU),
UA_NODEID_NUMERIC(ns[2], 17725LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17756LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17756LU)
);
}

/* EmergencyStopFunctionType - ns=2;i=17230 */

static UA_StatusCode function_namespace_robotics_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStopFunctionType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "According to ISO 10218-1:2011 Ch.5.5.2 Emergency stop the robot shall have one or more emergency stop functions.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 17230LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "EmergencyStopFunctionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17230LU)
);
}

/* Name - ns=2;i=17231 */

static UA_StatusCode function_namespace_robotics_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "The Name of the EmergencyStopFunctionType provides a manufacturer-specific emergency stop function identifier within the safety system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17231LU),
UA_NODEID_NUMERIC(ns[2], 17230LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17231LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17231LU)
);
}

/* <EmergencyStopFunctionIdentifier> - ns=2;i=18806 */

static UA_StatusCode function_namespace_robotics_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<EmergencyStopFunctionIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18806LU),
UA_NODEID_NUMERIC(ns[2], 17221LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<EmergencyStopFunctionIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 17230LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18806LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18806LU)
);
}

/* Active - ns=2;i=18808 */

static UA_StatusCode function_namespace_robotics_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Active");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Active variable is TRUE if this particular emergency stop function is active, e.g. that the emergency stop button is pressed, FALSE otherwise.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18808LU),
UA_NODEID_NUMERIC(ns[2], 18806LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Active"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18808LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18808LU)
);
}

/* Name - ns=2;i=18807 */

static UA_StatusCode function_namespace_robotics_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "The Name of the EmergencyStopFunctionType provides a manufacturer-specific emergency stop function identifier within the safety system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18807LU),
UA_NODEID_NUMERIC(ns[2], 18806LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18807LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18807LU)
);
}

/* Active - ns=2;i=17232 */

static UA_StatusCode function_namespace_robotics_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Active");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Active variable is TRUE if this particular emergency stop function is active, e.g. that the emergency stop button is pressed, FALSE otherwise.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17232LU),
UA_NODEID_NUMERIC(ns[2], 17230LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Active"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17232LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17232LU)
);
}

/* MotionDeviceType - ns=2;i=1004 */

static UA_StatusCode function_namespace_robotics_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents a specific motion device in the motion device system like a robot, a linear unit or a positioner. A MotionDevice should have at least one axis.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1004LU)
);
}

/* <MotionDeviceIdentifier> - ns=2;i=19254 */

static UA_StatusCode function_namespace_robotics_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MotionDeviceIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Controls is a reference to provide the relationship between a task control and a motion device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[2], 1011LU),
UA_NODEID_NUMERIC(ns[2], 4002LU),
UA_QUALIFIEDNAME(ns[2], "<MotionDeviceIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19254LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19254LU)
);
}

/* Manufacturer - ns=2;i=19275 */

static UA_StatusCode function_namespace_robotics_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 19275LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19275LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19275LU)
);
}

/* Axes - ns=2;i=19292 */

static UA_StatusCode function_namespace_robotics_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 19292LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19292LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19292LU)
);
}

/* Model - ns=2;i=19277 */

static UA_StatusCode function_namespace_robotics_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 19277LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19277LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19277LU)
);
}

/* PowerTrains - ns=2;i=19370 */

static UA_StatusCode function_namespace_robotics_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 19370LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19370LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19370LU)
);
}

/* MotionDeviceCategory - ns=2;i=19288 */

static UA_StatusCode function_namespace_robotics_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 19288LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19288LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19288LU)
);
}

/* ParameterSet - ns=2;i=19255 */

static UA_StatusCode function_namespace_robotics_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 19255LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19255LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19255LU)
);
}

/* SpeedOverride - ns=2;i=19291 */

static UA_StatusCode function_namespace_robotics_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 19291LU),
UA_NODEID_NUMERIC(ns[2], 19255LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19291LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19291LU)
);
}

/* SerialNumber - ns=2;i=19278 */

static UA_StatusCode function_namespace_robotics_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 19278LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19278LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19278LU)
);
}

/* ProductCode - ns=2;i=19283 */

static UA_StatusCode function_namespace_robotics_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 19283LU),
UA_NODEID_NUMERIC(ns[2], 19254LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19283LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19283LU)
);
}

/* Axes - ns=2;i=15305 */

static UA_StatusCode function_namespace_robotics_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15305LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15305LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15305LU)
);
}

/* <MotionDeviceIdentifier> - ns=2;i=18964 */

static UA_StatusCode function_namespace_robotics_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MotionDeviceIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The relationship of a motion device and controller.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[2], 4002LU),
UA_QUALIFIEDNAME(ns[2], "<MotionDeviceIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18964LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18964LU)
);
}

/* Axes - ns=2;i=19002 */

static UA_StatusCode function_namespace_robotics_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 19002LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19002LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19002LU)
);
}

/* ParameterSet - ns=2;i=18965 */

static UA_StatusCode function_namespace_robotics_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18965LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18965LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18965LU)
);
}

/* SpeedOverride - ns=2;i=19001 */

static UA_StatusCode function_namespace_robotics_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 19001LU),
UA_NODEID_NUMERIC(ns[2], 18965LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19001LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19001LU)
);
}

/* PowerTrains - ns=2;i=19080 */

static UA_StatusCode function_namespace_robotics_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 19080LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 19080LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 19080LU)
);
}

/* SerialNumber - ns=2;i=18988 */

static UA_StatusCode function_namespace_robotics_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18988LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18988LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18988LU)
);
}

/* MotionDeviceCategory - ns=2;i=18998 */

static UA_StatusCode function_namespace_robotics_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18998LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18998LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18998LU)
);
}

/* Manufacturer - ns=2;i=18985 */

static UA_StatusCode function_namespace_robotics_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18985LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18985LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18985LU)
);
}

/* Model - ns=2;i=18987 */

static UA_StatusCode function_namespace_robotics_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18987LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18987LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18987LU)
);
}

/* ProductCode - ns=2;i=18993 */

static UA_StatusCode function_namespace_robotics_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18993LU),
UA_NODEID_NUMERIC(ns[2], 18964LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18993LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18993LU)
);
}

/* PowerTrains - ns=2;i=16443 */

static UA_StatusCode function_namespace_robotics_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 16443LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16443LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16443LU)
);
}

/* <PowerTrainIdentifier> - ns=2;i=15905 */

static UA_StatusCode function_namespace_robotics_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<PowerTrainIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15905LU),
UA_NODEID_NUMERIC(ns[2], 16443LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<PowerTrainIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 16794LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15905LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15905LU)
);
}

/* ParameterSet - ns=2;i=5029 */

static UA_StatusCode function_namespace_robotics_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5029LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5029LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5029LU)
);
}

/* InControl - ns=2;i=16364 */

static UA_StatusCode function_namespace_robotics_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InControl");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "InControl provides the information if the actuators (in most cases a motor) of the motion device are powered up and in control: \"true\". The motion device might be in a standstill.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16364LU),
UA_NODEID_NUMERIC(ns[2], 5029LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "InControl"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16364LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16364LU)
);
}

/* SpeedOverride - ns=2;i=16365 */

static UA_StatusCode function_namespace_robotics_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16365LU),
UA_NODEID_NUMERIC(ns[2], 5029LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16365LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16365LU)
);
}

/* OnPath - ns=2;i=16363 */

static UA_StatusCode function_namespace_robotics_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OnPath");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OnPath is true if the motion device is on or near enough the planned program path such that program execution can continue. If the MotionDevice deviates too much from this path in case of errors or an emergency stop, this value becomes false. If OnPath is false, the motion device needs repositioning to continue program execution.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16363LU),
UA_NODEID_NUMERIC(ns[2], 5029LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "OnPath"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16363LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16363LU)
);
}

/* Model - ns=2;i=16353 */

static UA_StatusCode function_namespace_robotics_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16353LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16353LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16353LU)
);
}

/* Manufacturer - ns=2;i=16351 */

static UA_StatusCode function_namespace_robotics_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16351LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16351LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16351LU)
);
}

/* FlangeLoad - ns=2;i=5091 */

static UA_StatusCode function_namespace_robotics_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The FlangeLoad is the load on the flange or at the mounting point of the MotionDevice. This can be the maximum load of the MotionDevice.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5091LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "FlangeLoad"),
UA_NODEID_NUMERIC(ns[2], 1018LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5091LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5091LU)
);
}

/* Mass - ns=2;i=6624 */

static UA_StatusCode function_namespace_robotics_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Mass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6624LU),
UA_NODEID_NUMERIC(ns[2], 5091LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Mass"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6624LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6624LU)
);
}

/* EngineeringUnits - ns=2;i=15659 */

static UA_StatusCode function_namespace_robotics_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15659LU),
UA_NODEID_NUMERIC(ns[2], 6624LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15659LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15659LU)
);
}

/* MotionDeviceCategory - ns=2;i=16362 */

static UA_StatusCode function_namespace_robotics_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16362LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16362LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16362LU)
);
}

/* SerialNumber - ns=2;i=16354 */

static UA_StatusCode function_namespace_robotics_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16354LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16354LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16354LU)
);
}

/* <MotionDeviceIdentifier> - ns=2;i=15008 */

static UA_StatusCode function_namespace_robotics_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MotionDeviceIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[2], 5002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<MotionDeviceIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15008LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15008LU)
);
}

/* SerialNumber - ns=2;i=15048 */

static UA_StatusCode function_namespace_robotics_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15048LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15048LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15048LU)
);
}

/* MotionDeviceCategory - ns=2;i=15058 */

static UA_StatusCode function_namespace_robotics_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15058LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15058LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15058LU)
);
}

/* Model - ns=2;i=15047 */

static UA_StatusCode function_namespace_robotics_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15047LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15047LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15047LU)
);
}

/* ProductCode - ns=2;i=15053 */

static UA_StatusCode function_namespace_robotics_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15053LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15053LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15053LU)
);
}

/* Manufacturer - ns=2;i=15045 */

static UA_StatusCode function_namespace_robotics_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15045LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15045LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15045LU)
);
}

/* ParameterSet - ns=2;i=15024 */

static UA_StatusCode function_namespace_robotics_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15024LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15024LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15024LU)
);
}

/* SpeedOverride - ns=2;i=15061 */

static UA_StatusCode function_namespace_robotics_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15061LU),
UA_NODEID_NUMERIC(ns[2], 15024LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15061LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15061LU)
);
}

/* PowerTrains - ns=2;i=15208 */

static UA_StatusCode function_namespace_robotics_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15208LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15208LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15208LU)
);
}

/* Axes - ns=2;i=15062 */

static UA_StatusCode function_namespace_robotics_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15062LU),
UA_NODEID_NUMERIC(ns[2], 15008LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15062LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15062LU)
);
}

/* ProductCode - ns=2;i=16359 */

static UA_StatusCode function_namespace_robotics_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16359LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16359LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16359LU)
);
}

/* AdditionalComponents - ns=2;i=16566 */

static UA_StatusCode function_namespace_robotics_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AdditionalComponents");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AdditionalComponents is a container for one or more instances of subtypes of ComponentType defined in OPC UA DI. The listed components are installed at the motion device, e.g. an IO-board.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 16566LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "AdditionalComponents"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16566LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16566LU)
);
}

/* <AdditionalComponentIdentifier> - ns=2;i=18310 */

static UA_StatusCode function_namespace_robotics_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AdditionalComponentIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18310LU),
UA_NODEID_NUMERIC(ns[2], 16566LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<AdditionalComponentIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 15063LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18310LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15035LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18310LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18310LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15048LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18310LU)
);
}

/* AxisType - ns=2;i=16601 */

static UA_StatusCode function_namespace_robotics_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The AxisType describes an axis of a motion device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 16601LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "AxisType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16601LU)
);
}

/* AdditionalLoad - ns=2;i=16638 */

static UA_StatusCode function_namespace_robotics_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AdditionalLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The additional load which is mounted on this axis. E.g. for process-need a transformer for welding.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 16638LU),
UA_NODEID_NUMERIC(ns[2], 16601LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "AdditionalLoad"),
UA_NODEID_NUMERIC(ns[2], 1018LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16638LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16638LU)
);
}

/* Mass - ns=2;i=16639 */

static UA_StatusCode function_namespace_robotics_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Mass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16639LU),
UA_NODEID_NUMERIC(ns[2], 16638LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Mass"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16639LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16639LU)
);
}

/* EngineeringUnits - ns=2;i=16644 */

static UA_StatusCode function_namespace_robotics_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16644LU),
UA_NODEID_NUMERIC(ns[2], 16639LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16644LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16644LU)
);
}

/* ParameterSet - ns=2;i=16602 */

static UA_StatusCode function_namespace_robotics_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 16602LU),
UA_NODEID_NUMERIC(ns[2], 16601LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16602LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16602LU)
);
}

/* ActualAcceleration - ns=2;i=16674 */

static UA_StatusCode function_namespace_robotics_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualAcceleration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", ": The ActualAcceleration variable provides the axis acceleration. Applicable acceleration limits of the axis shall be provided by the EURange property of the AnalogUnitType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16674LU),
UA_NODEID_NUMERIC(ns[2], 16602LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualAcceleration"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16674LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16674LU)
);
}

/* EngineeringUnits - ns=2;i=16679 */

static UA_StatusCode function_namespace_robotics_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16679LU),
UA_NODEID_NUMERIC(ns[2], 16674LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16679LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16679LU)
);
}

/* ActualPosition - ns=2;i=16662 */

static UA_StatusCode function_namespace_robotics_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The axis position inclusive Unit and RangeOfMotion.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16662LU),
UA_NODEID_NUMERIC(ns[2], 16602LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16662LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16662LU)
);
}

/* EngineeringUnits - ns=2;i=16667 */

static UA_StatusCode function_namespace_robotics_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16667LU),
UA_NODEID_NUMERIC(ns[2], 16662LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16667LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16667LU)
);
}

/* ActualSpeed - ns=2;i=16668 */

static UA_StatusCode function_namespace_robotics_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The axis speed on load side (after gear/spindle) inclusive Unit.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16668LU),
UA_NODEID_NUMERIC(ns[2], 16602LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16668LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16668LU)
);
}

/* EngineeringUnits - ns=2;i=16673 */

static UA_StatusCode function_namespace_robotics_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16673LU),
UA_NODEID_NUMERIC(ns[2], 16668LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16673LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16673LU)
);
}

/* <PowerTrainIdentifier> - ns=2;i=18344 */

static UA_StatusCode function_namespace_robotics_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<PowerTrainIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Requires reference provides the relationship of axes to power trains. For complex kinematics this does not need to be a one to one relationship, because more than one power train might influence the motion of one axis. This reference connects all power trains to an axis that must be actively driven when only this axis should move and all other axes should stand still. Virtual axes that are not actively driven by a power train do not have this reference.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18344LU),
UA_NODEID_NUMERIC(ns[2], 16601LU),
UA_NODEID_NUMERIC(ns[2], 18179LU),
UA_QUALIFIEDNAME(ns[2], "<PowerTrainIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 16794LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18344LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18344LU)
);
}

/* <AxisIdentifier> - ns=2;i=18536 */

static UA_StatusCode function_namespace_robotics_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AxisIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Moves is a reference to provide the relationship of power trains to axes. For complex kinematics this does not need to be a one to one relationship, because a power train might influence the motion of more than one axis. This reference connects all axis to a power train that that move when only this power train moves and all other powertains stand still.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18536LU),
UA_NODEID_NUMERIC(ns[2], 16794LU),
UA_NODEID_NUMERIC(ns[2], 18178LU),
UA_QUALIFIEDNAME(ns[2], "<AxisIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18536LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18536LU)
);
}

/* MotionProfile - ns=2;i=18570 */

static UA_StatusCode function_namespace_robotics_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18570LU),
UA_NODEID_NUMERIC(ns[2], 18536LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18570LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18570LU)
);
}

/* ParameterSet - ns=2;i=18537 */

static UA_StatusCode function_namespace_robotics_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18537LU),
UA_NODEID_NUMERIC(ns[2], 18536LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18537LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18537LU)
);
}

/* ActualPosition - ns=2;i=18595 */

static UA_StatusCode function_namespace_robotics_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The axis position inclusive Unit and RangeOfMotion.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18595LU),
UA_NODEID_NUMERIC(ns[2], 18537LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18595LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18595LU)
);
}

/* EngineeringUnits - ns=2;i=18600 */

static UA_StatusCode function_namespace_robotics_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18600LU),
UA_NODEID_NUMERIC(ns[2], 18595LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18600LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18600LU)
);
}

/* MotionProfile - ns=2;i=16637 */

static UA_StatusCode function_namespace_robotics_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 16637LU),
UA_NODEID_NUMERIC(ns[2], 16601LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 16637LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 16637LU)
);
}

/* <AxisIdentifier> - ns=2;i=15743 */

static UA_StatusCode function_namespace_robotics_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AxisIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15743LU),
UA_NODEID_NUMERIC(ns[2], 15305LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<AxisIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15743LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15743LU)
);
}

/* ParameterSet - ns=2;i=15744 */

static UA_StatusCode function_namespace_robotics_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15744LU),
UA_NODEID_NUMERIC(ns[2], 15743LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15744LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15744LU)
);
}

/* ActualPosition - ns=2;i=15863 */

static UA_StatusCode function_namespace_robotics_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The axis position inclusive Unit and RangeOfMotion.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15863LU),
UA_NODEID_NUMERIC(ns[2], 15744LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15863LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15863LU)
);
}

/* EngineeringUnits - ns=2;i=15869 */

static UA_StatusCode function_namespace_robotics_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15869LU),
UA_NODEID_NUMERIC(ns[2], 15863LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15869LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15869LU)
);
}

/* MotionProfile - ns=2;i=15808 */

static UA_StatusCode function_namespace_robotics_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15808LU),
UA_NODEID_NUMERIC(ns[2], 15743LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 15808LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15808LU)
);
}

/* ProtectiveStopFunctionType - ns=2;i=17233 */

static UA_StatusCode function_namespace_robotics_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProtectiveStopFunctionType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "According to ISO 10218-1:2011 Ch.5.5.3 the robot shall have one or more protective stop functions designed for the connection of external protective devices.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 17233LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[2], "ProtectiveStopFunctionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17233LU)
);
}

/* <ProtectiveStopFunctionIdentifier> - ns=2;i=18809 */

static UA_StatusCode function_namespace_robotics_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ProtectiveStopFunctionIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 18809LU),
UA_NODEID_NUMERIC(ns[2], 17225LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "<ProtectiveStopFunctionIdentifier>"),
UA_NODEID_NUMERIC(ns[2], 17233LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18809LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18809LU)
);
}

/* Name - ns=2;i=18810 */

static UA_StatusCode function_namespace_robotics_generated_247_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "The Name of the ProtectiveStopFunctionType provides a manufacturer-specific protective stop function identifier within the safety system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18810LU),
UA_NODEID_NUMERIC(ns[2], 18809LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18810LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18810LU)
);
}

/* Enabled - ns=2;i=18811 */

static UA_StatusCode function_namespace_robotics_generated_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Enabled");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "–	The Enabled variable is TRUE if this protective stop function is currently supervising the system, FALSE otherwise. A protective stop function may or may not be enabled at all times, e.g. the protective stop function of the safety doors are typically enabled in automatic operational mode and disabled in manual mode. On the other hand for example, the protective stop function of the teach pendant enabling device is enabled in manual modes and disabled in automatic modes.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18811LU),
UA_NODEID_NUMERIC(ns[2], 18809LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Enabled"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18811LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18811LU)
);
}

/* Active - ns=2;i=18812 */

static UA_StatusCode function_namespace_robotics_generated_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Active");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "–	The Active variable is TRUE if this particular protective stop function is active, i.e. that a stop is initiated, FALSE otherwise. If Enabled is FALSE then Active shall be FALSE.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 18812LU),
UA_NODEID_NUMERIC(ns[2], 18809LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Active"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 18812LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 18812LU)
);
}

/* Enabled - ns=2;i=17235 */

static UA_StatusCode function_namespace_robotics_generated_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Enabled");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "–	The Enabled variable is TRUE if this protective stop function is currently supervising the system, FALSE otherwise. A protective stop function may or may not be enabled at all times, e.g. the protective stop function of the safety doors are typically enabled in automatic operational mode and disabled in manual mode. On the other hand for example, the protective stop function of the teach pendant enabling device is enabled in manual modes and disabled in automatic modes.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17235LU),
UA_NODEID_NUMERIC(ns[2], 17233LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Enabled"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17235LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17235LU)
);
}

/* Active - ns=2;i=17236 */

static UA_StatusCode function_namespace_robotics_generated_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Active");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "–	The Active variable is TRUE if this particular protective stop function is active, i.e. that a stop is initiated, FALSE otherwise. If Enabled is FALSE then Active shall be FALSE.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17236LU),
UA_NODEID_NUMERIC(ns[2], 17233LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Active"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17236LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17236LU)
);
}

/* Name - ns=2;i=17234 */

static UA_StatusCode function_namespace_robotics_generated_252_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "The Name of the ProtectiveStopFunctionType provides a manufacturer-specific protective stop function identifier within the safety system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 17234LU),
UA_NODEID_NUMERIC(ns[2], 17233LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 17234LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 17234LU)
);
}

/* http://opcfoundation.org/UA/Robotics/ - ns=2;i=15011 */

static UA_StatusCode function_namespace_robotics_generated_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://opcfoundation.org/UA/Robotics/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "http://opcfoundation.org/UA/Robotics/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15011LU)
);
}

/* DefaultAccessRestrictions - ns=2;i=15585 */

static UA_StatusCode function_namespace_robotics_generated_254_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[2], 15585LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultAccessRestrictions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15585LU)
);
}

/* DefaultUserRolePermissions - ns=2;i=15584 */

static UA_StatusCode function_namespace_robotics_generated_255_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[2], 15584LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultUserRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15584LU)
);
}

/* NamespaceVersion - ns=2;i=15064 */

static UA_StatusCode function_namespace_robotics_generated_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_15064_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_15064_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_15064_variant_DataContents);
*variablenode_ns_2_i_15064_variant_DataContents = UA_STRING_ALLOC("0.93");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15064_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15064LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_15064_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15064LU)
);
}

/* DefaultRolePermissions - ns=2;i=15583 */

static UA_StatusCode function_namespace_robotics_generated_257_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[2], 15583LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15583LU)
);
}

/* StaticNodeIdTypes - ns=2;i=15145 */

static UA_StatusCode function_namespace_robotics_generated_258_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_Int32 variablenode_ns_2_i_15145_variant_DataContents[1];
variablenode_ns_2_i_15145_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_15145_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15145LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15145LU)
);
}

/* NamespaceUri - ns=2;i=15034 */

static UA_StatusCode function_namespace_robotics_generated_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_15034_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_15034_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_15034_variant_DataContents);
*variablenode_ns_2_i_15034_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/Robotics/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15034_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15034LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_15034_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15034LU)
);
}

/* NamespacePublicationDate - ns=2;i=15091 */

static UA_StatusCode function_namespace_robotics_generated_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_2_i_15091_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_2_i_15091_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_2_i_15091_variant_DataContents);
*variablenode_ns_2_i_15091_variant_DataContents = ( (UA_DateTime)(1548201600000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15091_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15091LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_2_i_15091_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15091LU)
);
}

/* IsNamespaceSubset - ns=2;i=15114 */

static UA_StatusCode function_namespace_robotics_generated_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_2_i_15114_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_15114_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_15114_variant_DataContents);
*variablenode_ns_2_i_15114_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15114_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15114LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_15114_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15114LU)
);
}

/* StaticNumericNodeIdRange - ns=2;i=15173 */

static UA_StatusCode function_namespace_robotics_generated_262_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_String variablenode_ns_2_i_15173_variant_DataContents[1];
variablenode_ns_2_i_15173_variant_DataContents[0] = UA_STRING("1:65535");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_15173_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15173LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15173LU)
);
}

/* StaticStringNodeIdPattern - ns=2;i=15209 */

static UA_StatusCode function_namespace_robotics_generated_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_15209_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_15209_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_15209_variant_DataContents);
*variablenode_ns_2_i_15209_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_15209_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 15209LU),
UA_NODEID_NUMERIC(ns[2], 15011LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_15209_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_robotics_generated_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 15209LU)
);
}

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

UA_StatusCode namespace_robotics_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/Robotics/");

/* Load custom datatype definitions into the server */
if(UA_TYPES_DI_COUNT > 0) {
customUA_TYPES_DI.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_DI;

}
if(UA_TYPES_ROBOTICS_COUNT > 0) {
customUA_TYPES_ROBOTICS.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_ROBOTICS;

}
bool dummy = (
!(retVal = function_namespace_robotics_generated_0_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_0_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_1_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_1_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_2_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_3_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_4_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_5_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_6_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_6_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_7_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_7_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_8_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_8_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_9_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_9_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_10_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_10_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_11_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_12_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_13_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_14_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_15_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_16_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_17_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_18_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_19_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_20_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_21_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_22_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_23_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_24_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_25_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_26_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_27_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_28_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_29_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_30_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_31_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_32_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_33_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_34_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_35_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_36_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_37_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_38_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_39_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_40_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_41_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_42_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_43_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_44_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_45_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_46_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_47_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_48_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_49_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_50_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_51_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_52_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_53_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_54_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_55_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_56_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_57_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_58_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_59_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_60_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_61_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_62_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_63_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_64_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_65_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_66_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_67_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_68_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_69_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_70_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_71_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_72_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_73_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_74_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_75_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_76_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_77_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_78_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_79_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_80_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_81_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_82_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_83_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_84_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_85_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_86_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_87_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_88_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_89_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_90_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_91_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_92_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_93_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_94_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_95_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_96_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_97_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_98_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_99_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_100_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_101_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_102_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_103_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_104_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_105_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_106_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_107_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_108_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_109_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_110_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_111_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_112_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_113_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_114_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_115_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_116_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_117_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_118_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_119_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_120_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_121_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_122_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_123_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_124_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_125_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_126_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_127_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_128_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_129_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_130_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_131_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_132_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_133_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_134_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_135_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_136_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_137_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_138_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_139_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_140_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_141_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_142_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_143_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_144_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_145_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_146_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_147_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_148_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_149_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_150_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_151_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_152_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_153_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_154_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_155_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_156_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_157_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_158_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_159_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_160_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_161_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_162_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_163_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_164_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_165_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_166_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_167_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_168_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_169_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_170_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_171_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_172_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_173_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_174_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_175_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_176_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_177_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_178_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_179_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_180_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_181_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_182_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_183_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_184_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_185_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_186_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_187_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_188_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_189_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_190_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_191_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_192_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_193_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_194_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_195_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_196_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_197_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_198_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_199_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_200_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_201_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_202_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_203_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_204_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_205_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_206_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_207_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_208_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_209_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_210_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_211_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_212_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_213_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_214_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_215_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_216_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_217_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_218_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_219_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_220_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_221_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_222_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_223_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_224_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_225_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_226_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_227_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_228_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_229_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_230_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_231_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_232_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_233_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_234_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_235_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_236_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_237_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_238_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_239_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_240_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_241_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_242_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_243_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_244_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_245_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_246_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_247_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_248_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_249_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_250_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_251_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_252_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_253_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_254_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_255_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_256_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_257_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_258_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_259_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_260_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_261_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_262_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_263_begin(server, ns))
&& !(retVal = function_namespace_robotics_generated_263_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_262_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_261_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_260_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_259_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_258_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_257_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_256_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_255_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_254_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_253_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_252_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_251_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_250_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_249_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_248_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_247_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_246_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_245_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_244_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_243_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_242_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_241_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_240_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_239_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_238_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_237_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_236_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_235_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_234_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_233_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_232_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_231_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_230_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_229_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_228_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_227_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_226_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_225_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_224_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_223_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_222_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_221_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_220_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_219_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_218_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_217_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_216_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_215_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_214_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_213_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_212_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_211_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_210_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_209_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_208_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_207_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_206_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_205_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_204_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_203_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_202_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_201_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_200_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_199_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_198_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_197_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_196_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_195_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_194_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_193_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_192_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_191_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_190_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_189_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_188_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_187_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_186_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_185_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_184_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_183_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_182_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_181_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_180_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_179_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_178_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_177_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_176_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_175_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_174_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_173_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_172_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_171_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_170_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_169_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_168_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_167_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_166_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_165_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_164_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_163_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_162_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_161_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_160_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_159_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_158_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_157_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_156_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_155_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_154_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_153_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_152_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_151_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_150_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_149_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_148_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_147_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_146_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_145_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_144_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_143_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_142_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_141_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_140_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_139_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_138_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_137_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_136_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_135_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_134_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_133_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_132_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_131_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_130_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_129_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_128_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_127_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_126_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_125_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_124_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_123_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_122_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_121_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_120_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_119_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_118_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_117_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_116_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_115_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_114_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_113_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_112_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_111_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_110_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_109_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_108_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_107_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_106_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_105_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_104_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_103_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_102_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_101_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_100_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_99_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_98_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_97_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_96_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_95_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_94_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_93_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_92_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_91_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_90_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_89_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_88_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_87_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_86_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_85_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_84_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_83_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_82_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_81_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_80_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_79_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_78_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_77_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_76_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_75_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_74_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_73_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_72_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_71_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_70_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_69_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_68_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_67_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_66_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_65_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_64_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_63_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_62_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_61_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_60_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_59_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_58_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_57_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_56_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_55_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_54_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_53_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_52_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_51_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_50_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_49_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_48_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_47_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_46_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_45_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_44_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_43_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_42_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_41_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_40_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_39_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_38_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_37_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_36_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_35_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_34_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_33_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_32_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_31_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_30_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_29_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_28_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_27_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_26_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_25_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_24_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_23_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_22_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_21_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_20_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_19_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_18_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_17_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_16_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_15_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_14_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_13_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_12_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_11_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_5_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_4_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_3_finish(server, ns))
&& !(retVal = function_namespace_robotics_generated_2_finish(server, ns))
); (void)(dummy);
return retVal;
}
