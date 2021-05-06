/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_kuka_iiwa_generated.h"


/* IiwaMotionSystem - ns=5;i=15001 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = true;
attr.displayName = UA_LOCALIZEDTEXT("", "IiwaMotionSystem");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Iiwa Robot");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15001LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[5], "IiwaMotionSystem"),
UA_NODEID_NUMERIC(ns[2], 1002LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15001LU)
);
}

/* SafetyStates - ns=5;i=15440 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15440LU),
UA_NODEID_NUMERIC(ns[5], 15001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15440LU)
);
}

/* Controllers - ns=5;i=15257 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15257LU),
UA_NODEID_NUMERIC(ns[5], 15001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15257LU)
);
}

/* Iiwa Controller - ns=5;i=16428 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Iiwa Controller");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[5], 15257LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "Iiwa Controller"),
UA_NODEID_NUMERIC(ns[2], 1003LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[5], 16428LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 15396LU), true);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16428LU)
);
}

/* TaskControls - ns=5;i=16538 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16538LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16538LU)
);
}

/* Model - ns=5;i=16451 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16451LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16451LU)
);
}

/* ProductCode - ns=5;i=16455 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16455LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16455LU)
);
}

/* Manufacturer - ns=5;i=16449 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16449LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16449LU)
);
}

/* SerialNumber - ns=5;i=16458 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16458LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16458LU)
);
}

/* Software - ns=5;i=16502 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16502LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16502LU)
);
}

/* Skills - ns=5;i=16610 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Skills");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16610LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Skills"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16610LU)
);
}

/* CartesianLinearMoveSkill - ns=5;i=16767 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CartesianLinearMoveSkill");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[5], 16610LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "CartesianLinearMoveSkill"),
UA_NODEID_NUMERIC(ns[4], 15295LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[5], 16767LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15265LU), true);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16767LU)
);
}

/* CurrentState - ns=5;i=16768 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16768LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16768LU)
);
}

/* Number - ns=5;i=16771 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16771LU),
UA_NODEID_NUMERIC(ns[5], 16768LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16771LU)
);
}

/* Id - ns=5;i=16769 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16769LU),
UA_NODEID_NUMERIC(ns[5], 16768LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16769LU)
);
}

/* Name - ns=5;i=16798 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16798LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16798LU)
);
}

/* MaxInstanceCount - ns=5;i=16799 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16799LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16799LU)
);
}

/* SuspendedToReady - ns=5;i=16822 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16822LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16822LU)
);
}

/* TransitionNumber - ns=5;i=16823 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16823LU),
UA_NODEID_NUMERIC(ns[5], 16822LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16823LU)
);
}

/* SuspendedToHalted - ns=5;i=16820 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16820LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16820LU)
);
}

/* TransitionNumber - ns=5;i=16821 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16821LU),
UA_NODEID_NUMERIC(ns[5], 16820LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16821LU)
);
}

/* Reset - ns=5;i=16827 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16827LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16827LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ReadyToRunning - ns=5;i=16808 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16808LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16808LU)
);
}

/* TransitionNumber - ns=5;i=16809 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16809LU),
UA_NODEID_NUMERIC(ns[5], 16808LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16809LU)
);
}

/* SuspendedToRunning - ns=5;i=16824 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16824LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16824LU)
);
}

/* TransitionNumber - ns=5;i=16825 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16825LU),
UA_NODEID_NUMERIC(ns[5], 16824LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16825LU)
);
}

/* RecycleCount - ns=5;i=16783 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16783LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16783LU)
);
}

/* Ready - ns=5;i=16804 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16804LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16804LU)
);
}

/* StateNumber - ns=5;i=16805 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16805LU),
UA_NODEID_NUMERIC(ns[5], 16804LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16805LU)
);
}

/* Suspend - ns=5;i=16829 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16829LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16829LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Resume - ns=5;i=16828 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16828LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16828LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Halted - ns=5;i=16800 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16800LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16800LU)
);
}

/* StateNumber - ns=5;i=16801 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16801LU),
UA_NODEID_NUMERIC(ns[5], 16800LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16801LU)
);
}

/* HaltedToReady - ns=5;i=16802 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16802LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16802LU)
);
}

/* TransitionNumber - ns=5;i=16803 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16803LU),
UA_NODEID_NUMERIC(ns[5], 16802LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16803LU)
);
}

/* Halt - ns=5;i=16826 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16826LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16826LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AutoDelete - ns=5;i=16782 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16782LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16782LU)
);
}

/* LastTransition - ns=5;i=16773 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16773LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16773LU)
);
}

/* TransitionTime - ns=5;i=16777 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16777LU),
UA_NODEID_NUMERIC(ns[5], 16773LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16777LU)
);
}

/* Id - ns=5;i=16774 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16774LU),
UA_NODEID_NUMERIC(ns[5], 16773LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16774LU)
);
}

/* Number - ns=5;i=16776 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16776LU),
UA_NODEID_NUMERIC(ns[5], 16773LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16776LU)
);
}

/* Deletable - ns=5;i=16781 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16781LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16781LU)
);
}

/* ReadyToHalted - ns=5;i=16806 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16806LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16806LU)
);
}

/* TransitionNumber - ns=5;i=16807 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16807LU),
UA_NODEID_NUMERIC(ns[5], 16806LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16807LU)
);
}

/* Start - ns=5;i=16830 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16830LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16830LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ParameterSet - ns=5;i=16831 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16831LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16831LU)
);
}

/* AxisBounds - ns=5;i=16923 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AxisBounds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16923LU),
UA_NODEID_NUMERIC(ns[5], 16831LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "AxisBounds"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16923LU)
);
}

/* ToolFrame - ns=5;i=16832 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ToolFrame");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The name of the tool frame to be used for the motion");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16832LU),
UA_NODEID_NUMERIC(ns[5], 16831LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "ToolFrame"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16832LU)
);
}

/* MaxAcceleration - ns=5;i=16833 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxAcceleration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum acceleration of the robot should move. First three parameters are for x,y,z in m/s^2. The next three for orientation in rad/s^2");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16833LU),
UA_NODEID_NUMERIC(ns[5], 16831LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxAcceleration"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16833LU)
);
}

/* EURange - ns=5;i=16837 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16837LU),
UA_NODEID_NUMERIC(ns[5], 16833LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16837LU)
);
}

/* MaxVelocity - ns=5;i=16839 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxVelocity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum velocity of the robot should move. First three parameters are for x,y,z in m/s. The next three for orientation in rad/s");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16839LU),
UA_NODEID_NUMERIC(ns[5], 16831LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxVelocity"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16839LU)
);
}

/* EURange - ns=5;i=16843 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16843LU),
UA_NODEID_NUMERIC(ns[5], 16839LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16843LU)
);
}

/* Suspended - ns=5;i=16818 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16818LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16818LU)
);
}

/* StateNumber - ns=5;i=16819 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16819LU),
UA_NODEID_NUMERIC(ns[5], 16818LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16819LU)
);
}

/* RunningToHalted - ns=5;i=16812 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16812LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16812LU)
);
}

/* TransitionNumber - ns=5;i=16813 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16813LU),
UA_NODEID_NUMERIC(ns[5], 16812LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16813LU)
);
}

/* Running - ns=5;i=16810 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16810LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16810LU)
);
}

/* StateNumber - ns=5;i=16811 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16811LU),
UA_NODEID_NUMERIC(ns[5], 16810LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16811LU)
);
}

/* RunningToSuspended - ns=5;i=16816 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16816LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16816LU)
);
}

/* TransitionNumber - ns=5;i=16817 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16817LU),
UA_NODEID_NUMERIC(ns[5], 16816LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16817LU)
);
}

/* RunningToReady - ns=5;i=16814 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16814LU),
UA_NODEID_NUMERIC(ns[5], 16767LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16814LU)
);
}

/* TransitionNumber - ns=5;i=16815 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16815LU),
UA_NODEID_NUMERIC(ns[5], 16814LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16815LU)
);
}

/* JointLinearMoveSkill - ns=5;i=16611 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JointLinearMoveSkill");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[5], 16610LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "JointLinearMoveSkill"),
UA_NODEID_NUMERIC(ns[4], 15376LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[5], 16611LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15287LU), true);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16611LU)
);
}

/* Suspended - ns=5;i=16662 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16662LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16662LU)
);
}

/* StateNumber - ns=5;i=16663 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16663LU),
UA_NODEID_NUMERIC(ns[5], 16662LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16663LU)
);
}

/* RunningToReady - ns=5;i=16658 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16658LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16658LU)
);
}

/* TransitionNumber - ns=5;i=16659 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16659LU),
UA_NODEID_NUMERIC(ns[5], 16658LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16659LU)
);
}

/* RunningToSuspended - ns=5;i=16660 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16660LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16660LU)
);
}

/* TransitionNumber - ns=5;i=16661 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16661LU),
UA_NODEID_NUMERIC(ns[5], 16660LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16661LU)
);
}

/* SuspendedToReady - ns=5;i=16666 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16666LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16666LU)
);
}

/* TransitionNumber - ns=5;i=16667 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16667LU),
UA_NODEID_NUMERIC(ns[5], 16666LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16667LU)
);
}

/* SuspendedToHalted - ns=5;i=16664 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16664LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16664LU)
);
}

/* TransitionNumber - ns=5;i=16665 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16665LU),
UA_NODEID_NUMERIC(ns[5], 16664LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16665LU)
);
}

/* Halted - ns=5;i=16644 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16644LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16644LU)
);
}

/* StateNumber - ns=5;i=16645 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16645LU),
UA_NODEID_NUMERIC(ns[5], 16644LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16645LU)
);
}

/* HaltedToReady - ns=5;i=16646 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16646LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16646LU)
);
}

/* TransitionNumber - ns=5;i=16647 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16647LU),
UA_NODEID_NUMERIC(ns[5], 16646LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16647LU)
);
}

/* Ready - ns=5;i=16648 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16648LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16648LU)
);
}

/* StateNumber - ns=5;i=16649 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16649LU),
UA_NODEID_NUMERIC(ns[5], 16648LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16649LU)
);
}

/* SuspendedToRunning - ns=5;i=16668 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16668LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16668LU)
);
}

/* TransitionNumber - ns=5;i=16669 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16669LU),
UA_NODEID_NUMERIC(ns[5], 16668LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16669LU)
);
}

/* CurrentState - ns=5;i=16612 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16612LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16612LU)
);
}

/* Id - ns=5;i=16613 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16613LU),
UA_NODEID_NUMERIC(ns[5], 16612LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16613LU)
);
}

/* Number - ns=5;i=16615 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16615LU),
UA_NODEID_NUMERIC(ns[5], 16612LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16615LU)
);
}

/* LastTransition - ns=5;i=16617 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16617LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16617LU)
);
}

/* Id - ns=5;i=16618 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16618LU),
UA_NODEID_NUMERIC(ns[5], 16617LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16618LU)
);
}

/* Number - ns=5;i=16620 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16620LU),
UA_NODEID_NUMERIC(ns[5], 16617LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16620LU)
);
}

/* TransitionTime - ns=5;i=16621 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16621LU),
UA_NODEID_NUMERIC(ns[5], 16617LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16621LU)
);
}

/* Deletable - ns=5;i=16625 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16625LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16625LU)
);
}

/* AutoDelete - ns=5;i=16626 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16626LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16626LU)
);
}

/* RecycleCount - ns=5;i=16627 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16627LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16627LU)
);
}

/* Name - ns=5;i=16642 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16642LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16642LU)
);
}

/* MaxInstanceCount - ns=5;i=16643 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16643LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16643LU)
);
}

/* Start - ns=5;i=16674 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16674LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16674LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ParameterSet - ns=5;i=16675 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16675LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16675LU)
);
}

/* ToolFrame - ns=5;i=16676 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ToolFrame");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The name of the tool frame to be used for the motion");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16676LU),
UA_NODEID_NUMERIC(ns[5], 16675LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "ToolFrame"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16676LU)
);
}

/* MaxAcceleration - ns=5;i=16677 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxAcceleration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum acceleration of the robot should move. First three parameters are for x,y,z in m/s^2. The next three for orientation in rad/s^2");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16677LU),
UA_NODEID_NUMERIC(ns[5], 16675LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxAcceleration"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16677LU)
);
}

/* EURange - ns=5;i=16681 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16681LU),
UA_NODEID_NUMERIC(ns[5], 16677LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16681LU)
);
}

/* MaxVelocity - ns=5;i=16683 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxVelocity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum velocity of the robot should move. First three parameters are for x,y,z in m/s. The next three for orientation in rad/s");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16683LU),
UA_NODEID_NUMERIC(ns[5], 16675LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxVelocity"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16683LU)
);
}

/* EURange - ns=5;i=16687 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16687LU),
UA_NODEID_NUMERIC(ns[5], 16683LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16687LU)
);
}

/* Halt - ns=5;i=16670 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16670LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16670LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Reset - ns=5;i=16671 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16671LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16671LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Resume - ns=5;i=16672 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16672LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16672LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspend - ns=5;i=16673 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16673LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16673LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RunningToHalted - ns=5;i=16656 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16656LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16656LU)
);
}

/* TransitionNumber - ns=5;i=16657 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16657LU),
UA_NODEID_NUMERIC(ns[5], 16656LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16657LU)
);
}

/* Running - ns=5;i=16654 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16654LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16654LU)
);
}

/* StateNumber - ns=5;i=16655 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16655LU),
UA_NODEID_NUMERIC(ns[5], 16654LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16655LU)
);
}

/* ReadyToRunning - ns=5;i=16652 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16652LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16652LU)
);
}

/* TransitionNumber - ns=5;i=16653 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16653LU),
UA_NODEID_NUMERIC(ns[5], 16652LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16653LU)
);
}

/* ReadyToHalted - ns=5;i=16650 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16650LU),
UA_NODEID_NUMERIC(ns[5], 16611LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16650LU)
);
}

/* TransitionNumber - ns=5;i=16651 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16651LU),
UA_NODEID_NUMERIC(ns[5], 16650LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16651LU)
);
}

/* CartesianPtpMoveSkill - ns=5;i=16845 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CartesianPtpMoveSkill");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[5], 16610LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "CartesianPtpMoveSkill"),
UA_NODEID_NUMERIC(ns[4], 15457LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[5], 16845LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15265LU), true);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16845LU)
);
}

/* RecycleCount - ns=5;i=16861 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16861LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16861LU)
);
}

/* AutoDelete - ns=5;i=16860 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16860LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16860LU)
);
}

/* ParameterSet - ns=5;i=16909 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16909LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16909LU)
);
}

/* AxisBounds - ns=5;i=16924 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AxisBounds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16924LU),
UA_NODEID_NUMERIC(ns[5], 16909LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "AxisBounds"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16924LU)
);
}

/* MaxVelocity - ns=5;i=16917 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "MaxVelocity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum velocity the robot should move in rad/s for every axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16917LU),
UA_NODEID_NUMERIC(ns[5], 16909LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxVelocity"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16917LU)
);
}

/* EURange - ns=5;i=16921 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16921LU),
UA_NODEID_NUMERIC(ns[5], 16917LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16921LU)
);
}

/* MaxAcceleration - ns=5;i=16911 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "MaxAcceleration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum acceleration the robot should move in rad/s^2 for every axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16911LU),
UA_NODEID_NUMERIC(ns[5], 16909LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxAcceleration"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16911LU)
);
}

/* EURange - ns=5;i=16915 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16915LU),
UA_NODEID_NUMERIC(ns[5], 16911LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16915LU)
);
}

/* ToolFrame - ns=5;i=16910 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ToolFrame");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The name of the tool frame to be used for the motion");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16910LU),
UA_NODEID_NUMERIC(ns[5], 16909LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "ToolFrame"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16910LU)
);
}

/* Start - ns=5;i=16908 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16908LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16908LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CurrentState - ns=5;i=16846 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16846LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16846LU)
);
}

/* Number - ns=5;i=16849 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16849LU),
UA_NODEID_NUMERIC(ns[5], 16846LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16849LU)
);
}

/* Id - ns=5;i=16847 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16847LU),
UA_NODEID_NUMERIC(ns[5], 16846LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16847LU)
);
}

/* SuspendedToRunning - ns=5;i=16902 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16902LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16902LU)
);
}

/* TransitionNumber - ns=5;i=16903 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16903LU),
UA_NODEID_NUMERIC(ns[5], 16902LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16903LU)
);
}

/* SuspendedToReady - ns=5;i=16900 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16900LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16900LU)
);
}

/* TransitionNumber - ns=5;i=16901 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16901LU),
UA_NODEID_NUMERIC(ns[5], 16900LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16901LU)
);
}

/* Suspend - ns=5;i=16907 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16907LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16907LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Resume - ns=5;i=16906 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16906LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16906LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Reset - ns=5;i=16905 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16905LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16905LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Halt - ns=5;i=16904 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16904LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16904LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SuspendedToHalted - ns=5;i=16898 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16898LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16898LU)
);
}

/* TransitionNumber - ns=5;i=16899 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16899LU),
UA_NODEID_NUMERIC(ns[5], 16898LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16899LU)
);
}

/* RunningToSuspended - ns=5;i=16894 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16894LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16894LU)
);
}

/* TransitionNumber - ns=5;i=16895 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16895LU),
UA_NODEID_NUMERIC(ns[5], 16894LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16895LU)
);
}

/* Suspended - ns=5;i=16896 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16896LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16896LU)
);
}

/* StateNumber - ns=5;i=16897 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16897LU),
UA_NODEID_NUMERIC(ns[5], 16896LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16897LU)
);
}

/* RunningToHalted - ns=5;i=16890 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16890LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16890LU)
);
}

/* TransitionNumber - ns=5;i=16891 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16891LU),
UA_NODEID_NUMERIC(ns[5], 16890LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16891LU)
);
}

/* RunningToReady - ns=5;i=16892 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16892LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16892LU)
);
}

/* TransitionNumber - ns=5;i=16893 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16893LU),
UA_NODEID_NUMERIC(ns[5], 16892LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16893LU)
);
}

/* Deletable - ns=5;i=16859 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16859LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16859LU)
);
}

/* Name - ns=5;i=16876 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16876LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16876LU)
);
}

/* MaxInstanceCount - ns=5;i=16877 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16877LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16877LU)
);
}

/* Halted - ns=5;i=16878 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16878LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16878LU)
);
}

/* StateNumber - ns=5;i=16879 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16879LU),
UA_NODEID_NUMERIC(ns[5], 16878LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16879LU)
);
}

/* LastTransition - ns=5;i=16851 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16851LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16851LU)
);
}

/* TransitionTime - ns=5;i=16855 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16855LU),
UA_NODEID_NUMERIC(ns[5], 16851LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16855LU)
);
}

/* Number - ns=5;i=16854 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16854LU),
UA_NODEID_NUMERIC(ns[5], 16851LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16854LU)
);
}

/* Id - ns=5;i=16852 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16852LU),
UA_NODEID_NUMERIC(ns[5], 16851LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16852LU)
);
}

/* Running - ns=5;i=16888 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16888LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16888LU)
);
}

/* StateNumber - ns=5;i=16889 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16889LU),
UA_NODEID_NUMERIC(ns[5], 16888LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16889LU)
);
}

/* Ready - ns=5;i=16882 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16882LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16882LU)
);
}

/* StateNumber - ns=5;i=16883 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16883LU),
UA_NODEID_NUMERIC(ns[5], 16882LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16883LU)
);
}

/* HaltedToReady - ns=5;i=16880 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16880LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16880LU)
);
}

/* TransitionNumber - ns=5;i=16881 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16881LU),
UA_NODEID_NUMERIC(ns[5], 16880LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16881LU)
);
}

/* ReadyToRunning - ns=5;i=16886 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16886LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16886LU)
);
}

/* TransitionNumber - ns=5;i=16887 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16887LU),
UA_NODEID_NUMERIC(ns[5], 16886LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16887LU)
);
}

/* ReadyToHalted - ns=5;i=16884 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16884LU),
UA_NODEID_NUMERIC(ns[5], 16845LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16884LU)
);
}

/* TransitionNumber - ns=5;i=16885 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16885LU),
UA_NODEID_NUMERIC(ns[5], 16884LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16885LU)
);
}

/* JointPtpMoveSkill - ns=5;i=16689 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JointPtpMoveSkill");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[5], 16610LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "JointPtpMoveSkill"),
UA_NODEID_NUMERIC(ns[4], 15538LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[5], 16689LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15287LU), true);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16689LU)
);
}

/* CurrentState - ns=5;i=16690 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16690LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16690LU)
);
}

/* Number - ns=5;i=16693 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16693LU),
UA_NODEID_NUMERIC(ns[5], 16690LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16693LU)
);
}

/* Id - ns=5;i=16691 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16691LU),
UA_NODEID_NUMERIC(ns[5], 16690LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16691LU)
);
}

/* LastTransition - ns=5;i=16695 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16695LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16695LU)
);
}

/* TransitionTime - ns=5;i=16699 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16699LU),
UA_NODEID_NUMERIC(ns[5], 16695LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16699LU)
);
}

/* Number - ns=5;i=16698 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16698LU),
UA_NODEID_NUMERIC(ns[5], 16695LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16698LU)
);
}

/* Id - ns=5;i=16696 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16696LU),
UA_NODEID_NUMERIC(ns[5], 16695LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16696LU)
);
}

/* ReadyToHalted - ns=5;i=16728 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16728LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16728LU)
);
}

/* TransitionNumber - ns=5;i=16729 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16729LU),
UA_NODEID_NUMERIC(ns[5], 16728LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16729LU)
);
}

/* RunningToReady - ns=5;i=16736 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16736LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16736LU)
);
}

/* TransitionNumber - ns=5;i=16737 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16737LU),
UA_NODEID_NUMERIC(ns[5], 16736LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16737LU)
);
}

/* Halted - ns=5;i=16722 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16722LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16722LU)
);
}

/* StateNumber - ns=5;i=16723 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16723LU),
UA_NODEID_NUMERIC(ns[5], 16722LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16723LU)
);
}

/* HaltedToReady - ns=5;i=16724 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16724LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16724LU)
);
}

/* TransitionNumber - ns=5;i=16725 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16725LU),
UA_NODEID_NUMERIC(ns[5], 16724LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16725LU)
);
}

/* Ready - ns=5;i=16726 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16726LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16726LU)
);
}

/* StateNumber - ns=5;i=16727 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16727LU),
UA_NODEID_NUMERIC(ns[5], 16726LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16727LU)
);
}

/* Start - ns=5;i=16752 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16752LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16752LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SuspendedToHalted - ns=5;i=16742 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16742LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16742LU)
);
}

/* TransitionNumber - ns=5;i=16743 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16743LU),
UA_NODEID_NUMERIC(ns[5], 16742LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16743LU)
);
}

/* Suspended - ns=5;i=16740 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16740LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16740LU)
);
}

/* StateNumber - ns=5;i=16741 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16741LU),
UA_NODEID_NUMERIC(ns[5], 16740LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16741LU)
);
}

/* SuspendedToRunning - ns=5;i=16746 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16746LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16746LU)
);
}

/* TransitionNumber - ns=5;i=16747 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16747LU),
UA_NODEID_NUMERIC(ns[5], 16746LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16747LU)
);
}

/* SuspendedToReady - ns=5;i=16744 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16744LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16744LU)
);
}

/* TransitionNumber - ns=5;i=16745 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16745LU),
UA_NODEID_NUMERIC(ns[5], 16744LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16745LU)
);
}

/* Reset - ns=5;i=16749 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16749LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16749LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Halt - ns=5;i=16748 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16748LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16748LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AutoDelete - ns=5;i=16704 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16704LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16704LU)
);
}

/* RecycleCount - ns=5;i=16705 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16705LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16705LU)
);
}

/* Deletable - ns=5;i=16703 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16703LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16703LU)
);
}

/* Resume - ns=5;i=16750 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16750LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16750LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Suspend - ns=5;i=16751 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 16751LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16751LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RunningToHalted - ns=5;i=16734 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16734LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16734LU)
);
}

/* TransitionNumber - ns=5;i=16735 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16735LU),
UA_NODEID_NUMERIC(ns[5], 16734LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16735LU)
);
}

/* ParameterSet - ns=5;i=16753 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16753LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16753LU)
);
}

/* ToolFrame - ns=5;i=16754 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ToolFrame");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The name of the tool frame to be used for the motion");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16754LU),
UA_NODEID_NUMERIC(ns[5], 16753LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "ToolFrame"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16754LU)
);
}

/* MaxAcceleration - ns=5;i=16755 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "MaxAcceleration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum acceleration the robot should move in rad/s^2 for every axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16755LU),
UA_NODEID_NUMERIC(ns[5], 16753LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxAcceleration"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16755LU)
);
}

/* EURange - ns=5;i=16759 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16759LU),
UA_NODEID_NUMERIC(ns[5], 16755LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16759LU)
);
}

/* MaxVelocity - ns=5;i=16761 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "MaxVelocity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Maximum velocity the robot should move in rad/s for every axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16761LU),
UA_NODEID_NUMERIC(ns[5], 16753LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxVelocity"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16761LU)
);
}

/* EURange - ns=5;i=16765 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16765LU),
UA_NODEID_NUMERIC(ns[5], 16761LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16765LU)
);
}

/* Running - ns=5;i=16732 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16732LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16732LU)
);
}

/* StateNumber - ns=5;i=16733 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16733LU),
UA_NODEID_NUMERIC(ns[5], 16732LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16733LU)
);
}

/* ReadyToRunning - ns=5;i=16730 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16730LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16730LU)
);
}

/* TransitionNumber - ns=5;i=16731 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16731LU),
UA_NODEID_NUMERIC(ns[5], 16730LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16731LU)
);
}

/* Name - ns=5;i=16720 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16720LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16720LU)
);
}

/* MaxInstanceCount - ns=5;i=16721 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16721LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16721LU)
);
}

/* RunningToSuspended - ns=5;i=16738 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16738LU),
UA_NODEID_NUMERIC(ns[5], 16689LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16738LU)
);
}

/* TransitionNumber - ns=5;i=16739 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16739LU),
UA_NODEID_NUMERIC(ns[5], 16738LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16739LU)
);
}

/* CurrentUser - ns=5;i=16463 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16463LU),
UA_NODEID_NUMERIC(ns[5], 16428LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16463LU)
);
}

/* Level - ns=5;i=16464 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16464LU),
UA_NODEID_NUMERIC(ns[5], 16463LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16464LU)
);
}

/* MotionDevices - ns=5;i=15038 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15038LU),
UA_NODEID_NUMERIC(ns[5], 15001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15038LU)
);
}

/* Iiwa Robot - ns=5;i=15488 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Iiwa Robot");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[5], 15038LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "Iiwa Robot"),
UA_NODEID_NUMERIC(ns[4], 15768LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15488LU)
);
}

/* FlangeToolSet - ns=5;i=15706 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeToolSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 15706LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "FlangeToolSet"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15706LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=5;i=15707 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_5_i_15707_variant_DataContents[5];

UA_init(&variablenode_ns_5_i_15707_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_5_i_15707_variant_DataContents[0].name = UA_STRING("Name");
variablenode_ns_5_i_15707_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_5_i_15707_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_5_i_15707_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_5_i_15707_variant_DataContents[1].name = UA_STRING("Frame");
variablenode_ns_5_i_15707_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
variablenode_ns_5_i_15707_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_5_i_15707_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_5_i_15707_variant_DataContents[2].name = UA_STRING("Mass");
variablenode_ns_5_i_15707_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
variablenode_ns_5_i_15707_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_5_i_15707_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_5_i_15707_variant_DataContents[3].name = UA_STRING("CenterOfMass");
variablenode_ns_5_i_15707_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
variablenode_ns_5_i_15707_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_5_i_15707_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_5_i_15707_variant_DataContents[4].name = UA_STRING("Inertia");
variablenode_ns_5_i_15707_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 18808LU);
variablenode_ns_5_i_15707_variant_DataContents[4].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_5_i_15707_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15707LU),
UA_NODEID_NUMERIC(ns[5], 15706LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);





return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15707LU)
);
}

/* FlangeToolClear - ns=5;i=15708 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeToolClear");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[5], 15708LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "FlangeToolClear"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15708LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ParameterSet - ns=5;i=15489 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15489LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15489LU)
);
}

/* SpeedOverride - ns=5;i=15526 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15526LU),
UA_NODEID_NUMERIC(ns[5], 15489LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15526LU)
);
}

/* Manufacturer - ns=5;i=15509 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText *variablenode_ns_5_i_15509_variant_DataContents =  UA_LocalizedText_new();
if (!variablenode_ns_5_i_15509_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_LocalizedText_init(variablenode_ns_5_i_15509_variant_DataContents);
*variablenode_ns_5_i_15509_variant_DataContents = UA_LOCALIZEDTEXT_ALLOC("", "KUKA");
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_15509_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15509LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_LocalizedText_delete(variablenode_ns_5_i_15509_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15509LU)
);
}

/* ProductCode - ns=5;i=15515 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15515LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15515LU)
);
}

/* MotionDeviceCategory - ns=5;i=15523 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
UA_Int32 *variablenode_ns_5_i_15523_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_15523_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_15523_variant_DataContents);
*variablenode_ns_5_i_15523_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_15523_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15523LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_15523_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15523LU)
);
}

/* Model - ns=5;i=15511 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText *variablenode_ns_5_i_15511_variant_DataContents =  UA_LocalizedText_new();
if (!variablenode_ns_5_i_15511_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_LocalizedText_init(variablenode_ns_5_i_15511_variant_DataContents);
*variablenode_ns_5_i_15511_variant_DataContents = UA_LOCALIZEDTEXT_ALLOC("", "iiwa");
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_15511_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15511LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_LocalizedText_delete(variablenode_ns_5_i_15511_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15511LU)
);
}

/* FlangeTool - ns=5;i=15710 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeTool");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15710LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "FlangeTool"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15710LU)
);
}

/* 3DFrame - ns=5;i=15712 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
attr.displayName = UA_LOCALIZEDTEXT("", "3DFrame");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15712LU),
UA_NODEID_NUMERIC(ns[5], 15710LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "3DFrame"),
UA_NODEID_NUMERIC(ns[0], 18791LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15712LU)
);
}

/* Orientation - ns=5;i=15715 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15715LU),
UA_NODEID_NUMERIC(ns[5], 15712LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Orientation"),
UA_NODEID_NUMERIC(ns[0], 18781LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15715LU)
);
}

/* C - ns=5;i=15725 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15725LU),
UA_NODEID_NUMERIC(ns[5], 15715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "C"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15725LU)
);
}

/* A - ns=5;i=15723 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15723LU),
UA_NODEID_NUMERIC(ns[5], 15715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "A"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15723LU)
);
}

/* B - ns=5;i=15724 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15724LU),
UA_NODEID_NUMERIC(ns[5], 15715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "B"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15724LU)
);
}

/* CartesianCoordinates - ns=5;i=15713 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15713LU),
UA_NODEID_NUMERIC(ns[5], 15712LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CartesianCoordinates"),
UA_NODEID_NUMERIC(ns[0], 18774LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15713LU)
);
}

/* Y - ns=5;i=15721 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15721LU),
UA_NODEID_NUMERIC(ns[5], 15713LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15721LU)
);
}

/* X - ns=5;i=15720 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15720LU),
UA_NODEID_NUMERIC(ns[5], 15713LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15720LU)
);
}

/* Z - ns=5;i=15722 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15722LU),
UA_NODEID_NUMERIC(ns[5], 15713LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15722LU)
);
}

/* Name - ns=5;i=15711 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15711LU),
UA_NODEID_NUMERIC(ns[5], 15710LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15711LU)
);
}

/* PowerTrains - ns=5;i=15608 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15608LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15608LU)
);
}

/* Axes - ns=5;i=15527 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the axis set of the motion device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15527LU)
);
}

/* Axis_6 - ns=5;i=16134 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_6");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The sixth axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16134LU),
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axis_6"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16134LU)
);
}

/* MotionProfile - ns=5;i=16169 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
UA_Int32 *variablenode_ns_5_i_16169_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_16169_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_16169_variant_DataContents);
*variablenode_ns_5_i_16169_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_16169_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16169LU),
UA_NODEID_NUMERIC(ns[5], 16134LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_16169_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16169LU)
);
}

/* ParameterSet - ns=5;i=16135 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16135LU),
UA_NODEID_NUMERIC(ns[5], 16134LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16135LU)
);
}

/* ActualSpeed - ns=5;i=16202 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16202LU),
UA_NODEID_NUMERIC(ns[5], 16135LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16202LU)
);
}

/* EngineeringUnits - ns=5;i=16207 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16207LU),
UA_NODEID_NUMERIC(ns[5], 16202LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16207LU)
);
}

/* ActualPosition - ns=5;i=16196 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16196LU),
UA_NODEID_NUMERIC(ns[5], 16135LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16196LU)
);
}

/* EngineeringUnits - ns=5;i=16201 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16201LU),
UA_NODEID_NUMERIC(ns[5], 16196LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16201LU)
);
}

/* Name - ns=5;i=16214 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "Joint5");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16214LU),
UA_NODEID_NUMERIC(ns[5], 16134LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16214LU)
);
}

/* Axis_3 - ns=5;i=15891 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_3");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The third axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15891LU),
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axis_3"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15891LU)
);
}

/* Name - ns=5;i=15971 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_248_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "Joint2");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15971LU),
UA_NODEID_NUMERIC(ns[5], 15891LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15971LU)
);
}

/* MotionProfile - ns=5;i=15926 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
UA_Int32 *variablenode_ns_5_i_15926_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_15926_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_15926_variant_DataContents);
*variablenode_ns_5_i_15926_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_15926_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15926LU),
UA_NODEID_NUMERIC(ns[5], 15891LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_15926_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15926LU)
);
}

/* ParameterSet - ns=5;i=15892 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15892LU),
UA_NODEID_NUMERIC(ns[5], 15891LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15892LU)
);
}

/* ActualSpeed - ns=5;i=15959 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_251_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15959LU),
UA_NODEID_NUMERIC(ns[5], 15892LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15959LU)
);
}

/* EngineeringUnits - ns=5;i=15964 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_252_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15964LU),
UA_NODEID_NUMERIC(ns[5], 15959LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15964LU)
);
}

/* ActualPosition - ns=5;i=15953 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_253_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15953LU),
UA_NODEID_NUMERIC(ns[5], 15892LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15953LU)
);
}

/* EngineeringUnits - ns=5;i=15958 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_254_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15958LU),
UA_NODEID_NUMERIC(ns[5], 15953LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15958LU)
);
}

/* Axis_1 - ns=5;i=15729 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The bottom-most axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15729LU),
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axis_1"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15729LU)
);
}

/* ParameterSet - ns=5;i=15730 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15730LU),
UA_NODEID_NUMERIC(ns[5], 15729LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15730LU)
);
}

/* ActualPosition - ns=5;i=15791 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_257_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15791LU),
UA_NODEID_NUMERIC(ns[5], 15730LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15791LU)
);
}

/* EngineeringUnits - ns=5;i=15796 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_258_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15796LU),
UA_NODEID_NUMERIC(ns[5], 15791LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15796LU)
);
}

/* ActualSpeed - ns=5;i=15797 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_259_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15797LU),
UA_NODEID_NUMERIC(ns[5], 15730LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15797LU)
);
}

/* EngineeringUnits - ns=5;i=15802 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_260_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15802LU),
UA_NODEID_NUMERIC(ns[5], 15797LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15802LU)
);
}

/* MotionProfile - ns=5;i=15764 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
UA_Int32 *variablenode_ns_5_i_15764_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_15764_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_15764_variant_DataContents);
*variablenode_ns_5_i_15764_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_15764_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15764LU),
UA_NODEID_NUMERIC(ns[5], 15729LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_15764_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15764LU)
);
}

/* Name - ns=5;i=15809 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_262_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "Joint0");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15809LU),
UA_NODEID_NUMERIC(ns[5], 15729LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15809LU)
);
}

/* Axis_2 - ns=5;i=15810 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The second axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15810LU),
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axis_2"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15810LU)
);
}

/* MotionProfile - ns=5;i=15845 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
UA_Int32 *variablenode_ns_5_i_15845_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_15845_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_15845_variant_DataContents);
*variablenode_ns_5_i_15845_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_15845_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15845LU),
UA_NODEID_NUMERIC(ns[5], 15810LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_15845_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15845LU)
);
}

/* ParameterSet - ns=5;i=15811 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15811LU),
UA_NODEID_NUMERIC(ns[5], 15810LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15811LU)
);
}

/* ActualSpeed - ns=5;i=15878 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_266_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15878LU),
UA_NODEID_NUMERIC(ns[5], 15811LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15878LU)
);
}

/* EngineeringUnits - ns=5;i=15883 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_267_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15883LU),
UA_NODEID_NUMERIC(ns[5], 15878LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15883LU)
);
}

/* ActualPosition - ns=5;i=15872 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_268_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15872LU),
UA_NODEID_NUMERIC(ns[5], 15811LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15872LU)
);
}

/* EngineeringUnits - ns=5;i=15877 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_269_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15877LU),
UA_NODEID_NUMERIC(ns[5], 15872LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15877LU)
);
}

/* Name - ns=5;i=15890 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_270_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "Joint1");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 15890LU),
UA_NODEID_NUMERIC(ns[5], 15810LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15890LU)
);
}

/* Axis_5 - ns=5;i=16053 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_5");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The fifth axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16053LU),
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axis_5"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16053LU)
);
}

/* ParameterSet - ns=5;i=16054 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16054LU),
UA_NODEID_NUMERIC(ns[5], 16053LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16054LU)
);
}

/* ActualSpeed - ns=5;i=16121 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_273_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16121LU),
UA_NODEID_NUMERIC(ns[5], 16054LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16121LU)
);
}

/* EngineeringUnits - ns=5;i=16126 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_274_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16126LU),
UA_NODEID_NUMERIC(ns[5], 16121LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16126LU)
);
}

/* ActualPosition - ns=5;i=16115 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_275_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16115LU),
UA_NODEID_NUMERIC(ns[5], 16054LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16115LU)
);
}

/* EngineeringUnits - ns=5;i=16120 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_276_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16120LU),
UA_NODEID_NUMERIC(ns[5], 16115LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16120LU)
);
}

/* Name - ns=5;i=16133 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_277_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "Joint4");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16133LU),
UA_NODEID_NUMERIC(ns[5], 16053LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16133LU)
);
}

/* MotionProfile - ns=5;i=16088 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
UA_Int32 *variablenode_ns_5_i_16088_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_16088_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_16088_variant_DataContents);
*variablenode_ns_5_i_16088_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_16088_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16088LU),
UA_NODEID_NUMERIC(ns[5], 16053LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_16088_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16088LU)
);
}

/* Axis_4 - ns=5;i=15972 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_4");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The fourth axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15972LU),
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axis_4"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15972LU)
);
}

/* MotionProfile - ns=5;i=16007 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
UA_Int32 *variablenode_ns_5_i_16007_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_16007_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_16007_variant_DataContents);
*variablenode_ns_5_i_16007_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_16007_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16007LU),
UA_NODEID_NUMERIC(ns[5], 15972LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_16007_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16007LU)
);
}

/* Name - ns=5;i=16052 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_281_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "Joint3");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16052LU),
UA_NODEID_NUMERIC(ns[5], 15972LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16052LU)
);
}

/* ParameterSet - ns=5;i=15973 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15973LU),
UA_NODEID_NUMERIC(ns[5], 15972LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15973LU)
);
}

/* ActualPosition - ns=5;i=16034 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_283_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16034LU),
UA_NODEID_NUMERIC(ns[5], 15973LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16034LU)
);
}

/* EngineeringUnits - ns=5;i=16039 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_284_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16039LU),
UA_NODEID_NUMERIC(ns[5], 16034LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16039LU)
);
}

/* ActualSpeed - ns=5;i=16040 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_285_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16040LU),
UA_NODEID_NUMERIC(ns[5], 15973LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16040LU)
);
}

/* EngineeringUnits - ns=5;i=16045 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_286_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16045LU),
UA_NODEID_NUMERIC(ns[5], 16040LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16045LU)
);
}

/* Axis_7 - ns=5;i=16215 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_7");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The last axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16215LU),
UA_NODEID_NUMERIC(ns[5], 15527LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axis_7"),
UA_NODEID_NUMERIC(ns[2], 16601LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16215LU)
);
}

/* ParameterSet - ns=5;i=16216 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16216LU),
UA_NODEID_NUMERIC(ns[5], 16215LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16216LU)
);
}

/* ActualPosition - ns=5;i=16277 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_289_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16277LU),
UA_NODEID_NUMERIC(ns[5], 16216LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualPosition"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16277LU)
);
}

/* EngineeringUnits - ns=5;i=16282 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_290_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16282LU),
UA_NODEID_NUMERIC(ns[5], 16277LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16282LU)
);
}

/* ActualSpeed - ns=5;i=16283 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_291_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16283LU),
UA_NODEID_NUMERIC(ns[5], 16216LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ActualSpeed"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16283LU)
);
}

/* EngineeringUnits - ns=5;i=16288 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_292_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16288LU),
UA_NODEID_NUMERIC(ns[5], 16283LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16288LU)
);
}

/* Name - ns=5;i=16295 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_293_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.description = UA_LOCALIZEDTEXT("", "Joint6");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16295LU),
UA_NODEID_NUMERIC(ns[5], 16215LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16295LU)
);
}

/* MotionProfile - ns=5;i=16250 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_294_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3008LU);
UA_Int32 *variablenode_ns_5_i_16250_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_5_i_16250_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_5_i_16250_variant_DataContents);
*variablenode_ns_5_i_16250_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_5_i_16250_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The kind of axis motion as defined with the AxisMotionProfileEnumeration.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16250LU),
UA_NODEID_NUMERIC(ns[5], 16215LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionProfile"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_5_i_16250_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16250LU)
);
}

/* FlangeLoad - ns=5;i=15644 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The FlangeLoad is the load on the flange or at the mounting point of the\\n          MotionDevice.\\nThis can be the maximum load of the MotionDevice.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 15644LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "FlangeLoad"),
UA_NODEID_NUMERIC(ns[2], 1018LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15644LU)
);
}

/* Mass - ns=5;i=15645 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_296_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15645LU),
UA_NODEID_NUMERIC(ns[5], 15644LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Mass"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15645LU)
);
}

/* EngineeringUnits - ns=5;i=15650 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_297_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15650LU),
UA_NODEID_NUMERIC(ns[5], 15645LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15650LU)
);
}

/* ForceTorqueSensors - ns=5;i=16310 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ForceTorqueSensors");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16310LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "ForceTorqueSensors"),
UA_NODEID_NUMERIC(ns[3], 15728LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16310LU)
);
}

/* ForceSensor - ns=5;i=16345 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ForceSensor");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Offers information about force experienced by the robot");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16345LU),
UA_NODEID_NUMERIC(ns[5], 16310LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ForceSensor"),
UA_NODEID_NUMERIC(ns[3], 15692LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16345LU)
);
}

/* Force - ns=5;i=16380 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_300_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16380LU),
UA_NODEID_NUMERIC(ns[5], 16345LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Force"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16380LU)
);
}

/* EURange - ns=5;i=16384 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_301_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16384LU),
UA_NODEID_NUMERIC(ns[5], 16380LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16384LU)
);
}

/* TorqueSensor - ns=5;i=16386 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TorqueSensor");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Offers information about torque experienced by the sensor");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[5], 16386LU),
UA_NODEID_NUMERIC(ns[5], 16310LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "TorqueSensor"),
UA_NODEID_NUMERIC(ns[3], 15692LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16386LU)
);
}

/* Torque - ns=5;i=16421 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_303_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16421LU),
UA_NODEID_NUMERIC(ns[5], 16386LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Torque"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16421LU)
);
}

/* EURange - ns=5;i=16425 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_304_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16425LU),
UA_NODEID_NUMERIC(ns[5], 16421LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_304_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16425LU)
);
}

/* Led - ns=5;i=16427 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Led");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Status of the blue LED at the robots TCP");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16427LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "Led"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16427LU)
);
}

/* SerialNumber - ns=5;i=15518 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_306_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 15518LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 15518LU)
);
}

/* Position - ns=5;i=16296 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Position");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The cartesian location of the robot");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[5], 16296LU),
UA_NODEID_NUMERIC(ns[5], 15488LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[5], "Position"),
UA_NODEID_NUMERIC(ns[0], 18791LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16296LU)
);
}

/* Orientation - ns=5;i=16299 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_308_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16299LU),
UA_NODEID_NUMERIC(ns[5], 16296LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Orientation"),
UA_NODEID_NUMERIC(ns[0], 18781LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16299LU)
);
}

/* A - ns=5;i=16307 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_309_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16307LU),
UA_NODEID_NUMERIC(ns[5], 16299LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "A"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16307LU)
);
}

/* B - ns=5;i=16308 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_310_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16308LU),
UA_NODEID_NUMERIC(ns[5], 16299LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "B"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_310_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16308LU)
);
}

/* C - ns=5;i=16309 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_311_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16309LU),
UA_NODEID_NUMERIC(ns[5], 16299LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "C"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16309LU)
);
}

/* CartesianCoordinates - ns=5;i=16297 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_312_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16297LU),
UA_NODEID_NUMERIC(ns[5], 16296LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CartesianCoordinates"),
UA_NODEID_NUMERIC(ns[0], 18774LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16297LU)
);
}

/* X - ns=5;i=16304 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_313_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16304LU),
UA_NODEID_NUMERIC(ns[5], 16297LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16304LU)
);
}

/* Y - ns=5;i=16305 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_314_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16305LU),
UA_NODEID_NUMERIC(ns[5], 16297LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16305LU)
);
}

/* Z - ns=5;i=16306 */

