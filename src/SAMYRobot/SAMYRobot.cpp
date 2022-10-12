#include "SAMYRobot.h"

namespace SAMY {

UA_StatusCode SAMYRobot::readSkillCurrentStateId(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    for( int i = 0; i < robot->robotSkills.size(); i++ )
    {
        if( robot->robotSkills[i].getSkillCurrentStateNodeId().identifier.numeric == nodeId->identifier.numeric )
        {
            const UA_NodeId* stateId = robot->robotSkills[i].getSkillCurrentState()->getId();
            retVal |= UA_Variant_setScalarCopy(&dataValue->value, stateId, &UA_TYPES[UA_TYPES_NODEID]);
            dataValue->hasValue = true;
            return retVal;
        }
    }
    return UA_STATUSCODE_BADINTERNALERROR;
}

UA_StatusCode SAMYRobot::readSkillCurrentState(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    for( int i = 0; i < robot->robotSkills.size(); i++ )
    {
        if( robot->robotSkills[i].getSkillCurrentStateNodeId().identifier.numeric == nodeId->identifier.numeric )
        {
            auto stateName = robot->robotSkills[i].getSkillCurrentState()->getName();
            retVal |= UA_Variant_setScalarCopy(&dataValue->value, &stateName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
            dataValue->hasValue = true;
            return retVal;
        }
    }
    return UA_STATUSCODE_BADINTERNALERROR;
}

UA_StatusCode SAMYRobot::readSkillLastTransition(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    for( int i = 0; i < robot->robotSkills.size(); i++ )
    {
        if( robot->robotSkills[i].getSkillLastTransitionNodeId().identifier.numeric == nodeId->identifier.numeric )
        {
            auto transitionName = robot->robotSkills[i].getSkillLastTransition()->getName();
            retVal |= UA_Variant_setScalarCopy(&dataValue->value, &transitionName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
            dataValue->hasValue = true;
            return retVal;
        }
    }
    return UA_STATUSCODE_BADINTERNALERROR;
}

UA_StatusCode SAMYRobot::readSkillLastTransitionId(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    for( int i = 0; i < robot->robotSkills.size(); i++ )
    {
        if( robot->robotSkills[i].getSkillLastTransitionNodeId().identifier.numeric == nodeId->identifier.numeric ){
            const UA_NodeId* transitionId = robot->robotSkills[i].getSkillLastTransition()->getId();
            retVal |= UA_Variant_setScalarCopy(&dataValue->value, transitionId, &UA_TYPES[UA_TYPES_NODEID]);
            dataValue->hasValue = true;
            return retVal;
        }
    }
    return UA_STATUSCODE_BADINTERNALERROR;
}

UA_StatusCode SAMYRobot::writeBufferedCommands(){
    UA_Variant value;
    UA_Variant_init(&value);

    UA_CRCLCommandsParamsSetsBufferDataType buf;
    buf.name = UA_STRING( "Buffer test" );
    buf.id = 98765;
    buf.crclCommandsParamsSetsSize = commandsParamsSetsBuffer.size();
    buf.crclCommandsParamsSets = commandsParamsSetsBuffer.data();

    UA_Variant_setScalar( &value, &buf, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSPARAMSSETSBUFFERDATATYPE] );

    UA_StatusCode retval = UA_Server_writeValue(server, commandsBufferNodeId, value);

    return retval;
}

UA_StatusCode SAMYRobot::writeBufferedCommandsState( UA_CRCLCommandsBufferState val ){
    auto previous = commandsBufferState;
    commandsBufferState = val;

    UA_Variant value;
    UA_Variant_init(&value);

    UA_Variant_setScalar(&value, &val, &UA_TYPES_CRCL[ UA_TYPES_CRCL_CRCLCOMMANDSBUFFERSTATE ] );

    UA_StatusCode retval = UA_Server_writeValue(server, commandsBufferStateNodeId, value);

    if( retval != UA_STATUSCODE_GOOD ){
        std::cout << "ERROR IN writeBufferedCommandsState" << std::endl;
        commandsBufferState = previous;
    }

    return retval;
}

UA_StatusCode SAMYRobot::writeBufferedCommandsAndUpdateState(){
    writeBufferedCommands();
    writeBufferedCommandsState( UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_PENDING );
}

bool SAMYRobot::executeSkill( uint32_t skillIdx ){
    threadsPool->push_task( &SAMYSkill::executeSkill, &robotSkills[skillIdx] , server, static_cast<SAMYRobot*>( this ) );
    return true;
}


// Function executed by the thread pool. Better use a conditional_variable here and on onBufferedCommandsStateChange!!
bool SAMYRobot::waitForCommandsBufferDone()
{
    std::cout << "waitForCommandsBufferDone enters, commandsBufferState value: " << commandsBufferState << std::endl;
    // waits until the SAMYPlugin finishes executing the buffer and sets its commandBufferState to UA_CRCLCOMMANDSBUFFERSTATE_AWAITING or UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_FAILED
    while ( commandsBufferState == UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_RUNNING ||
            commandsBufferState == UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_PENDING )
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    std::cout << "waitForCommandsBufferDone enters exit, commandsBufferState " << commandsBufferState << std::endl;

    if( commandsBufferState == UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_FAILED )
        return false;
    else
        return true;
}

void SAMYRobot::onBufferedCommandsStateChange(UA_Server *server,
                                   UA_UInt32 monitoredItemId,
                                   void *monitoredItemContext,
                                   const UA_NodeId *nodeId,
                                   void *nodeContext,
                                   UA_UInt32 attributeId,
                                   const UA_DataValue *value)
{

    if (!nodeContext)
        return;

    auto* robot = static_cast<SAMYRobot*>(nodeContext);

    if (!robot->initialized)
        return;

    UA_CRCLCommandsBufferState * const state = static_cast<UA_CRCLCommandsBufferState* const>( value->value.data );

    std::cout << "onBufferedCommandsStateChange " << *state << std::endl;

    switch (*state){
    case UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_PENDING: // Buffer was updated but not yet processed by the SAMYPlugin
        {
            robot->commandsBufferState = UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_PENDING;
        }
        break;
    case UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_RUNNING: // Buffer is being executed by the SAMYPlugin
        {
            robot->commandsBufferState = UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_RUNNING;
        }
        break;
    case UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_FAILED:
        {
            robot->commandsBufferState = UA_CRCLCOMMANDSBUFFERSTATE_PROCESSING_FAILED;
        }
        break;
    case UA_CRCLCOMMANDSBUFFERSTATE_AWAITING: // Buffer succesfully executed, waiting for new commands
        {
            robot->commandsBufferState = UA_CRCLCOMMANDSBUFFERSTATE_AWAITING;
        }
        break;
    default:
        break;
    }
}

/*
bool SAMYRobot::waitForCommandsBufferDone()
{
    bool retval = executingFuture.get();
    return retval;
}
*/

UA_StatusCode SAMYRobot::initializeRobotSkills()
{
    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    for( auto& skill : robotSkills ){
        skill.initializeSkill( server );
        retval |= addSkillDataSources( skill.getSkillNodeID() );
        if (retval != UA_STATUSCODE_GOOD) {
            throw std::runtime_error("Failed to add data sources with error: "
                                     + std::string(UA_StatusCode_name(retval)));
        }
    }
    return retval;
}

UA_StatusCode SAMYRobot::addRobotDataSources( )
{
    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    UA_DataSource dataSource{};
    dataSource.write = nullptr;

    dataSource.read = &SAMYRobot::readRobotCurrentState;
    retval |= UA_Server_setNodeContext(server, this->currentStateNodeId, this);
    retval |= UA_Server_setVariableNode_dataSource(server, this->currentStateNodeId, dataSource);
    if (retval != UA_STATUSCODE_GOOD) {
        return retval;
    }

    /*
    dataSource.read = SAMYRobot::readRobotCurrentStateId;
    std::shared_ptr<UA_NodeId> currentStateIdNodeId =
            OPCUA::UA_Server_getObjectPropertyId(server, this->currentStateNodeId,
                                          UA_QUALIFIEDNAME(0, const_cast<char*>("Id")));
    UA_Server_setNodeContext(server, *currentStateIdNodeId, this);
    retval |=  UA_Server_setVariableNode_dataSource(server, *currentStateIdNodeId, dataSource);
    if (retval != UA_STATUSCODE_GOOD) {
        return retval;
    }
*/
    dataSource.read = SAMYRobot::readRobotLastTransition;
    UA_Server_setNodeContext(server, this->lastTransitionNodeId, this);
    retval |=  UA_Server_setVariableNode_dataSource(server, this->lastTransitionNodeId, dataSource);
    if (retval != UA_STATUSCODE_GOOD) {
        return retval;
    }
    /*
    dataSource.read = SAMYRobot::readRobotLastTransitionId;
    std::shared_ptr<UA_NodeId> lastTransitionIdNodeId =
            OPCUA::UA_Server_getObjectPropertyId(server, this->lastTransitionNodeId,
                                          UA_QUALIFIEDNAME(0, const_cast<char*>("Id")));
    UA_Server_setNodeContext(server, *lastTransitionIdNodeId, this);
    retval |=  UA_Server_setVariableNode_dataSource(server, *lastTransitionIdNodeId,
                                                  dataSource);
                                                  */
    return retval;
}

UA_StatusCode SAMYRobot::initializeRobot()
{
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;

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

    retVal |= initializeRobotSkills();
    retVal |= addRobotDataSources();
    initialized = true;

    return retVal;
}

UA_StatusCode SAMYRobot::addSkillDataSources(const UA_NodeId& skillNodeID )
{
    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    UA_DataSource dataSource{};
    dataSource.write = nullptr;
    dataSource.read = &SAMYRobot::readSkillCurrentState;
    std::shared_ptr<UA_NodeId> currentStateNodeId =
            SAMY::OPCUA::UA_Server_getObjectComponentId(server, skillNodeID,
                                           UA_QUALIFIEDNAME(0, const_cast<char*>("CurrentState")));
    UA_Server_setNodeContext(server, *currentStateNodeId, this);
    retval = UA_Server_setVariableNode_dataSource(server, *currentStateNodeId, dataSource);
    if (retval != UA_STATUSCODE_GOOD) {
        return retval;
    }

    dataSource.read = SAMYRobot::readSkillCurrentStateId;
    std::shared_ptr<UA_NodeId> currentStateIdNodeId =
            OPCUA::UA_Server_getObjectPropertyId(server, *currentStateNodeId,
                                          UA_QUALIFIEDNAME(0, const_cast<char*>("Id")));
    UA_Server_setNodeContext(server, *currentStateIdNodeId, this);
    retval = UA_Server_setVariableNode_dataSource(server,
                                                  *currentStateIdNodeId,
                                                  dataSource);
    if (retval != UA_STATUSCODE_GOOD) {
        return retval;
    }

    // LastTransition is optional for FiniteStateMachines
    std::shared_ptr<UA_NodeId> lastTransitionNodeId =
            OPCUA::UA_Server_getObjectComponentId_or_Null(server, skillNodeID,
                                                   UA_QUALIFIEDNAME(0, const_cast<char*>("LastTransition")));

    if (!lastTransitionNodeId) {
        return UA_STATUSCODE_GOOD;
    }
    dataSource.read = SAMYRobot::readSkillLastTransition;
    UA_Server_setNodeContext(server, *lastTransitionNodeId, this);
    retval = UA_Server_setVariableNode_dataSource(server, *lastTransitionNodeId,
                                                  dataSource);
    if (retval != UA_STATUSCODE_GOOD) {
        return retval;
    }

    dataSource.read = SAMYRobot::readSkillLastTransitionId;
    std::shared_ptr<UA_NodeId> lastTransitionIdNodeId =
            OPCUA::UA_Server_getObjectPropertyId(server, *lastTransitionNodeId,
                                          UA_QUALIFIEDNAME(0, const_cast<char*>("Id")));
    UA_Server_setNodeContext(server, *lastTransitionIdNodeId, this);
    retval = UA_Server_setVariableNode_dataSource(server, *lastTransitionIdNodeId,
                                                  dataSource);
    if (retval != UA_STATUSCODE_GOOD) {
        return retval;
    }
    return retval;
}


void SAMYRobot::setSkillInSkillsMap( int skillVectorIdx, const UA_NodeId& skillNode ){
            robotSkillsMap[ skillNode.identifier.numeric ] = skillVectorIdx;
}


UA_StatusCode SAMYRobot::readRobotCurrentState(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    auto stateName = robot->currentState->getName();
    retVal |= UA_Variant_setScalarCopy(&dataValue->value, &stateName, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    dataValue->hasValue = true;
    return retVal;
}

UA_StatusCode SAMYRobot::readRobotCurrentStateId(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    const UA_NodeId* stateId = robot->currentState->getId();
    retVal |= UA_Variant_setScalarCopy(&dataValue->value, stateId, &UA_TYPES[UA_TYPES_NODEID]);
    dataValue->hasValue = true;
    return retVal;
}

UA_StatusCode SAMYRobot::readRobotLastTransition(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    auto lastTrans = robot->lastTransition->getName();
    retVal |= UA_Variant_setScalarCopy(&dataValue->value, &lastTrans, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    dataValue->hasValue = true;
    return retVal;
}

UA_StatusCode SAMYRobot::readRobotLastTransitionId(
        UA_Server* server,
        const UA_NodeId* sessionId,
        void* sessionContext,
        const UA_NodeId* nodeId,
        void* nodeContext,
        UA_Boolean sourceTimeStamp,
        const UA_NumericRange* range,
        UA_DataValue* dataValue
){
    if (!nodeContext)
        return UA_STATUSCODE_BADINTERNALERROR;
    auto* robot = static_cast<SAMYRobot*>(nodeContext);
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    const UA_NodeId* transitionId = robot->lastTransition->getId();
    retVal |= UA_Variant_setScalarCopy(&dataValue->value, transitionId, &UA_TYPES[UA_TYPES_NODEID]);
    dataValue->hasValue = true;
    return retVal;
}

}
