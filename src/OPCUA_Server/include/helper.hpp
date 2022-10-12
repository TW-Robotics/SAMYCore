/*
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 *
 *    Copyright (c) 2020 fortiss GmbH, Stefan Profanter
 *    All rights reserved.
 */

#include <utility>

//
// Created by profanter on 12/4/18.
// Copyright (c) 2018 fortiss GmbH. All rights reserved.
//

#ifndef ROBOTICS_COMMON_OPCUA_HELPER_H
#define ROBOTICS_COMMON_OPCUA_HELPER_H
#pragma once

#include <future>
#include <sys/stat.h>

#include <open62541/server_config_default.h>
#include <open62541/client.h>
#include <open62541/plugin/pki_default.h>
#include <open62541/plugin/accesscontrol_default.h>

#include <open62541/plugin/nodestore_default.h>

#include <open62541/client_config_default.h>

#include <logging_opcua.h>

#include <exception>
#include <spdlog/spdlog.h>
#include <sstream>

#include <fortiss_di_nodeids.h>

#define NAMESPACE_URI_DI "http://opcfoundation.org/UA/DI/"
#define NAMESPACE_URI_ROB "http://opcfoundation.org/UA/Robotics/"
#define NAMESPACE_URI_FOR_DI "https://fortiss.org/UA/Device/"
#define NAMESPACE_URI_FOR_ROB "https://fortiss.org/UA/Robotics/"


#ifndef RAD_TO_DEG
#define RAD_TO_DEG (180.0/M_PI)
#endif

#ifndef DEG_TO_RAD
#define DEG_TO_RAD (M_PI/180.0)
#endif

#include <synchronized.hpp>
#include <map>
#include <set>
#include <OpcUaServer.h>

typedef locked_ptr<UA_Client, std::mutex> LockedClient;
typedef synchronized<UA_Client> MutexedClient;

namespace SAMY {
    namespace OPCUA {

        class NodeNotFoundException : public std::exception {
        private:
            std::string message_;
        public:
            explicit NodeNotFoundException(
                    const std::string& nodeId,
                    const std::string& additionalInfo = ""
            ){
                message_ = "OPC UA NodeNotFound Exception: " + nodeId;

                if (additionalInfo.length())
                    message_ += " " + additionalInfo;
            }

            const char* what() const noexcept override {
                return message_.c_str();
            }
        };


        class StatusCodeException : public std::exception {
        private:
            UA_StatusCode code;
            std::string msg_;

        public:
            explicit StatusCodeException(
                    UA_StatusCode code,
                    const std::string& msg = ""
            ) : code(code){
                msg_ = "StatusCode: " + std::string(UA_StatusCode_name(code));

                if (msg.length())
                    msg_ += ". " + msg;
            }

            const char* what() const noexcept override {
                return msg_.c_str();
            }

            UA_StatusCode get_code() const { return code; }

            std::string get_msg() const { return msg_; }
        };

        template<typename PROMISE_TYPE>
        inline std::future<PROMISE_TYPE> setPromiseErrorException(
                std::promise<PROMISE_TYPE>* promise,
                UA_StatusCode code
        ){
            try {
                throw SAMY::OPCUA::StatusCodeException(code);
            } catch (SAMY::OPCUA::StatusCodeException& ex){
                promise->set_exception(std::current_exception());
                return promise->get_future();
            }
        }

        // use recursive mutex to allow multiple locks within the same thread, but not between different threads
        static std::recursive_mutex serverMutex;

