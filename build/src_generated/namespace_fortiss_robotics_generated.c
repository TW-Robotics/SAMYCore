/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_fortiss_robotics_generated.h"


/* FortissMotionDeviceType - ns=4;i=15768 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FortissMotionDeviceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15768LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "FortissMotionDeviceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15768LU)
);
}

/* FlangeLoad - ns=4;i=15926 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The FlangeLoad is the load on the flange or at the mounting point of the\\n          MotionDevice.\\nThis can be the maximum load of the MotionDevice.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15926LU),
UA_NODEID_NUMERIC(ns[4], 15768LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "FlangeLoad"),
UA_NODEID_NUMERIC(ns[2], 1018LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15926LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15926LU)
);
}

/* Mass - ns=4;i=15927 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15927LU),
UA_NODEID_NUMERIC(ns[4], 15926LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Mass"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15927LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15927LU)
);
}

/* EngineeringUnits - ns=4;i=15932 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15932LU),
UA_NODEID_NUMERIC(ns[4], 15927LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15932LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15932LU)
);
}

/* Inertia - ns=4;i=15947 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15947LU),
UA_NODEID_NUMERIC(ns[4], 15926LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Inertia"),
UA_NODEID_NUMERIC(ns[0], 17716LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15947LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15947LU)
);
}

/* X - ns=4;i=15949 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15949LU),
UA_NODEID_NUMERIC(ns[4], 15947LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15949LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15949LU)
);
}

/* Z - ns=4;i=15951 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15951LU),
UA_NODEID_NUMERIC(ns[4], 15947LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15951LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15951LU)
);
}

/* Y - ns=4;i=15950 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15950LU),
UA_NODEID_NUMERIC(ns[4], 15947LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15950LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15950LU)
);
}

/* CenterOfMass - ns=4;i=15933 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15933LU),
UA_NODEID_NUMERIC(ns[4], 15926LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CenterOfMass"),
UA_NODEID_NUMERIC(ns[0], 18791LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15933LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15933LU)
);
}

/* CartesianCoordinates - ns=4;i=15934 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15934LU),
UA_NODEID_NUMERIC(ns[4], 15933LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CartesianCoordinates"),
UA_NODEID_NUMERIC(ns[0], 18774LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15934LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15934LU)
);
}

/* Y - ns=4;i=15942 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15942LU),
UA_NODEID_NUMERIC(ns[4], 15934LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15942LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15942LU)
);
}

/* Z - ns=4;i=15943 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15943LU),
UA_NODEID_NUMERIC(ns[4], 15934LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15943LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15943LU)
);
}

/* X - ns=4;i=15941 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15941LU),
UA_NODEID_NUMERIC(ns[4], 15934LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15941LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15941LU)
);
}

/* Orientation - ns=4;i=15936 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15936LU),
UA_NODEID_NUMERIC(ns[4], 15933LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Orientation"),
UA_NODEID_NUMERIC(ns[0], 18781LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15936LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15936LU)
);
}

/* A - ns=4;i=15944 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15944LU),
UA_NODEID_NUMERIC(ns[4], 15936LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "A"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15944LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15944LU)
);
}

/* B - ns=4;i=15945 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15945LU),
UA_NODEID_NUMERIC(ns[4], 15936LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "B"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15945LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15945LU)
);
}

/* C - ns=4;i=15946 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15946LU),
UA_NODEID_NUMERIC(ns[4], 15936LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "C"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15946LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15946LU)
);
}

/* FlangeToolClear - ns=4;i=15990 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeToolClear");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[4], 15990LU),
UA_NODEID_NUMERIC(ns[4], 15768LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "FlangeToolClear"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15990LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15990LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FlangeTool - ns=4;i=15992 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeTool");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15992LU),
UA_NODEID_NUMERIC(ns[4], 15768LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "FlangeTool"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15992LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15992LU)
);
}

/* 3DFrame - ns=4;i=15994 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15994LU),
UA_NODEID_NUMERIC(ns[4], 15992LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "3DFrame"),
UA_NODEID_NUMERIC(ns[0], 18791LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15994LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15994LU)
);
}

/* Orientation - ns=4;i=15997 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15997LU),
UA_NODEID_NUMERIC(ns[4], 15994LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Orientation"),
UA_NODEID_NUMERIC(ns[0], 18781LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15997LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15997LU)
);
}

/* C - ns=4;i=16007 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 16007LU),
UA_NODEID_NUMERIC(ns[4], 15997LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "C"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16007LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16007LU)
);
}

/* B - ns=4;i=16006 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 16006LU),
UA_NODEID_NUMERIC(ns[4], 15997LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "B"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16006LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16006LU)
);
}

/* A - ns=4;i=16005 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 16005LU),
UA_NODEID_NUMERIC(ns[4], 15997LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "A"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16005LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16005LU)
);
}

/* CartesianCoordinates - ns=4;i=15995 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15995LU),
UA_NODEID_NUMERIC(ns[4], 15994LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CartesianCoordinates"),
UA_NODEID_NUMERIC(ns[0], 18774LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15995LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15995LU)
);
}

/* Y - ns=4;i=16003 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 16003LU),
UA_NODEID_NUMERIC(ns[4], 15995LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16003LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16003LU)
);
}

/* X - ns=4;i=16002 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 16002LU),
UA_NODEID_NUMERIC(ns[4], 15995LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16002LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16002LU)
);
}

/* Z - ns=4;i=16004 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 16004LU),
UA_NODEID_NUMERIC(ns[4], 15995LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16004LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16004LU)
);
}

/* Name - ns=4;i=15993 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15993LU),
UA_NODEID_NUMERIC(ns[4], 15992LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15993LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15993LU)
);
}

/* FlangeToolSet - ns=4;i=15988 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FlangeToolSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[4], 15988LU),
UA_NODEID_NUMERIC(ns[4], 15768LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "FlangeToolSet"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15988LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15988LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=4;i=15989 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_Argument variablenode_ns_4_i_15989_variant_DataContents[5];

UA_init(&variablenode_ns_4_i_15989_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_4_i_15989_variant_DataContents[0].name = UA_STRING("Name");
variablenode_ns_4_i_15989_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_4_i_15989_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_4_i_15989_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_4_i_15989_variant_DataContents[1].name = UA_STRING("Frame");
variablenode_ns_4_i_15989_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
variablenode_ns_4_i_15989_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_4_i_15989_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_4_i_15989_variant_DataContents[2].name = UA_STRING("Mass");
variablenode_ns_4_i_15989_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
variablenode_ns_4_i_15989_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_4_i_15989_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_4_i_15989_variant_DataContents[3].name = UA_STRING("CenterOfMass");
variablenode_ns_4_i_15989_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
variablenode_ns_4_i_15989_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_4_i_15989_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_4_i_15989_variant_DataContents[4].name = UA_STRING("Inertia");
variablenode_ns_4_i_15989_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 18808LU);
variablenode_ns_4_i_15989_variant_DataContents[4].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_4_i_15989_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15989LU),
UA_NODEID_NUMERIC(ns[4], 15988LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);





retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15989LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15989LU)
);
}

/* ParameterSet - ns=4;i=15769 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15769LU),
UA_NODEID_NUMERIC(ns[4], 15768LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15769LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15769LU)
);
}

/* UnderControl - ns=4;i=16010 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnderControl");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AxisUnderControl indicates whether the actuators of the MotionDevice are under\\n              power and control:\"true\".\\nThe MotionDevice can however be at standstill.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 16010LU),
UA_NODEID_NUMERIC(ns[4], 15769LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "UnderControl"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16010LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16010LU)
);
}

/* DeviceOnPath - ns=4;i=16008 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceOnPath");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The DeviceOnPath indicates whether the motion device is on the planned program\\n              path:\"true\".\\nIf the MotionDevice leaves this path in the failure case or in an emergency\\n              stop, this value is \"false\".");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 16008LU),
UA_NODEID_NUMERIC(ns[4], 15769LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "DeviceOnPath"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16008LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16008LU)
);
}

/* ProgrammedDeviceSpeed - ns=4;i=16009 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProgrammedDeviceSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ProgrammedDeviceSpeed is the programmed motion device speed (0-100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 16009LU),
UA_NODEID_NUMERIC(ns[4], 15769LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "ProgrammedDeviceSpeed"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 16009LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 16009LU)
);
}

/* ICartesianMoveSkillParameterType - ns=4;i=15265 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ICartesianMoveSkillParameterType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The interface definition of a cartesian move skill.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15265LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "ICartesianMoveSkillParameterType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15265LU)
);
}

/* ParameterSet - ns=4;i=15266 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15266LU),
UA_NODEID_NUMERIC(ns[4], 15265LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15266LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15266LU)
);
}

/* TargetPosition - ns=4;i=15267 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TargetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Absolute goal position in cartesian space");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15267LU),
UA_NODEID_NUMERIC(ns[4], 15266LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "TargetPosition"),
UA_NODEID_NUMERIC(ns[0], 18791LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15267LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15267LU)
);
}

/* CartesianCoordinates - ns=4;i=15268 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15268LU),
UA_NODEID_NUMERIC(ns[4], 15267LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CartesianCoordinates"),
UA_NODEID_NUMERIC(ns[0], 18774LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15268LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15268LU)
);
}

/* X - ns=4;i=15275 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15275LU),
UA_NODEID_NUMERIC(ns[4], 15268LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15275LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15275LU)
);
}

/* Y - ns=4;i=15276 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15276LU),
UA_NODEID_NUMERIC(ns[4], 15268LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15276LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15276LU)
);
}

/* Z - ns=4;i=15277 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15277LU),
UA_NODEID_NUMERIC(ns[4], 15268LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15277LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15277LU)
);
}

/* Orientation - ns=4;i=15270 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15270LU),
UA_NODEID_NUMERIC(ns[4], 15267LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Orientation"),
UA_NODEID_NUMERIC(ns[0], 18781LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15270LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15270LU)
);
}

/* C - ns=4;i=15280 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15280LU),
UA_NODEID_NUMERIC(ns[4], 15270LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "C"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15280LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15280LU)
);
}

/* B - ns=4;i=15279 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15279LU),
UA_NODEID_NUMERIC(ns[4], 15270LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "B"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15279LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15279LU)
);
}

/* A - ns=4;i=15278 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15278LU),
UA_NODEID_NUMERIC(ns[4], 15270LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "A"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15278LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15278LU)
);
}

/* AxisBounds - ns=4;i=15281 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
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
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Define a range within which the joints should end up in. Used to limit the solutions for the\\n              inverse kinematics calculation.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15281LU),
UA_NODEID_NUMERIC(ns[4], 15266LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "AxisBounds"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15281LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15281LU)
);
}

/* IJointMoveSkillParameterType - ns=4;i=15287 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "IJointMoveSkillParameterType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The interface definition of a joint move skill.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15287LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "IJointMoveSkillParameterType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15287LU)
);
}

/* ParameterSet - ns=4;i=15288 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15288LU),
UA_NODEID_NUMERIC(ns[4], 15287LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15288LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15288LU)
);
}

/* TargetJointPosition - ns=4;i=15289 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.displayName = UA_LOCALIZEDTEXT("", "TargetJointPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The new axis position array where the device should move to");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15289LU),
UA_NODEID_NUMERIC(ns[4], 15288LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "TargetJointPosition"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15289LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15289LU)
);
}

/* EURange - ns=4;i=15293 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15293LU),
UA_NODEID_NUMERIC(ns[4], 15289LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15293LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15293LU)
);
}

/* PositionStreamSkillType - ns=4;i=15686 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "PositionStreamSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using position streaming");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15686LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "PositionStreamSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15686LU)
);
}

/* ParameterSet - ns=4;i=15753 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15753LU),
UA_NODEID_NUMERIC(ns[4], 15686LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15753LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15753LU)
);
}

/* TargetPosition - ns=4;i=15754 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 18814LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TargetPosition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Absolute position in cartesian space where the robot should move to.\\n              As soon as there is a new value written to this variable, the robot will move to that position if the\\n              skill is in running state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15754LU),
UA_NODEID_NUMERIC(ns[4], 15753LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "TargetPosition"),
UA_NODEID_NUMERIC(ns[0], 18791LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15754LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15754LU)
);
}

/* CartesianCoordinates - ns=4;i=15755 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15755LU),
UA_NODEID_NUMERIC(ns[4], 15754LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CartesianCoordinates"),
UA_NODEID_NUMERIC(ns[0], 18774LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15755LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15755LU)
);
}

/* Z - ns=4;i=15764 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15764LU),
UA_NODEID_NUMERIC(ns[4], 15755LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Z"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15764LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15764LU)
);
}

/* Y - ns=4;i=15763 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15763LU),
UA_NODEID_NUMERIC(ns[4], 15755LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Y"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15763LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15763LU)
);
}

/* X - ns=4;i=15762 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15762LU),
UA_NODEID_NUMERIC(ns[4], 15755LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "X"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15762LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15762LU)
);
}

/* Orientation - ns=4;i=15757 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15757LU),
UA_NODEID_NUMERIC(ns[4], 15754LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Orientation"),
UA_NODEID_NUMERIC(ns[0], 18781LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15757LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15757LU)
);
}

/* A - ns=4;i=15765 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15765LU),
UA_NODEID_NUMERIC(ns[4], 15757LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "A"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15765LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15765LU)
);
}

/* C - ns=4;i=15767 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15767LU),
UA_NODEID_NUMERIC(ns[4], 15757LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "C"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15767LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15767LU)
);
}

/* B - ns=4;i=15766 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15766LU),
UA_NODEID_NUMERIC(ns[4], 15757LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "B"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15766LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15766LU)
);
}

/* StreamSkillType - ns=4;i=15619 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "StreamSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using position streaming");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15619LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "StreamSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15619LU)
);
}

/* MoveSkillType - ns=4;i=15034 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MoveSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using a specific tool frame");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15034LU),
UA_NODEID_NUMERIC(ns[3], 15034LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "MoveSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15034LU)
);
}

/* LinearMoveSkillType - ns=4;i=15103 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "LinearMoveSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using a specific tool in a linear motion");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15103LU),
UA_NODEID_NUMERIC(ns[4], 15034LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "LinearMoveSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15103LU)
);
}

/* JointLinearMoveSkillType - ns=4;i=15376 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JointLinearMoveSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using a specific tool in a linear motion with cartesian target");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15376LU),
UA_NODEID_NUMERIC(ns[4], 15103LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "JointLinearMoveSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15376LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15287LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15376LU)
);
}

/* ParameterSet - ns=4;i=15170 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15170LU),
UA_NODEID_NUMERIC(ns[4], 15103LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15170LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15170LU)
);
}

/* MaxAcceleration - ns=4;i=15172 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15172LU),
UA_NODEID_NUMERIC(ns[4], 15170LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxAcceleration"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15172LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15172LU)
);
}

/* EURange - ns=4;i=15176 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15176LU),
UA_NODEID_NUMERIC(ns[4], 15172LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15176LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15176LU)
);
}

/* MaxVelocity - ns=4;i=15178 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15178LU),
UA_NODEID_NUMERIC(ns[4], 15170LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxVelocity"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15178LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15178LU)
);
}

/* EURange - ns=4;i=15182 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15182LU),
UA_NODEID_NUMERIC(ns[4], 15178LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15182LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15182LU)
);
}

/* CartesianLinearMoveSkillType - ns=4;i=15295 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CartesianLinearMoveSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using a specific tool in a linear motion with cartesian target");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15295LU),
UA_NODEID_NUMERIC(ns[4], 15103LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "CartesianLinearMoveSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15295LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15265LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15295LU)
);
}

/* PtpMoveSkillType - ns=4;i=15184 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "PtpMoveSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using a specific tool in a point-to-point motion");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15184LU),
UA_NODEID_NUMERIC(ns[4], 15034LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "PtpMoveSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15184LU)
);
}

/* JointPtpMoveSkillType - ns=4;i=15538 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JointPtpMoveSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using a specific tool in a ptp motion with cartesian target");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15538LU),
UA_NODEID_NUMERIC(ns[4], 15184LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "JointPtpMoveSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15538LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15287LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15538LU)
);
}

/* CartesianPtpMoveSkillType - ns=4;i=15457 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CartesianPtpMoveSkillType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Move a robot using a specific tool in a ptp motion with cartesian target");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[4], 15457LU),
UA_NODEID_NUMERIC(ns[4], 15184LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[4], "CartesianPtpMoveSkillType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15457LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[4], 15265LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15457LU)
);
}

/* ParameterSet - ns=4;i=15251 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15251LU),
UA_NODEID_NUMERIC(ns[4], 15184LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15251LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15251LU)
);
}

/* MaxAcceleration - ns=4;i=15253 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15253LU),
UA_NODEID_NUMERIC(ns[4], 15251LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxAcceleration"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15253LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15253LU)
);
}

/* EURange - ns=4;i=15257 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15257LU),
UA_NODEID_NUMERIC(ns[4], 15253LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15257LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15257LU)
);
}

/* MaxVelocity - ns=4;i=15259 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15259LU),
UA_NODEID_NUMERIC(ns[4], 15251LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "MaxVelocity"),
UA_NODEID_NUMERIC(ns[0], 2368LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15259LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15259LU)
);
}

/* EURange - ns=4;i=15263 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15263LU),
UA_NODEID_NUMERIC(ns[4], 15259LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15263LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15263LU)
);
}

/* ParameterSet - ns=4;i=15101 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15101LU),
UA_NODEID_NUMERIC(ns[4], 15034LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15101LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15101LU)
);
}

/* ToolFrame - ns=4;i=15102 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15102LU),
UA_NODEID_NUMERIC(ns[4], 15101LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "ToolFrame"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[4], 15102LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15102LU)
);
}

/* https://fortiss.org/UA/Robotics/ - ns=4;i=15001 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://fortiss.org/UA/Robotics/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[4], "https://fortiss.org/UA/Robotics/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15001LU)
);
}

/* StaticNumericNodeIdRange - ns=4;i=15007 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_String variablenode_ns_4_i_15007_variant_DataContents[1];
variablenode_ns_4_i_15007_variant_DataContents[0] = UA_STRING("1:65535");
UA_Variant_setArray(&attr.value, &variablenode_ns_4_i_15007_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15007LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15007LU)
);
}

/* StaticNodeIdTypes - ns=4;i=15006 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_Int32 variablenode_ns_4_i_15006_variant_DataContents[1];
variablenode_ns_4_i_15006_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_4_i_15006_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15006LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15006LU)
);
}

/* IsNamespaceSubset - ns=4;i=15005 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_4_i_15005_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_4_i_15005_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_4_i_15005_variant_DataContents);
*variablenode_ns_4_i_15005_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_4_i_15005_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15005LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_4_i_15005_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15005LU)
);
}

/* NamespacePublicationDate - ns=4;i=15004 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_4_i_15004_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_4_i_15004_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_4_i_15004_variant_DataContents);
*variablenode_ns_4_i_15004_variant_DataContents = ( (UA_DateTime)(1546300800000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_4_i_15004_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15004LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_4_i_15004_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15004LU)
);
}

/* NamespaceVersion - ns=4;i=15003 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_4_i_15003_variant_DataContents =  UA_String_new();
if (!variablenode_ns_4_i_15003_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_4_i_15003_variant_DataContents);
*variablenode_ns_4_i_15003_variant_DataContents = UA_STRING_ALLOC("1.00");
UA_Variant_setScalar(&attr.value, variablenode_ns_4_i_15003_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15003LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_4_i_15003_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15003LU)
);
}

/* NamespaceUri - ns=4;i=15002 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_4_i_15002_variant_DataContents =  UA_String_new();
if (!variablenode_ns_4_i_15002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_4_i_15002_variant_DataContents);
*variablenode_ns_4_i_15002_variant_DataContents = UA_STRING_ALLOC("https://fortiss.org/UA/Robotics/");
UA_Variant_setScalar(&attr.value, variablenode_ns_4_i_15002_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15002LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_4_i_15002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15002LU)
);
}

/* DefaultUserRolePermissions - ns=4;i=15032 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15032LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultUserRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15032LU)
);
}

/* DefaultAccessRestrictions - ns=4;i=15033 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15033LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultAccessRestrictions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15033LU)
);
}

/* StaticStringNodeIdPattern - ns=4;i=15008 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_4_i_15008_variant_DataContents =  UA_String_new();
if (!variablenode_ns_4_i_15008_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_4_i_15008_variant_DataContents);
*variablenode_ns_4_i_15008_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_4_i_15008_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[4], 15008LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_4_i_15008_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15008LU)
);
}

/* DefaultRolePermissions - ns=4;i=15031 */

