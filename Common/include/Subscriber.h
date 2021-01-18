#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <open62541/plugin/log_stdout.h>
/* Files namespace_foo_flt_generated.h and namespace_foo_flt_generated.c are created from FooFlt.NodeSet2.xml in the
 * /src_generated directory by CMake */
#include "crcl_opcua_nodeids.h"
#include "namespace_crcl_opcua_generated.h"
#include <signal.h>
#include <stdlib.h>

#include <open62541/plugin/pubsub_udp.h>
#include <open62541/types_generated.h>

#include "ua_pubsub.h"

#ifdef UA_ENABLE_PUBSUB_ETH_UADP
#include <open62541/plugin/pubsub_ethernet.h>
#endif

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

typedef struct {
    UA_UInt16 numericID;
    UA_String name;
    UA_NetworkAddressUrlDataType networkAddressUrl;
    UA_PubSubConnectionConfig connectionConfig;
    UA_ReaderGroupConfig readerGroupConfig;
    UA_DataSetReaderConfig dataSetReaderConfig;
    UA_NodeId connectionIdent, readerGroupIdent, dataSetReaderIdent, readerIdent;
//Custom Callback Function For Subscription So Robot Information Can Be Updated Automatically
} Subscriber_UADP;

void setDataSetMetaData(UA_DataSetMetaDataType *pMetaData, UA_String name);
void setSubscriberUADP_PubSubConnection(Subscriber_UADP* subscriber);
UA_StatusCode addSubscriberUADP_PubSubConnectionToServer(UA_Server* server, Subscriber_UADP* subscriber);
void setSubscriberUADP_ReaderGroup(Subscriber_UADP* subscriber);
UA_StatusCode addSubscriberUADP_ReaderGroupToServer(UA_Server* server, Subscriber_UADP *subscriber);
void setSubscriberUADP_DataSetReader(Subscriber_UADP* subscriber);
UA_StatusCode addSubscriberUADP_DataSetReaderToServer(UA_Server* server, Subscriber_UADP* subscriber);
UA_StatusCode addSubscriberUADP_SubscribedVariablesToServer(UA_Server* server, Subscriber_UADP* subscriber);

void configureSubscriberUADP(Subscriber_UADP* subscriber, UA_UInt16 numericID_, UA_String name_,
                                UA_NetworkAddressUrlDataType networkAddressUrl_ );
UA_StatusCode addSubscriberUADP_ToServer(UA_Server* server, Subscriber_UADP* subscriber);

/*Implementation not done yet. For simmetry with Publisher!*/
typedef struct {
    UA_UInt16 numericID;
    UA_String name;
    UA_NetworkAddressUrlDataType networkAddressUrl;
    UA_PubSubConnectionConfig connectionConfig;
    UA_ReaderGroupConfig readerGroupConfig;
    UA_DataSetReaderConfig dataSetReaderConfig;
    UA_NodeId connectionIdent, readerGroupIdent, dataSetReaderIdent;
//Custom Callback Function For Subscription So Robot Information Can Be Updated Automatically
} Subscriber_MQTT;

#if 0 /*the part regarding MQTT subscriber is commented out because is not yet implemented in open62541*/
//Implementation not done yet. For simmetry with Publisher!
void setSubscriberMQTT_PubSubConnection(Subscriber_MQTT* subscriber);
UA_StatusCode addSubscriberMQTT_PubSubConnectionToServer(UA_Server* server, Subscriber_MQTT* subscriber);
void setSubscriberMQTT_ReaderGroup(Subscriber_MQTT* subscriber);
UA_StatusCode addSubscriberMQTT_ReaderGroupToServer(UA_Server* server, Subscriber_MQTT* subscriber);
void setSubscriberMQTT_DataSetReader(Subscriber_MQTT* subscriber);
UA_StatusCode addSubscriberMQTT_DataSetReaderToServer(UA_Server* server, Subscriber_MQTT* subscriber);
UA_StatusCode addSubscriberMQTT_SubscribedVariablesToServer(UA_Server* server, Subscriber_MQTT* subscriber);
#endif


typedef enum {
    SubscriberTypeSwitch_NONE = 0,
    SubscriberTypeSwitch_SUBSCRIBER_UADP = 1,
    SubscriberTypeSwitch_SUBSCRIBER_MQTT = 2
} SubscriberTypeSwitch;

typedef struct {
    SubscriberTypeSwitch switchField;
    union {
        Subscriber_UADP subscriberUADP;
        Subscriber_MQTT subscriberMQTT;
    } subscribers;
} Subscriber;

#endif /* SUBSCRIBER_H */