static UA_StatusCode function_namespace_kuka_iiwa_generated_315_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[5], 16306LU),
UA_NODEID_NUMERIC(ns[5], 16297LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_kuka_iiwa_generated_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[5], 16306LU)
);
}

static UA_DataTypeArray customUA_TYPES_FORTISS_ROBOTICS = {
    NULL,
    UA_TYPES_FORTISS_ROBOTICS_COUNT,
    UA_TYPES_FORTISS_ROBOTICS
};

static UA_DataTypeArray customUA_TYPES_ROBOTICS = {
    NULL,
    UA_TYPES_ROBOTICS_COUNT,
    UA_TYPES_ROBOTICS
};

static UA_DataTypeArray customUA_TYPES_FORTISS_DI = {
    NULL,
    UA_TYPES_FORTISS_DI_COUNT,
    UA_TYPES_FORTISS_DI
};

static UA_DataTypeArray customUA_TYPES_KUKA_IIWA = {
    NULL,
    UA_TYPES_KUKA_IIWA_COUNT,
    UA_TYPES_KUKA_IIWA
};

static UA_DataTypeArray customUA_TYPES_DI = {
    NULL,
    UA_TYPES_DI_COUNT,
    UA_TYPES_DI
};

UA_StatusCode namespace_kuka_iiwa_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[6];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/Robotics/");
ns[3] = UA_Server_addNamespace(server, "https://fortiss.org/UA/DI/");
ns[4] = UA_Server_addNamespace(server, "https://fortiss.org/UA/Robotics/");
ns[5] = UA_Server_addNamespace(server, "https://fortiss.org/UA/kuka_iiwa/");

