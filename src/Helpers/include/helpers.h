#ifndef HELPERS_H
#define HELPERS_H

#include <vector>
#include <variant>
#include <exception>
#include <stdexcept>
#include <type_traits>
#include <iostream>
#include <map>
#include <mutex>
#include <queue>

#include <namespace_crcl_generated.h>
#include <types_crcl_generated_handling.h>
#include <ProgramState.h>
#include <ProgramTransition.h>
#include <NodesIdsRegistry.h>

#include <logging_opcua.h>

#include <spdlog/spdlog.h>

#include <open62541/server_config_default.h>

#define CRCLSKILLS_NODE_ID 9999

namespace SAMY {

template <typename T>
class FiniteDeque{
    public:
        FiniteDeque(const int size): maxSize(size){}
        const std::deque<T>& getDeque(){return deque;}
        const std::int32_t getMaxSize(){return maxSize;}
        std::int32_t getSize(){return deque.size();}
        void addElement(const T& elem){
            if( deque.size() == 100 ){
                deque.pop_front();
                deque.push_back(elem);
            }else{
                deque.push_back(elem);
            }
        }
    private:
        std::deque<T> deque;
        std::int32_t maxSize = 100;
};

// Used in robotsNodesAddition
inline std::vector< std::pair< std::string, UA_NodeId> > UA_Server_getNodeComponents( UA_Server* server,
                                                                                    const UA_NodeId& parentNode ){
    std::vector< std::pair< std::string, UA_NodeId> > retVal;

    UA_BrowseDescription bDes;
    UA_BrowseDescription_init(&bDes);
    bDes.nodeId = parentNode;
    bDes.resultMask = UA_BROWSERESULTMASK_ALL;
    UA_BrowseResult bRes = UA_Server_browse(server, 0, &bDes);

    for( int i = 0; i < bRes.referencesSize; i++ ){
        /* Sometimes the array of data contains after the relevant data non-zero characters that produce a weird behaviour.
           Using pointers and the actual size we can initialize correctly the corresponding string */
        std::string aux{ bRes.references[i].browseName.name.data,
                         bRes.references[i].browseName.name.data + bRes.references[i].browseName.name.length };

        if( (bRes.references[i].referenceTypeId.identifier.numeric == UA_NS0ID_HASCOMPONENT
                || bRes.references[i].referenceTypeId.identifier.numeric == UA_NS0ID_HASORDEREDCOMPONENT) &&
            bRes.references[i].referenceTypeId.namespaceIndex == 0 )
        {
            retVal.emplace_back( std::pair< std::string, UA_NodeId>( { aux, bRes.references[i].nodeId.nodeId } ) );
        }
    }
    UA_BrowseResult_deleteMembers(&bRes);
    return retVal;
}

inline UA_NodeId getChildNodeByBrowseName( UA_Server *server, const UA_NodeId& parentNode, char *browseName,
                                           const UA_UInt16 nameSpace, int referenceType )
{

    UA_UInt32 length = 1;
    char *paths[length] = { browseName };
    UA_UInt32 ids[length] = { referenceType };
    UA_UInt16 ns[length] = { nameSpace };

    UA_QualifiedName aux;
    UA_QualifiedName_init( &aux );
    UA_Server_readBrowseName( server, parentNode, &aux );

    UA_BrowsePath browsePath;
    UA_BrowsePath_init(&browsePath);
    browsePath.startingNode = parentNode;
    browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
    browsePath.relativePath.elementsSize = length;

    for(size_t i = 0; i < length; i++) {
        UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
        elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
        elem->targetName = UA_QUALIFIEDNAME_ALLOC(ns[i], paths[i]);
    }

    UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
    if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
        throw std::runtime_error("COMPONENT NODE COULD NOT BE FOUND IN BROWSEPATH");

//    UA_BrowsePathResult_deleteMembers(&res);
    UA_BrowsePath_clear( &browsePath );

    return res.targets->targetId.nodeId;
}

inline UA_NodeId getComponentNodeByBrowseName( UA_Server *server, const UA_NodeId& parentNode, char *browseName, const UA_UInt16 nameSpace ){
    return std::move( getChildNodeByBrowseName( server, parentNode, browseName, nameSpace, UA_NS0ID_HASCOMPONENT ) );
}

inline UA_NodeId getSubtypeNodeByBrowseName( UA_Server *server, const UA_NodeId& parentNode, char *browseName, const UA_UInt16 nameSpace ){
    return std::move( getChildNodeByBrowseName( server, parentNode, browseName, nameSpace, UA_NS0ID_HASSUBTYPE ) );
}

static const std::vector<ProgramTransition>
generateTransitions( UA_Server* server) {
    getComponentNodeByBrowseName( server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE), "HaltedToReady", 0 );

