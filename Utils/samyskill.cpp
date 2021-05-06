#include "samyskill.h"
#include <iostream>
#include <random> //temporary used for the ids
#include <typeinfo>

std::random_device dev;
std::mt19937 rng(dev());
std::uniform_int_distribution<std::mt19937::result_type> dist1(1,1000000); // distribution in range [1, 1000000]


namespace SAMY{

    void SAMYSkill::setSkillTypeNodeId( const UA_NodeId& nodeId ){
        skillTypeNodeId = nodeId;
    }
    UA_NodeId SAMYSkill::getSkillTypeNodeId() const{
        return skillTypeNodeId;
    }

    void SAMYSkill::addNormalParameterNodeToSkill( const UA_NodeId& node){
        normalParameterNodes.emplace_back( node );
    }

    void SAMYSkill::addRealTimeParameterNodeToSkill( const UA_NodeId& node){
        realTimeParameterNodes.emplace_back( node );
    }

    UA_NodeId SAMYSkill::getSkillComponentNodeByBrowseName( UA_Server* server, char* browseName,
                                                                            const UA_UInt16 nameSpace) const {
        UA_UInt32 length = 1;
        char *paths[length] = { browseName };
        UA_UInt32 ids[length] = {UA_NS0ID_HASCOMPONENT};
        UA_UInt16 ns[length] = { nameSpace };

        UA_QualifiedName aux;
        UA_QualifiedName_init( &aux );
        UA_Server_readBrowseName( server, skillNodeID, &aux );

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = skillNodeID;
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(ns[i], paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw std::runtime_error("SKILL COMPONENT NODE COULD NOT BE FOUND IN BROWSEPATH");

        return res.targets->targetId.nodeId;
    }

    UA_NodeId SAMYSkill::getSkillParameterSetNode( UA_Server* server ) const{
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        return getSkillComponentNodeByBrowseName( server, "ParameterSet", diNS );
    }

    UA_NodeId SAMYSkill::getSkillParameterSetRealTimeNode( UA_Server* server ) const{
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );
        return getSkillComponentNodeByBrowseName( server, "ParameterSetRealTime", nsSkills );
    }

    /* Give a starting node (ParameterSet/ParameterSetRealTime) and finds and order the corresponding parameter nodes */
    UA_StatusCode SAMYSkill::setSkillParametersFromObjectComponentNodes( UA_Server* server,
                                                                            const UA_NodeId& startNode,
                                                                                 std::vector<UA_NodeId>& nodes ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        /* The browse service does not ensure that the read nodes are ordered in any way. Hence I infer the order based on the
        name and I add them to the vector using [] operator,
        so I need first to create a vector filled with empty UA_NodeIds*/
        nodes.assign( getSkillCommands().size(), UA_NodeId() );

        UA_BrowseDescription bd;
        UA_BrowseDescription_init(&bd);
        bd.nodeId = startNode;
        bd.browseDirection = UA_BROWSEDIRECTION_FORWARD;
        bd.nodeClassMask = UA_BROWSERESULTMASK_ALL;
        bd.referenceTypeId = UA_NODEID_NUMERIC( 0, UA_NS0ID_HASCOMPONENT );

        UA_BrowseResult br = UA_Server_browse(server, 0, &bd);
        UA_StatusCode res = br.statusCode;
        if(res != UA_STATUSCODE_GOOD) {
            UA_BrowseResult_clear(&br);
            throw std::runtime_error ( "ERROR ADDING TO ROBOT SKILL PARAMETER NODES THAT WERE ADDED TO THE SAMYCORE SERVER" );
            return res;
        }

        if( br.referencesSize > 0 )
        {
            UA_QualifiedName paramName;
            UA_QualifiedName_init( &paramName );
            for(int i=0; i < br.referencesSize; i++){
                UA_Server_readBrowseName( server, br.references[i].nodeId.nodeId, &paramName);
                std::string positionAndName = std::move( std::string( (char *)paramName.name.data ) );
                std::string::size_type pos = positionAndName.find('_');
                if (pos != std::string::npos)
                {
                    std::string numerOfCommand = positionAndName.substr(0, pos);
                    nodes[std::stoi(numerOfCommand)] = br.references[i].nodeId.nodeId;

                }else{
                    throw "PARAMETERS NODE IDS COULD NOT BE OBTAINED FOR THE SKILL";
                }
                UA_QualifiedName_clear(&paramName);
            }
        }
        return retVal;
    }

