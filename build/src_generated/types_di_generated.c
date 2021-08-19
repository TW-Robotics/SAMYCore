/* Generated from Opc.Ua.Di.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-08-19 10:40:23 */

#include "types_di_generated.h"

/* FetchResultDataType */
#define FetchResultDataType_members NULL

/* DeviceHealthEnumeration */
#define DeviceHealthEnumeration_members NULL

/* ParameterResultDataType */
static UA_DataTypeMember ParameterResultDataType_members[3] = {
{
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NodePath") /* .memberName */
},
{
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ParameterResultDataType, statusCode) - offsetof(UA_ParameterResultDataType, nodePath) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusCode") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ParameterResultDataType, diagnostics) - offsetof(UA_ParameterResultDataType, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Diagnostics") /* .memberName */
},};

/* TransferResultErrorDataType */
static UA_DataTypeMember TransferResultErrorDataType_members[2] = {
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Status") /* .memberName */
},
{
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TransferResultErrorDataType, diagnostics) - offsetof(UA_TransferResultErrorDataType, status) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Diagnostics") /* .memberName */
},};

/* TransferResultDataDataType */
static UA_DataTypeMember TransferResultDataDataType_members[3] = {
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SequenceNumber") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TransferResultDataDataType, endOfResults) - offsetof(UA_TransferResultDataDataType, sequenceNumber) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndOfResults") /* .memberName */
},
{
    UA_TYPES_DI_PARAMETERRESULTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_TransferResultDataDataType, parameterDefsSize) - offsetof(UA_TransferResultDataDataType, endOfResults) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterDefs") /* .memberName */
},};
const UA_DataType UA_TYPES_DI[UA_TYPES_DI_COUNT] = {
/* FetchResultDataType */
{
    {3, UA_NODEIDTYPE_NUMERIC, {6522LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {6551LU}}, /* .binaryEncodingId */
    sizeof(UA_FetchResultDataType), /* .memSize */
    UA_TYPES_DI_FETCHRESULTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    FetchResultDataType_members  /* .members */
    UA_TYPENAME("FetchResultDataType") /* .typeName */
},
/* DeviceHealthEnumeration */
{
    {3, UA_NODEIDTYPE_NUMERIC, {6244LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_DeviceHealthEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    DeviceHealthEnumeration_members  /* .members */
    UA_TYPENAME("DeviceHealthEnumeration") /* .typeName */
},
/* ParameterResultDataType */
{
    {3, UA_NODEIDTYPE_NUMERIC, {6525LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {6554LU}}, /* .binaryEncodingId */
    sizeof(UA_ParameterResultDataType), /* .memSize */
    UA_TYPES_DI_PARAMETERRESULTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ParameterResultDataType_members  /* .members */
    UA_TYPENAME("ParameterResultDataType") /* .typeName */
},
/* TransferResultErrorDataType */
{
    {3, UA_NODEIDTYPE_NUMERIC, {15888LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {15891LU}}, /* .binaryEncodingId */
    sizeof(UA_TransferResultErrorDataType), /* .memSize */
    UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    TransferResultErrorDataType_members  /* .members */
    UA_TYPENAME("TransferResultErrorDataType") /* .typeName */
},
/* TransferResultDataDataType */
{
    {3, UA_NODEIDTYPE_NUMERIC, {15889LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {15892LU}}, /* .binaryEncodingId */
    sizeof(UA_TransferResultDataDataType), /* .memSize */
    UA_TYPES_DI_TRANSFERRESULTDATADATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    TransferResultDataDataType_members  /* .members */
    UA_TYPENAME("TransferResultDataDataType") /* .typeName */
},
};

