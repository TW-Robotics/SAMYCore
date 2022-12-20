#include <samyskill.h>
#include <iostream>
#include <random> //temporary used for the ids
#include <typeinfo>

std::random_device dev;
std::mt19937 rng(dev());
std::uniform_int_distribution<std::mt19937::result_type> dist1(1,1000000); // distribution in range [1, 1000000]

#include <samycore.h>

namespace SAMY{

    /* Setters */
    UA_StatusCode SAMYSkill::setSkillNormalParameterNodes( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal = setSkillParametersFromObjectComponentNodes( server, parametersSetNodeId, normalParameterNodes );
        return retVal;
    }
    UA_StatusCode SAMYSkill::setSkillRealTimeParameterNodes( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal = setSkillParametersFromObjectComponentNodes( server, parametersSetRealTimeNodeId, realTimeParameterNodes );
        return retVal;
    }

    /* Rest of Skill methods*/
    void SAMYSkill::addNormalParameterNodeToSkill( const UA_NodeId& node){
        normalParameterNodes.emplace_back( node );
    }

    void SAMYSkill::addRealTimeParameterNodeToSkill( const UA_NodeId& node){
        realTimeParameterNodes.emplace_back( node );
    }

    /* Give a starting node (ParameterSet/ParameterSetRealTime) finds and order the corresponding parameter nodes */
    UA_StatusCode SAMYSkill::setSkillParametersFromObjectComponentNodes( UA_Server* server,
                                                                            const UA_NodeId& startNode,
                                                                                 std::vector<UA_NodeId>& nodes )
    {
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        /* The browse service does not ensure that the read nodes are ordered in any way (note: actually, I have used HasOrderedComponent, so it returns them in order, but anyway the following still
         * correct. I infer the order based on the name and I add them to the vector using [] operator, so I need first to create a vector filled with empty UA_NodeIds */
        nodes.assign( parametersTypesNames.size(), UA_NodeId() );

 

        UA_BrowseDescription bd;
        UA_BrowseDescription_init(&bd);
        bd.nodeId = startNode;
        bd.browseDirection = UA_BROWSEDIRECTION_FORWARD;
        bd.nodeClassMask = UA_BROWSERESULTMASK_ALL;
        bd.referenceTypeId = UA_NODEID_NUMERIC( 0, UA_NS0ID_HASORDEREDCOMPONENT );

 

        UA_BrowseResult br = UA_Server_browse(server, 0, &bd);
        UA_StatusCode res = br.statusCode;
        if(res != UA_STATUSCODE_GOOD) {
            UA_BrowseResult_clear(&br);
            throw std::runtime_error ( "ERROR ADDING TO ROBOT SKILL PARAMETER NODES THAT WERE ADDED TO THE SAMYCORE SERVER" );
            return res;
        }


        if( br.referencesSize > 0 )
        {
        std::cout << skillConfig.skillName << std::endl;
            UA_QualifiedName paramName;
            UA_QualifiedName_init( &paramName );
            for(int i=0; i < br.referencesSize; i++){
                UA_Server_readBrowseName( server, br.references[i].nodeId.nodeId, &paramName);
        for( int j = 0; j < skillConfig.skillParams.size(); ++j ){

 

            if(  std::string(reinterpret_cast<const char*>(paramName.name.data)) == skillConfig.skillParams[j].name ){
                nodes[j] = br.references[i].nodeId.nodeId;
            } 
        }
                std::cout << "SAMYSkill::setSkillParametersFromObjectComponentNodes____________________________________________ paramName.name   " << paramName.name.data << std::endl;
                std::cout << "SAMYSkill::setSkillParametersFromObjectComponentNodes____________________________________________" << parametersTypesNames[i] << std::endl;
                std::cout << "SAMYSkill::setSkillParametersFromObjectComponentNodes____________________________________________" << br.references[i].nodeId.nodeId.identifier.numeric << std::endl;

 

                UA_QualifiedName_clear(&paramName);
            }
        std::cout << std::endl << std::endl << std::endl;
        }
        return retVal;
    }

