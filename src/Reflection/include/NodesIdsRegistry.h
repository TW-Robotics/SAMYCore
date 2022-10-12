#pragma once

#include <iostream>
#include <memory>
#include <unordered_map>
#include <type_traits>
#include <functional>

#include <open62541/types.h>

namespace SAMY{
namespace Reflection{

    /* Allows retrieving a type node id from the name of the type */
    struct NodesIdsRegistry{
            NodesIdsRegistry(const NodesIdsRegistry&) = delete;
            NodesIdsRegistry(NodesIdsRegistry&&) noexcept = delete;
            NodesIdsRegistry& operator=(const NodesIdsRegistry&) = delete;
            NodesIdsRegistry& operator=(NodesIdsRegistry&&) noexcept = delete;

            static void addNodeId( const std::string& typeName, const UA_NodeId& node ){
                    auto& nodes = getNodesIds_int();
                    nodes.insert( { typeName, node } ); 
            }
            
            static const UA_NodeId& getNodeId( const std::string& typeName ){
                auto& nodes = getNodesIds_int();
                auto it = nodes.find(typeName);
                if( it != nodes.end() )
                    return it->second;
                throw;
            }

            static const std::unordered_map< std::string, UA_NodeId >& getNodesIds(){
                NodesIdsRegistry& reg = getInstance();
                return reg.nodes;
            }

        private:
            NodesIdsRegistry(){}
            std::unordered_map< std::string, UA_NodeId > nodes;
            static NodesIdsRegistry& getInstance(){
                static NodesIdsRegistry reg{};
                return reg;
            }
            static std::unordered_map< std::string, UA_NodeId >& getNodesIds_int(){
                NodesIdsRegistry& reg = getInstance();
                return reg.nodes;
            }
    };

    
}
}

