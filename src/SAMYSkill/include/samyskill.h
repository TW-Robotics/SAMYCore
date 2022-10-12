#ifndef SAMYSKILL_H
#define SAMYSKILL_H

#include <vector>
#include <functional>

#include <variant>
#include <exception>
#include <stdexcept>
#include <type_traits>
#include <iostream>
#include <map>
#include <mutex>

#include <fortiss_di_nodeids.h>

#include <ProgramState.h>
#include <ProgramTransition.h>
#include <helpers.h>
#include <logging.h>
#include <skillCallable.h>
#include <skillConfig.h>


namespace SAMY{
    struct SAMYRobot; // forward definition
}

namespace SAMY{

   class SAMYSkill
   {
   public:
       SAMYSkill( const SAMYSkillConfig& skillConfig_, std::shared_ptr<spdlog::logger> logger_ );

       /* Getters */
       inline std::string getSkillName() const { return skillConfig.skillName; }
       inline UA_NodeId getSkillTypeNodeId() const{ return skillTypeNodeId; }
       inline UA_NodeId getSkillNodeID() const{ return skillNodeID; }
       inline UA_NodeId getSkillCurrentStateNodeId() const{ return currentStateNodeId; }
       inline UA_NodeId getSkillLastTransitionNodeId() const{ return lastTransitionNodeId; }
       inline UA_NodeId getSkillParameterSetNodeId( ) const{ return parametersSetNodeId; }
       inline UA_NodeId getSkillParameterSetRealTimeNodeId( ) const{ return parametersSetRealTimeNodeId; }
       inline std::vector<std::string> getSkillParametersTypesNames( ) const{ return parametersTypesNames; }
       inline std::vector<UA_NodeId> getSkillParametersNodesIds() const{ return normalParameterNodes; }
       inline std::vector<UA_NodeId> getSkillParametersRealTimeNodesIds() const{ return realTimeParameterNodes; }
       inline SAMYSkillConfig getSkillConfig() const{ return skillConfig; }
       inline const ProgramState* getSkillCurrentState() const{ return currentState; }
       inline const ProgramTransition* getSkillLastTransition() const{ return  lastTransition; }
       inline std::shared_ptr<spdlog::logger> getLogger(){ return logger; }

       /* Setters */
       inline void setSkillTypeNodeId( const UA_NodeId& nodeId ){ skillTypeNodeId = nodeId; }
       inline void setSkillNodeID( const UA_NodeId& nodeId){ skillNodeID = nodeId; }
       /* From a ParameterSet/RealTimeParameterSet Object, it stores the NodeIds of the components of these objects
        * (which are the nodes of skill parameters) */
       UA_StatusCode setSkillParametersFromObjectComponentNodes(UA_Server *server,
                                                                           const UA_NodeId& startNode,
                                                                                    std::vector<UA_NodeId>& nodes );

       /* Other methods*/
       void addNormalParameterNodeToSkill( const UA_NodeId& node);
       void addRealTimeParameterNodeToSkill( const UA_NodeId& node);
//       bool createSkillInstance(UA_Server *server, UA_CRCLSkillDataType *opcuaSkill);
//       std::vector<UA_CRCLCommandsUnionDataType> skillToCRCLCommands( std::vector<SAMYSkill>& skills );
       bool transition( UA_Server* server, ProgramStateNumber nextState);
       UA_StatusCode initializeSkill( UA_Server* server );
       bool isTransitionAllowed( ProgramStateNumber from, ProgramStateNumber to, bool log = false );

       void executeSkill(UA_Server *server, SAMYRobot* robot );
       inline void executeSkill_DUMMY( ){ std::cout << "executeSkill_DUMMY" << std::endl;  }
       void executeSkill_DUMMY_2( UA_Server *server, SAMYRobot* robot );


   private:
       bool transition( UA_Server* server, ProgramStateNumber nextState, const UA_NodeId& eventType );
       bool transition( UA_Server* server, const ProgramState& from, ProgramStateNumber nextState, const UA_NodeId& eventType );
       UA_StatusCode triggerTransitionEvent( UA_Server* server, const ProgramState& fromState, const UA_NodeId& eventType )const;
       void fillTransitionEventBase( UA_Server* server, const UA_NodeId& eventId, const ProgramState& fromState )const;
       inline void setSkillCurrentStateNodeId( const UA_NodeId& nodeId ){ currentStateNodeId = nodeId; }
       inline void setSkillLastTransitionNodeId( const UA_NodeId& nodeId ){ lastTransitionNodeId = nodeId; }
       inline void setSkillParametersSetNodeId( const UA_NodeId& nodeId ){ parametersSetNodeId = nodeId; }
       inline void setSkillParametersSetRealTimeNodeId( const UA_NodeId& nodeId ){ parametersSetRealTimeNodeId = nodeId; }
       UA_StatusCode setSkillNormalParameterNodes( UA_Server* server );
       UA_StatusCode setSkillRealTimeParameterNodes( UA_Server* server );
       inline void setskillTransitionEventTypeNodeId( const UA_NodeId& nodeId ){ skillTransitionEventTypeNodeId = nodeId; }
       void setTransitions( UA_Server* server );
       void setStates( UA_Server* server );
       std::vector< std::string > createParameterTypesNames( );

       // void setSkillCallable( );
       SkillScripting::SkillCallable createSkillCallable( );

//       std::vector<UA_CRCLCommandsUnionDataType> commands; // CommentOut
       UA_NodeId skillTypeNodeId;
       UA_NodeId skillNodeID;
       UA_NodeId currentStateNodeId;
       UA_NodeId lastTransitionNodeId;
       UA_NodeId parametersSetNodeId;
       UA_NodeId parametersSetRealTimeNodeId;
       UA_NodeId skillTransitionEventTypeNodeId;
       std::vector<UA_NodeId> normalParameterNodes;
       std::vector<UA_NodeId> realTimeParameterNodes;

       std::vector<std::string> parametersTypesNames;

       ProgramState const * currentState = nullptr;
       ProgramTransition const * lastTransition = nullptr;
       std::vector<ProgramState> states;
       std::vector<ProgramTransition> transitions;

       std::shared_ptr<spdlog::logger> logger = nullptr;

       SAMYSkillConfig skillConfig;
       SkillScripting::SkillCallable skillCallable;

       bool skillInitialized = false;

  //     std::mutex skillInstantiationMutex;
   };

}  /* namespace SAMY */
#endif // SAMYSKILL_H