static UA_StatusCode function_namespace_fortiss_robotics_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_NODEID_NUMERIC(ns[4], 15031LU),
UA_NODEID_NUMERIC(ns[4], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_fortiss_robotics_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[4], 15031LU)
);
}

static UA_DataTypeArray customUA_TYPES_FORTISS_DI = {
    NULL,
    UA_TYPES_FORTISS_DI_COUNT,
    UA_TYPES_FORTISS_DI
};

static UA_DataTypeArray customUA_TYPES_FORTISS_ROBOTICS = {
    NULL,
    UA_TYPES_FORTISS_ROBOTICS_COUNT,
    UA_TYPES_FORTISS_ROBOTICS
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

UA_StatusCode namespace_fortiss_robotics_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[5];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/Robotics/");
ns[3] = UA_Server_addNamespace(server, "https://fortiss.org/UA/DI/");
ns[4] = UA_Server_addNamespace(server, "https://fortiss.org/UA/Robotics/");

/* Load custom datatype definitions into the server */
if(UA_TYPES_FORTISS_DI_COUNT > 0) {
customUA_TYPES_FORTISS_DI.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_FORTISS_DI;

}
if(UA_TYPES_FORTISS_ROBOTICS_COUNT > 0) {
customUA_TYPES_FORTISS_ROBOTICS.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_FORTISS_ROBOTICS;

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
!(retVal = function_namespace_fortiss_robotics_generated_0_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_1_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_2_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_3_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_4_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_5_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_6_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_7_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_8_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_9_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_10_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_11_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_12_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_13_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_14_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_15_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_16_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_17_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_18_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_19_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_20_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_21_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_22_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_23_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_24_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_25_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_26_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_27_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_28_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_29_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_30_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_31_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_32_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_33_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_34_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_35_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_36_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_37_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_38_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_39_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_40_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_41_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_42_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_43_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_44_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_45_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_46_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_47_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_48_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_49_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_50_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_51_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_52_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_53_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_54_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_55_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_56_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_57_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_58_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_59_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_60_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_61_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_62_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_63_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_64_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_65_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_66_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_67_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_68_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_69_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_70_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_71_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_72_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_73_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_74_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_75_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_76_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_77_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_78_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_79_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_80_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_81_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_82_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_83_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_84_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_85_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_86_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_87_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_88_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_89_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_90_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_91_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_92_begin(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_92_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_91_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_90_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_89_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_88_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_87_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_86_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_85_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_84_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_83_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_82_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_81_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_80_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_79_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_78_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_77_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_76_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_75_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_74_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_73_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_72_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_71_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_70_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_69_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_68_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_67_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_66_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_65_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_64_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_63_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_62_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_61_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_60_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_59_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_58_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_57_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_56_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_55_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_54_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_53_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_52_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_51_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_50_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_49_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_48_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_47_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_46_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_45_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_44_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_43_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_42_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_41_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_40_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_39_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_38_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_37_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_36_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_35_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_34_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_33_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_32_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_31_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_30_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_29_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_28_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_27_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_26_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_25_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_24_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_23_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_22_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_21_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_20_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_19_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_18_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_17_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_16_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_15_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_14_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_13_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_12_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_11_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_10_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_9_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_8_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_7_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_6_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_5_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_4_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_3_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_2_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_1_finish(server, ns))
&& !(retVal = function_namespace_fortiss_robotics_generated_0_finish(server, ns))
); (void)(dummy);
return retVal;
}