    /*
    std::vector<UA_CRCLCommandsUnionDataType> SAMYSkill::skillToCRCLCommands( std::vector<SAMYSkill>& skills ){
        std::vector<UA_CRCLCommandsUnionDataType> skillCommands;
        for(int i=0; i < skills.size(); i++){
            for(int j=0; j < skills[i].commands.size(); j++){
                skillCommands.emplace_back(skills[i].getSkillCommands()[j]);
            }
        }
        return skillCommands;
    }
*/
    bool SAMYSkill::isTransitionAllowed( ProgramStateNumber from, ProgramStateNumber to, bool log ){
            for (const auto& transition : transitions) {
                if ((transition.getFrom() == from) && (transition.getTo() == to))
                    return true;
            }
            if (log)
                logger->warn("Transition not allowed: {} -> {}", ProgramStateName.at(from),  ProgramStateName.at(to));

            return false;
    }


    std::shared_ptr< Scripting::FunctionCaller > createCPPFunctionCaller( const SAMYSkillConfig& config, std::vector<std::string>* paramsDataTypesNames )
    {
        Scripting::CppLoader loader{  config.entryPoint.file, config.entryPoint.functionName };
        loader.load();

        if( !loader.isReady() )
            throw;

        std::shared_ptr< Scripting::FunctionCaller > caller = std::make_shared<Scripting::CppCaller>(loader.getLibrary(), loader.getCallable(), paramsDataTypesNames);
        return caller;
    }

    std::shared_ptr< Scripting::FunctionCaller > createPythonFunctionCaller( const SAMYSkillConfig& config, std::vector<std::string>* paramsDataTypesNames )
    {
        Scripting::PythonLoader loader{ config.entryPoint.file, config.entryPoint.functionName };
        loader.load();

        if( loader.isReady() ){
            std::shared_ptr< Scripting::FunctionCaller > caller = std::make_shared<Scripting::PythonCaller>(loader.getCallable(), paramsDataTypesNames);
            return caller;
        }else{
            //THROW!!! ???
        }
    }

    SkillScripting::SkillCallable SAMYSkill::createSkillCallable(){
        switch ( skillConfig.lang ) {
        case SkillScripting::SkillScriptingLanguage::CPP:
        {
            std::shared_ptr< Scripting::FunctionCaller > caller = createCPPFunctionCaller( skillConfig, &parametersTypesNames );
            SkillScripting::SkillCallable retval{  SkillScripting::SkillScriptingLanguage::CPP, caller };
            return retval;
        }
        case SkillScripting::SkillScriptingLanguage::PYTHON:
            return SkillScripting::SkillCallable{  SkillScripting::SkillScriptingLanguage::PYTHON, createPythonFunctionCaller( skillConfig, &parametersTypesNames ) };
  //      case SkillScripting::SkillScriptingLanguage::NO_SCRIPTED:

  //      case SkillScripting::SkillScriptingLanguage::NONE:

  //      default:
  //          break;
        }

    }

    std::vector< std::string > SAMYSkill::createParameterTypesNames(){
        std::vector< std::string > retval;
        for( auto& param : skillConfig.skillParams ){
            retval.emplace_back( param.dataType );
        }
        return retval;
    }

    UA_StatusCode SAMYSkill::initializeSkill( UA_Server* server )
    {
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");

        setSkillCurrentStateNodeId( std::move( getComponentNodeByBrowseName( server, skillNodeID, "CurrentState", 0 ) ) );
        setSkillLastTransitionNodeId( std::move( getComponentNodeByBrowseName( server, skillNodeID, "LastTransition", 0 ) ) );
        setSkillParametersSetNodeId( std::move( getComponentNodeByBrowseName( server, skillNodeID, "ParameterSet", diNS ) ) );
        setSkillParametersSetRealTimeNodeId( std::move( getComponentNodeByBrowseName( server, skillNodeID, "ParameterSetRealTime", nsSkills )));
        UA_Int16 fortissDiNS = UA_Server_addNamespace( server, "https://fortiss.org/UA/DI/");
        setskillTransitionEventTypeNodeId( std::move(
                                               getSubtypeNodeByBrowseName( server, UA_NODEID_NUMERIC(0, UA_NS0ID_PROGRAMTRANSITIONEVENTTYPE),
                                                                           "SkillTransitionEventType", fortissDiNS )));

        transitions = generateTransitions( server );
        states = generateStates( server );

        if (states.empty()) {
            throw std::runtime_error("Got empty state array");
        }

        if (transitions.empty()) {
            throw std::runtime_error("Got empty transitions array");
        }

        // default initialization
        currentState = &states[0];
        // default value to avoid segfaults due to being null
        lastTransition = &transitions[0];

        setSkillNormalParameterNodes( server );
        setSkillRealTimeParameterNodes( server );

        skillCallable = createSkillCallable();

        skillInitialized = true;

        return UA_STATUSCODE_GOOD;
    }