    return {ProgramTransition(ProgramTransitionNumber::HALTED_TO_READY,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                            "HaltedToReady", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Halted to Ready")),
                              ProgramStateNumber::HALTED, ProgramStateNumber::READY),
            ProgramTransition(ProgramTransitionNumber::READY_TO_RUNNING,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                            "ReadyToRunning", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Ready to Running")),
                              ProgramStateNumber::READY, ProgramStateNumber::RUNNING),
            ProgramTransition(ProgramTransitionNumber::RUNNING_TO_HALTED,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                            "RunningToHalted", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Running to Halted")),
                              ProgramStateNumber::RUNNING, ProgramStateNumber::HALTED),
            ProgramTransition(ProgramTransitionNumber::RUNNING_TO_READY,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                              "RunningToReady", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Running to Ready")),
                              ProgramStateNumber::RUNNING, ProgramStateNumber::READY),
            ProgramTransition(ProgramTransitionNumber::RUNNING_TO_SUSPENDED,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                             "RunningToSuspended", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"),
                                               const_cast<char*>("Running to Suspended")),
                              ProgramStateNumber::RUNNING, ProgramStateNumber::SUSPENDED),
            ProgramTransition(ProgramTransitionNumber::SUSPENDED_TO_RUNNING,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                            "SuspendedToRunning", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"),
                                               const_cast<char*>("Suspended to Running")),
                              ProgramStateNumber::SUSPENDED, ProgramStateNumber::RUNNING),
            ProgramTransition(ProgramTransitionNumber::SUSPENDED_TO_HALTED,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                            "SuspendedToHalted", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"),
                                               const_cast<char*>("Suspended to Halted")),
                              ProgramStateNumber::SUSPENDED, ProgramStateNumber::HALTED),
            ProgramTransition(ProgramTransitionNumber::SUSPENDED_TO_READY,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                            "SuspendedToReady", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Suspended to Ready")),
                              ProgramStateNumber::SUSPENDED, ProgramStateNumber::READY),
            ProgramTransition(ProgramTransitionNumber::READY_TO_HALTED,
                              std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                          server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                            "ReadyToHalted", 0 )),
                              UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Ready to Halted")),
                              ProgramStateNumber::READY, ProgramStateNumber::HALTED)};
}

static const std::vector<ProgramState> generateStates( UA_Server* server) {
    return {ProgramState(ProgramStateNumber::HALTED,
                         std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                     server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                        "Halted", 0)),
                         UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Halted"))),
            ProgramState(ProgramStateNumber::READY,
                         std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                     server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                         "Ready", 0)),
                         UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Ready"))),
            ProgramState(ProgramStateNumber::RUNNING,
                         std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                     server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                         "Running", 0)),
                         UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Running"))),
            ProgramState(ProgramStateNumber::SUSPENDED,
                         std::make_unique<UA_NodeId>(SAMY::getComponentNodeByBrowseName(
                                                     server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMSTATEMACHINETYPE),
                                                         "Suspended", 0)),
                         UA_LOCALIZEDTEXT(const_cast<char*>("en-US"), const_cast<char*>("Suspended")))};
}

inline void set_typesids_in_registry_builtin(){
    for( int i = 0; i < UA_TYPES_COUNT; ++i){
        const UA_DataType type = UA_TYPES[i];
        Reflection::NodesIdsRegistry::addNodeId( type.typeName,  type.typeId );
    }
}

// Rewrite this using reflection!!
void printCRCLSkill( const UA_CRCLCommandsBufferDataType* skill);


}
#endif