        inline UA_StatusCode
        UA_ServerConfig_setUriName(
                UA_ServerConfig* uaServerConfig,
                const char* uri,
                const char* name
        ){
            // delete pre-initialized values
            UA_String_deleteMembers(&uaServerConfig->applicationDescription.applicationUri);
            UA_LocalizedText_deleteMembers(&uaServerConfig->applicationDescription.applicationName);

            std::string opcUaUri(uri);
            std::string opcUaName(name);

            uaServerConfig->applicationDescription.applicationUri = UA_String_fromChars(opcUaUri.c_str());
            uaServerConfig->applicationDescription.applicationName.locale = UA_STRING_NULL;
            uaServerConfig->applicationDescription.applicationName.text = UA_String_fromChars(opcUaName.c_str());

            for (size_t i = 0; i < uaServerConfig->endpointsSize; i++){
                UA_String_deleteMembers(&uaServerConfig->endpoints[i].server.applicationUri);
                UA_LocalizedText_deleteMembers(
                        &uaServerConfig->endpoints[i].server.applicationName);

                UA_String_copy(&uaServerConfig->applicationDescription.applicationUri,
                               &uaServerConfig->endpoints[i].server.applicationUri);

                UA_LocalizedText_copy(&uaServerConfig->applicationDescription.applicationName,
                                      &uaServerConfig->endpoints[i].server.applicationName);
            }

            return UA_STATUSCODE_GOOD;
        }

inline const std::shared_ptr<UA_NodeId> UA_Server_getObjectChildId(
                UA_Server* server,
                const UA_NodeId objectId,
                const UA_QualifiedName childName,
                const UA_NodeId reference
        ){
            UA_RelativePathElement rpe;
            UA_RelativePathElement_init(&rpe);
            rpe.referenceTypeId = reference;
            rpe.isInverse = false;
            rpe.includeSubtypes = false;
            rpe.targetName = childName;

            UA_BrowsePath bp;
            UA_BrowsePath_init(&bp);
            bp.startingNode = objectId;
            bp.relativePath.elementsSize = 1;
            bp.relativePath.elements = &rpe;

            UA_StatusCode retval;
            UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);
            retval = bpr.statusCode;
            if (retval != UA_STATUSCODE_GOOD || bpr.targetsSize < 1){
                UA_BrowsePathResult_deleteMembers(&bpr);
                std::string qualifiedName = "ns=" + std::to_string(childName.namespaceIndex) + ";"
                                            + std::string(reinterpret_cast<char const*>(childName.name.data),
                                                          childName.name.length);
                std::string errorMessage = std::string(UA_StatusCode_name(retval));
                throw SAMY::OPCUA::NodeNotFoundException(qualifiedName, errorMessage);
            }

            UA_NodeId* nodeId = UA_NodeId_new();

            UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, nodeId);

            UA_BrowsePathResult_deleteMembers(&bpr);