    // This function is called using one of the threads in the samycore threadsPool
    void SAMYSkill::executeSkill( UA_Server* server , SAMYRobot *robot ){
        SAMYCore& core = SAMYCore::getInstance();
        //std::cout << "ThreadID:  " << std::this_thread::get_id() << std::endl;
        core.setThreadIDtoRobot( std::this_thread::get_id(), robot ); // This allows us to recover the calling robot without having to pass it around to the foreign functions

        if( skillInitialized ){
            skillCallable.call( server, normalParameterNodes );
        }else{
            logger->error( "SKILL CANNOT BE EXECUTED BECAUSE IT WAS NOT SUCCESFULLY INITIALIZED!" );
        }
    }

    UA_StatusCode SAMYSkill::triggerTransitionEvent(
            UA_Server* server,
            const ProgramState& fromState,
            const UA_NodeId& eventType
        )const{
        UA_Int16 fortissDiNS = UA_Server_addNamespace( server, "https://fortiss.org/UA/DI/");

        UA_NodeId eventId = UA_NODEID_NUMERIC( fortissDiNS, UA_FORTISS_DIID_SKILLTRANSITIONEVENTTYPE );
        {
    //        LockedServer ls = server->getLocked();
            UA_StatusCode retval = UA_Server_createEvent(server, eventType, &eventId);
            if (retval != UA_STATUSCODE_GOOD) {
                logger->warn("createEvent failed. StatusCode {}", UA_StatusCode_name(retval));
                return retval;
            }
        }
        fillTransitionEventBase( server, eventId, fromState );
        UA_StatusCode retval = UA_Server_triggerEvent(server, eventId, skillNodeID, nullptr, UA_TRUE);
            if (retval != UA_STATUSCODE_GOOD) {
                logger->warn("createEvent failed. StatusCode {}", UA_StatusCode_name(retval));
                return retval;
            }
        return UA_STATUSCODE_GOOD;
    }

    void SAMYSkill::fillTransitionEventBase(
            UA_Server* server,
            const UA_NodeId& eventId,
            const ProgramState& fromState
         )const
    {
        std::string eventSourceName = skillConfig.skillName;

        UA_UInt16 eventSeverity = 200;

        UA_Server_writeObjectProperty_scalar(server, eventId,
                                             UA_QUALIFIEDNAME(0, const_cast<char*>("Severity")),
                                             &eventSeverity,
                                             &UA_TYPES[UA_TYPES_UINT16]);

        const UA_String evtSourceName = UA_STRING(const_cast<char*>(eventSourceName.c_str()));
        UA_Server_writeObjectProperty_scalar(server, eventId,
                                             UA_QUALIFIEDNAME(0, const_cast<char*>("SourceName")),
                                             &evtSourceName,
                                             &UA_TYPES[UA_TYPES_STRING]);

        const std::string tmpMessage =
                std::string{"Transition of skill "} + skillConfig.skillName + std::string{" from state "} +
                std::string{ reinterpret_cast<const char*>(fromState.getName().text.data) } +
                std::string{ " to " } + std::string{ reinterpret_cast<const char*>(currentState->getName().text.data) };
        const UA_LocalizedText eventMessage = UA_LOCALIZEDTEXT(const_cast<char*>("en-US"),
                                                               const_cast<char*>(tmpMessage.c_str()));
        UA_Server_writeObjectProperty_scalar(server, eventId,
                                             UA_QUALIFIEDNAME(0, const_cast<char*>("Message")),
                                             &eventMessage,
                                             &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);

        const UA_DateTime time = UA_DateTime_now();
        UA_Server_writeObjectProperty_scalar(server, eventId, UA_QUALIFIEDNAME(0, const_cast<char*>("Time")),
                                             &time, &UA_TYPES[UA_TYPES_DATETIME]);

        // FromState is a component, so we can't use UA_Server_writeObjectPropertyScalar
        UA_Variant value;
        UA_Variant_init(&value);
        auto fromStateName = fromState.getName();
        UA_Variant_setScalarCopy(&value, &fromStateName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);

        UA_RelativePathElement rpe;
        UA_RelativePathElement_init(&rpe);

        rpe.targetName = UA_QUALIFIEDNAME(0, const_cast<char*>("FromState"));
        rpe.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT);