/* Load custom datatype definitions into the server */
if(UA_TYPES_FORTISS_ROBOTICS_COUNT > 0) {
customUA_TYPES_FORTISS_ROBOTICS.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_FORTISS_ROBOTICS;

}
if(UA_TYPES_ROBOTICS_COUNT > 0) {
customUA_TYPES_ROBOTICS.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_ROBOTICS;

}
if(UA_TYPES_FORTISS_DI_COUNT > 0) {
customUA_TYPES_FORTISS_DI.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_FORTISS_DI;

}
if(UA_TYPES_KUKA_IIWA_COUNT > 0) {
customUA_TYPES_KUKA_IIWA.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_KUKA_IIWA;

}
if(UA_TYPES_DI_COUNT > 0) {
customUA_TYPES_DI.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_DI;

}
bool dummy = (
!(retVal = function_namespace_kuka_iiwa_generated_0_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_1_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_2_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_3_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_4_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_5_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_6_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_7_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_8_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_9_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_10_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_11_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_12_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_13_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_14_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_15_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_16_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_17_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_18_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_19_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_20_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_21_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_22_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_23_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_24_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_25_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_26_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_27_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_28_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_29_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_30_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_31_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_32_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_33_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_34_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_35_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_36_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_37_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_38_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_39_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_40_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_41_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_42_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_43_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_44_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_45_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_46_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_47_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_48_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_49_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_50_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_51_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_52_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_53_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_54_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_55_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_56_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_57_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_58_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_59_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_60_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_61_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_62_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_63_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_64_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_65_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_66_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_67_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_68_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_69_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_70_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_71_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_72_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_73_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_74_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_75_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_76_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_77_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_78_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_79_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_80_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_81_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_82_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_83_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_84_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_85_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_86_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_87_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_88_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_89_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_90_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_91_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_92_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_93_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_94_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_95_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_96_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_97_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_98_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_99_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_100_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_101_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_102_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_103_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_104_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_105_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_106_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_107_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_108_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_109_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_110_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_111_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_112_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_113_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_114_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_115_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_116_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_117_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_118_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_119_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_120_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_121_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_122_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_123_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_124_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_125_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_126_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_127_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_128_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_129_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_130_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_131_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_132_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_133_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_134_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_135_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_136_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_137_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_138_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_139_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_140_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_141_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_142_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_143_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_144_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_145_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_146_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_147_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_148_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_149_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_150_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_151_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_152_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_153_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_154_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_155_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_156_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_157_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_158_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_159_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_160_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_161_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_162_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_163_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_164_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_165_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_166_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_167_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_168_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_169_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_170_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_171_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_172_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_173_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_174_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_175_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_176_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_177_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_178_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_179_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_180_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_181_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_182_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_183_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_184_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_185_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_186_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_187_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_188_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_189_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_190_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_191_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_192_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_193_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_194_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_195_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_196_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_197_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_198_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_199_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_200_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_201_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_202_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_203_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_204_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_205_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_206_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_207_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_208_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_209_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_210_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_211_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_212_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_213_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_214_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_215_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_216_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_217_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_218_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_219_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_220_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_221_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_222_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_223_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_224_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_225_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_226_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_227_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_228_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_229_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_230_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_231_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_232_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_233_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_234_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_235_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_236_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_237_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_238_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_239_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_240_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_241_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_242_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_243_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_244_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_245_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_246_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_247_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_248_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_249_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_250_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_251_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_252_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_253_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_254_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_255_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_256_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_257_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_258_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_259_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_260_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_261_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_262_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_263_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_264_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_265_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_266_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_267_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_268_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_269_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_270_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_271_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_272_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_273_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_274_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_275_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_276_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_277_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_278_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_279_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_280_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_281_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_282_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_283_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_284_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_285_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_286_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_287_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_288_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_289_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_290_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_291_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_292_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_293_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_294_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_295_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_296_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_297_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_298_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_299_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_300_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_301_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_302_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_303_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_304_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_305_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_306_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_307_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_308_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_309_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_310_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_311_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_312_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_313_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_314_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_315_begin(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_315_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_314_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_313_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_312_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_311_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_310_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_309_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_308_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_307_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_306_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_305_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_304_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_303_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_302_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_301_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_300_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_299_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_298_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_297_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_296_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_295_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_294_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_293_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_292_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_291_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_290_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_289_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_288_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_287_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_286_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_285_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_284_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_283_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_282_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_281_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_280_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_279_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_278_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_277_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_276_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_275_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_274_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_273_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_272_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_271_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_270_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_269_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_268_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_267_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_266_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_265_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_264_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_263_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_262_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_261_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_260_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_259_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_258_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_257_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_256_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_255_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_254_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_253_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_252_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_251_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_250_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_249_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_248_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_247_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_246_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_245_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_244_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_243_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_242_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_241_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_240_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_239_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_238_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_237_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_236_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_235_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_234_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_233_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_232_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_231_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_230_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_229_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_228_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_227_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_226_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_225_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_224_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_223_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_222_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_221_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_220_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_219_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_218_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_217_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_216_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_215_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_214_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_213_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_212_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_211_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_210_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_209_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_208_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_207_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_206_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_205_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_204_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_203_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_202_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_201_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_200_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_199_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_198_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_197_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_196_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_195_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_194_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_193_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_192_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_191_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_190_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_189_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_188_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_187_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_186_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_185_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_184_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_183_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_182_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_181_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_180_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_179_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_178_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_177_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_176_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_175_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_174_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_173_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_172_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_171_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_170_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_169_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_168_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_167_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_166_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_165_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_164_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_163_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_162_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_161_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_160_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_159_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_158_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_157_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_156_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_155_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_154_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_153_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_152_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_151_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_150_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_149_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_148_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_147_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_146_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_145_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_144_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_143_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_142_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_141_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_140_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_139_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_138_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_137_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_136_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_135_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_134_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_133_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_132_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_131_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_130_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_129_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_128_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_127_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_126_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_125_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_124_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_123_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_122_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_121_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_120_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_119_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_118_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_117_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_116_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_115_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_114_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_113_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_112_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_111_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_110_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_109_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_108_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_107_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_106_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_105_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_104_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_103_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_102_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_101_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_100_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_99_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_98_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_97_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_96_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_95_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_94_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_93_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_92_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_91_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_90_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_89_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_88_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_87_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_86_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_85_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_84_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_83_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_82_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_81_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_80_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_79_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_78_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_77_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_76_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_75_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_74_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_73_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_72_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_71_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_70_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_69_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_68_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_67_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_66_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_65_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_64_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_63_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_62_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_61_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_60_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_59_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_58_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_57_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_56_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_55_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_54_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_53_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_52_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_51_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_50_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_49_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_48_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_47_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_46_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_45_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_44_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_43_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_42_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_41_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_40_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_39_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_38_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_37_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_36_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_35_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_34_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_33_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_32_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_31_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_30_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_29_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_28_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_27_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_26_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_25_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_24_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_23_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_22_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_21_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_20_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_19_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_18_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_17_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_16_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_15_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_14_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_13_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_12_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_11_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_10_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_9_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_8_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_7_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_6_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_5_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_4_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_3_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_2_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_1_finish(server, ns))
&& !(retVal = function_namespace_kuka_iiwa_generated_0_finish(server, ns))
); (void)(dummy);
return retVal;
}