            return std::shared_ptr<UA_NodeId>(nodeId, UA_NodeId_delete);
        }

        inline const std::shared_ptr<UA_NodeId> UA_Server_getObjectChildId(
                const std::shared_ptr<OpcUaServer>& uaServer,
                const UA_NodeId objectId,
                const UA_QualifiedName childName,
                const UA_NodeId reference
        ){
            LockedServer ls = uaServer->getLocked();
            return UA_Server_getObjectChildId(ls.get(), objectId, childName, reference);

        }

        inline const std::shared_ptr<UA_NodeId>
        UA_Server_getObjectComponentId(
                UA_Server* server,
                const UA_NodeId objectId,
                const UA_QualifiedName componentName
        ){
            return UA_Server_getObjectChildId(server, objectId, componentName,
                                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT));
        }

        inline const std::shared_ptr<UA_NodeId>
        UA_Server_getObjectComponentId(
                const std::shared_ptr<SAMY::OPCUA::OpcUaServer>& uaServer,
                const UA_NodeId objectId,
                const UA_QualifiedName componentName
        ){
            return UA_Server_getObjectChildId(uaServer, objectId, componentName,
                                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT));
        }

        inline const std::shared_ptr<UA_NodeId>
        UA_Server_getObjectComponentId_or_Null(
                UA_Server* server,
                const UA_NodeId objectId,
                const UA_QualifiedName componentName
        ){
            try {
                return UA_Server_getObjectChildId(server, objectId, componentName,
                                                  UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT));
            } catch (SAMY::OPCUA::NodeNotFoundException& ex){
                return NULL;
            }
        }

        inline const std::shared_ptr<UA_NodeId>
        UA_Server_getObjectComponentId_or_Null(
                const std::shared_ptr<SAMY::OPCUA::OpcUaServer>& uaServer,
                const UA_NodeId objectId,
                const UA_QualifiedName componentName
        ){
            try {
                return UA_Server_getObjectChildId(uaServer, objectId, componentName,
                                                  UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT));
            } catch (SAMY::OPCUA::NodeNotFoundException& ex){
                return NULL;
            }
        }

        inline const std::shared_ptr<UA_NodeId>
        UA_Server_getObjectPropertyId(
                UA_Server* server,
                const UA_NodeId objectId,
                const UA_QualifiedName propertyName
        ){
            return UA_Server_getObjectChildId(server, objectId, propertyName,
                                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY));
        }

        inline const std::shared_ptr<UA_NodeId>
        UA_Server_getObjectPropertyId(
                const std::shared_ptr<SAMY::OPCUA::OpcUaServer>& uaServer,
                const UA_NodeId objectId,
                const UA_QualifiedName propertyName
        ){
            return UA_Server_getObjectChildId(uaServer, objectId, propertyName,
                                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY));
        }

        inline UA_StatusCode
        initServerConfig(
                const std::shared_ptr<spdlog::logger>& logger,
                UA_ServerConfig* config,
                const std::string& appUri,
                const std::string& appName,
                UA_UInt16 serverPort,
                UA_UInt32 sendBufferSize = 0,
                UA_UInt32 recvBufferSize = 0
        ){

            memset(config, 0, sizeof(UA_ServerConfig));

            config->logger.log = SAMY::Logging::opcua::UA_Log_Spdlog_log;
            config->logger.context = logger.get();
            config->logger.clear = SAMY::Logging::opcua::UA_Log_Spdlog_clear;

            UA_StatusCode retval = UA_ServerConfig_setBasics(config);
            if (retval != UA_STATUSCODE_GOOD){
                logger->error("Cannot set basic server configuration. {}", UA_StatusCode_name(retval));
                return retval;
            }


            retval = UA_ServerConfig_addNetworkLayerTCP(config, serverPort, sendBufferSize, recvBufferSize);

            if (retval != UA_STATUSCODE_GOOD){
                logger->error("Cannot set server configuration. AddNetworkLayer. {}", UA_StatusCode_name(retval));
                return retval;
            }

            /* Allocate the SecurityPolicies */
            retval = UA_ServerConfig_addSecurityPolicyNone(config, NULL);
            if (retval != UA_STATUSCODE_GOOD){
                logger->error("Cannot set server configuration. AddSecurityPolicyNone. {}", UA_StatusCode_name(retval));
                return retval;
            }

            /* Initialize the Access Control plugin */
            static const size_t usernamePasswordsSize = 2;
            static UA_UsernamePasswordLogin usernamePasswords[2] = {
                {UA_STRING_STATIC("user1"), UA_STRING_STATIC("password")},
                {UA_STRING_STATIC("user2"), UA_STRING_STATIC("password1")}};

            retval = UA_AccessControl_default(config, true,
                        &config->securityPolicies[config->securityPoliciesSize-1].policyUri,
                        0, NULL);
            if(retval != UA_STATUSCODE_GOOD) {
                UA_ServerConfig_clean(config);
                return retval;
            }

            retval = UA_ServerConfig_addAllEndpoints(config);
            if (retval != UA_STATUSCODE_GOOD){
                logger->error("Cannot set server configuration. AddEndpoint. {}", UA_StatusCode_name(retval));
                return retval;
            }

            SAMY::OPCUA::UA_ServerConfig_setUriName(config, appUri.c_str(),
                                                       appName.c_str());

            return UA_STATUSCODE_GOOD;

    }
}
}


#endif //ROBOTICS_COMMON_OPCUA_HELPER_H