    UA_StatusCode SAMYSkill::setNormalParameterNodesInSkill( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal = setSkillParametersFromObjectComponentNodes( server, getSkillParameterSetNode(server),
                                                                                        normalParameterNodes );
        return retVal;
    }

    UA_StatusCode SAMYSkill::setRealTimeParameterNodesInSkill( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal = setSkillParametersFromObjectComponentNodes( server, getSkillParameterSetRealTimeNode(server),
                                                                                            realTimeParameterNodes );
        return retVal;
    }

    UA_StatusCode SAMYSkill::setParameterNodesInSkill( UA_Server* server ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal |= setNormalParameterNodesInSkill( server );
        std::cout << getSkillName() << std::endl;
        retVal |= setRealTimeParameterNodesInSkill( server );
        return retVal;
    }

    UA_NodeId AdderParameterNodesToSkillType::findSkillType( const char* skillName ){

        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_UInt32 length = 1;
        char *paths[length] = { const_cast<char*>( skillName ) };
        UA_UInt32 ids[length] = {UA_NS0ID_HASSUBTYPE};

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = UA_NODEID_NUMERIC(nsSkills, CRCLSKILLS_NODE_ID); /* CRCLSkillsNode */
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(nsSkills, paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "PARAMETER VARIABLE TYPE COULD NOT BE FOUND CRCLCOMMANDPARAMETERS TYPES: THE REQUIRED TYPE IS NOT IN THE BROWSEPATH";

        UA_NodeId typeNodeId = res.targets->targetId.nodeId;

        return typeNodeId;
    }

    UA_NodeId AdderParameterNodesToSkillType::findSkillParameterSetObject( const char *skillName ){
        UA_NodeId initNode = findSkillType( skillName );
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");

        UA_UInt32 length = 1;
        char *paths[length] = { "ParameterSet" };
        UA_UInt32 ids[length] = { UA_NS0ID_HASCOMPONENT };

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = initNode; /* SkillNode */
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(diNS, paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "SkillParameterSetObject COULD NOT BE FOUND IN SKILL TYPE: THE REQUIRED OBJECT NODE IS NOT IN THE BROWSEPATH";

        UA_NodeId objectNodeId = res.targets->targetId.nodeId;

        return objectNodeId;
    }

    UA_NodeId AdderParameterNodesToSkillType::findSkillParameterSetRealTimeObject( const char *skillName ){
        UA_UInt32 length = 1;
        char *paths[length] = { "ParameterSetRealTime" };
        UA_UInt32 ids[length] = {UA_NS0ID_HASCOMPONENT};

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = skillTypeNode; /* SkillNode */
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(skillsNS, paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "SkillParameterSetObject COULD NOT BE FOUND IN SKILL TYPE: THE REQUIRED OBJECT NODE IS NOT IN THE BROWSEPATH";

        UA_NodeId objectNodeId = res.targets->targetId.nodeId;

        return objectNodeId;

    }

    UA_NodeId findCommandParameterType( UA_Server* server, char* parameterTypeName ){
        UA_Int16 crclNS = UA_Server_addNamespace( server, "https://crcl.org" );

        UA_UInt32 length = 2;
        char *paths[length] = { "CRCLCommandParameters", parameterTypeName };
        UA_UInt32 ids[length] = {UA_NS0ID_HASSUBTYPE, UA_NS0ID_HASSUBTYPE};

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = UA_NODEID_NUMERIC(0, 63); /* BaseDataVariableType node */
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(crclNS, paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "PARAMETER VARIABLE TYPE COULD NOT BE FOUND CRCLCOMMANDPARAMETERS TYPES: THE REQUIRED TYPE IS NOT IN THE BROWSEPATH";

        UA_NodeId typeNodeId = res.targets->targetId.nodeId;

        return typeNodeId;
    }

    UA_StatusCode AdderParameterNodesToSkillType::addParameterNodesToServer(
                                                    std::string parameterTypeName, UA_NodeId variableTypeNode ){
        std::string name = std::to_string(numberOfCommandInSkill) + "_" + parameterTypeName;

        UA_NodeId paramNodeId = UA_NODEID_NUMERIC(skillsNS, 0);
        UA_NodeId paramNodeIdRT = UA_NODEID_NUMERIC(skillsNS, 0);

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("", (char*)name.c_str());

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_VARIABLE,
        paramNodeId,
        skillParametersSetNode,
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(skillsNS, const_cast<char*>( name.c_str() ) ),
        variableTypeNode, (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],
        NULL, &paramNodeId);

        retVal |= UA_Server_addReference( server, paramNodeId,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);


        name = name + "_RealTime";

        UA_VariableAttributes attr2 = UA_VariableAttributes_default;
        attr2.displayName = UA_LOCALIZEDTEXT("", (char*)name.c_str());

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_VARIABLE,
        paramNodeIdRT,
        skillRealTimeParametersSetNode,
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(skillsNS, const_cast<char*>( name.c_str() ) ),
        variableTypeNode, (const UA_NodeAttributes*)&attr2, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],
        NULL, &paramNodeIdRT);

        retVal |= UA_Server_addReference( server, paramNodeIdRT,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        return retVal;
    }

    SAMYSkill::SAMYSkill(const std::string& name,
                         const std::vector<UA_CRCLCommandsUnionDataType> &commands_, const UA_NodeId& id):
        skillNodeID( id ),
        skillName( name ),
        commands( commands_ )
    {}

    std::vector<UA_CRCLCommandsUnionDataType> SAMYSkill::skillToCRCLCommands( std::vector<SAMYSkill>& skills ){
        std::vector<UA_CRCLCommandsUnionDataType> skillCommands;
        for(int i=0; i < skills.size(); i++){
            for(int j=0; j < skills[i].commands.size(); j++){
                skillCommands.emplace_back(skills[i].getSkillCommands()[j]);
            }
        }
        return skillCommands;
    }

    SAMYSkill::SAMYSkill(const std::string& name, std::vector<SAMYSkill>& skills, const UA_NodeId& id):
        skillNodeID( id ),
        skillName( name ),
        commands( skillToCRCLCommands( skills ) )
    {}

    std::vector<UA_CRCLCommandsUnionDataType> SAMYSkill::getSkillCommands()  const {
        return commands;
    }

    std::string SAMYSkill::getSkillName() const{
        return skillName;
    }

/*void SAMYSkill::setSkillCommands(const std::vector<UA_CRCLCommandsUnionDataType>& commands_){
    commands = commands_;
}*/

// TODO!!!!!!!!!!!! Check wether a vector of given parameters fits the required parameters types for the skill (whether they allow creating
// the corresponding CRCL Command instance)
/*bool SAMYSkill::checkSkillParameters(const SAMYSkillParameters &commandsParameters) const {
    auto comParmas = commandsParameters.getSkillParameters();
    if(comParmas.size() == commands.size()){
        for(int i=0; comParmas.size(); i++){
            if(std::visit(GetParameterTypeCode{},comParmas[i]) == commands[i].switchField){return false;}
        }
    }else{
        return false;
    }
    return true;
}*/

UA_NodeId SAMYSkill::getSkillNodeID() const{
    return skillNodeID;
}

void SAMYSkill::setSkillNodeID( const UA_NodeId& nodeId){
    skillNodeID = nodeId;
}

bool SAMYSkill::createSkillInstance( UA_Server* server, UA_CRCLSkillDataType* opcuaSkill ){
    CRCLCommandsParametersVariant auxParameter;
    UA_CRCLCommandsUnionDataType *commandsArray = (UA_CRCLCommandsUnionDataType*)UA_Array_new(getSkillCommands().size(),
                                                                &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);

//    const std::lock_guard<std::mutex> lock(skillInstantiationMutex);

    InstantiateCRCLCommandFromServerParameters crclCommandsInstantiator{ server, UA_NODEID_NULL, UA_NODEID_NULL };
    for(int j=0; j < commands.size(); j++)
    {
        auto it = crclCommandSwitchfield_ParameterType_Map.find( commands[j].switchField );
        if( it != crclCommandSwitchfield_ParameterType_Map.end()){
            auxParameter = it->second;
            crclCommandsInstantiator.normalParameterNodeId = normalParameterNodes[j];
            crclCommandsInstantiator.realTimeParameterNodeId = realTimeParameterNodes[j];
            commandsArray[j] = std::visit(crclCommandsInstantiator, auxParameter);
        }else{
            throw std::runtime_error("INSTANCE OF THE SKILL COULD NOT BE CREATED");
        }

        opcuaSkill->cRCLCommands = commandsArray;
        opcuaSkill->cRCLCommandsSize = commands.size();
        opcuaSkill->id = skillNodeID.identifier.numeric;
        opcuaSkill->name = UA_STRING( const_cast<char*>( skillName.c_str() ) );
    }
    return true;
}

}/* namespace SAMY */