        UA_BrowsePath bp;
        UA_BrowsePath_init(&bp);
        bp.relativePath.elements = &rpe;
        bp.relativePath.elementsSize = 1;
        bp.startingNode = eventId;

        UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);
        UA_Server_writeValue(server, bpr.targets[0].targetId.nodeId, value);
        UA_Variant_clear(&value);

        // Use the NodeId while we still have it to write the FromStateId
        const UA_NodeId* fromStateId = fromState.getId();
        UA_Server_writeObjectProperty_scalar(server, bpr.targets[0].targetId.nodeId,
                                             UA_QUALIFIEDNAME(0, const_cast<char*>("Id")),
                                             fromStateId, &UA_TYPES[UA_TYPES_NODEID]);

        // ToState
        UA_LocalizedText toStateName = currentState->getName();
        UA_Variant_setScalarCopy(&value, &toStateName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);

        rpe.targetName = UA_QUALIFIEDNAME(0, const_cast<char*>("ToState"));
        UA_BrowsePathResult_clear(&bpr);
        bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);
        UA_Server_writeValue(server, bpr.targets[0].targetId.nodeId, value);
        UA_Variant_clear(&value);

        // Use the NodeId while we still have it to write the ToStateId
        const UA_NodeId* toStateId = currentState->getId();
        UA_Server_writeObjectProperty_scalar(server, bpr.targets[0].targetId.nodeId,
                                             UA_QUALIFIEDNAME(0, const_cast<char*>("Id")),
                                             toStateId, &UA_TYPES[UA_TYPES_NODEID]);

        // Transition
        UA_LocalizedText transitionName = lastTransition->getName();
        UA_Variant_setScalarCopy(&value, &transitionName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);

        rpe.targetName = UA_QUALIFIEDNAME(0, const_cast<char*>("Transition"));

        UA_BrowsePathResult_clear(&bpr);
        bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);
        UA_Server_writeValue(server, bpr.targets[0].targetId.nodeId, value);
        UA_Variant_clear(&value);

        // Use the NodeId while we still have it write the TransitionId
        const UA_NodeId* transitionId = lastTransition->getId();
        UA_Server_writeObjectProperty_scalar(server, bpr.targets[0].targetId.nodeId,
                                             UA_QUALIFIEDNAME(0, const_cast<char*>("Id")),
                                             transitionId, &UA_TYPES[UA_TYPES_NODEID]);

        UA_BrowsePathResult_clear(&bpr);
    }

    bool SAMYSkill::transition(
            UA_Server* server,
            ProgramStateNumber nextState,
            const UA_NodeId& eventType
    ) {
        return transition( server, *currentState, nextState, eventType);
    }

    bool SAMYSkill::transition( UA_Server* server, ProgramStateNumber nextState) {
        return transition( server, nextState, skillTransitionEventTypeNodeId);
    }

    bool SAMYSkill::transition(
            UA_Server* server,
            const ProgramState& from,
            ProgramStateNumber nextState,
            const UA_NodeId& eventType
         ){
   //     std::lock_guard<std::mutex> lock(transitionMutex);
   // get the next transition
        auto nextTransition = std::find_if(transitions.cbegin(), transitions.cend(),
                                           [from, nextState](SAMY::ProgramTransition i) {
                                                return i.getFrom() == from.getNumber() && i.getTo() == nextState;
                                           });
        // no proper transition found
        if (nextTransition == transitions.cend()) {
            return false;
        }
        // set the current state
        // If the next state is not in the states vector, then we are transitioning from inside
        // a substatemachine to outside, so keep the current state
        for (const auto& state : states) {
            if (state.getNumber() == nextTransition->getTo()) {
                currentState = &state;
            }
        }
        lastTransition = &*nextTransition;
        return triggerTransitionEvent( server, from, eventType ) == UA_STATUSCODE_GOOD;
    }

    SAMYSkill::SAMYSkill(const SAMYSkillConfig &skillConfig_, std::shared_ptr<spdlog::logger> logger_ ): // Order in initialization list matters!
        skillConfig( skillConfig_ ),
        logger( logger_ )
        {
            parametersTypesNames = createParameterTypesNames(); // skillConfig must be set
        }


}/* namespace SAMY */
