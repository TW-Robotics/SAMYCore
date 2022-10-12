#include <samycoreInterfaceGenerator.h>
#include <Reflection.h>

namespace SAMY{

    /* Add CRCLBasedSkill abstract type (the rest of the skills inherit from this one) i=CRCLSKILLS_NODE_ID */
    UA_StatusCode SAMYCoreInterfaceGenerator::addCRCLBasedSkillTypeNode( UA_Server *server ){
        UA_Int16 fortissDiNS = UA_Server_addNamespace( server, "https://fortiss.org/UA/DI/");
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
        attr.isAbstract = true;
        attr.displayName = UA_LOCALIZEDTEXT("", "CRCLBasedSkill");
        #ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
        attr.description = UA_LOCALIZEDTEXT("", "CRCLBased Skill. The rest of skills inherit from this abstract type.");
        #endif
        retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
        UA_NODEID_NUMERIC(nsSkills, CRCLSKILLS_NODE_ID),
        UA_NODEID_NUMERIC(fortissDiNS, 15034LU),
        UA_NODEID_NUMERIC(0, 45LU),
        UA_QUALIFIEDNAME(nsSkills, "CRCLBasedSkill"),
         UA_NODEID_NULL,
        (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);

        retVal |= UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(nsSkills, CRCLSKILLS_NODE_ID));

        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addBasicSkillType( UA_Server* server, SAMYSkill* skill ){
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_NodeId nodeNumber;

        std::stringstream msg1;
        msg1 << "Adding Skill Type node";
        logger->debug( msg1.str() );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
        attr.isAbstract = false;
        attr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>(skill->getSkillName().c_str()));
        #ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
        attr.description = UA_LOCALIZEDTEXT("", "");
        #endif
        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECTTYPE,
        UA_NODEID_NUMERIC(nsSkills, 0),
        UA_NODEID_NUMERIC(nsSkills, CRCLSKILLS_NODE_ID),
        UA_NODEID_NUMERIC(0, 45LU),
        UA_QUALIFIEDNAME(nsSkills, const_cast<char*>(skill->getSkillName().c_str())), UA_NODEID_NULL,
        (const UA_NodeAttributes*)&attr,
        &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES], NULL, &nodeNumber);

        retVal |= UA_Server_addNode_finish( server, nodeNumber);

        skill->setSkillTypeNodeId( std::move( nodeNumber ) );
        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addParameterSetObjectToSkillType( UA_Server* server, SAMYSkill* skill ){
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_NodeId nodeNumber;

        UA_NodeId skillTypeNodeId = findSkillType( server, skill->getSkillName().c_str() );
        skill->setSkillTypeNodeId( std::move( skillTypeNodeId ) );
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectAttributes attr = UA_ObjectAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
        UA_NODEID_NUMERIC(nsSkills, 0),
        skillTypeNodeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(diNS, "ParameterSet"),
        UA_NODEID_NUMERIC(0, 58LU), (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],
        NULL, &nodeNumber);

        retVal |= UA_Server_addReference( server, nodeNumber,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addParameterSetRealTimeObjectToSkillType( UA_Server* server, SAMYSkill* skill ){
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_NodeId nodeNumber;
        UA_NodeId skillTypeNodeId = findSkillType( server, skill->getSkillName().c_str() );
       // UA_NodeId skillTypeNodeId = std::move( skill->getSkillTypeNodeId() );
        skill->setSkillTypeNodeId( std::move( skillTypeNodeId ) );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectAttributes attr = UA_ObjectAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSetRealTime");

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
        UA_NODEID_NUMERIC(nsSkills, 0),
        skillTypeNodeId,
        UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
        UA_QUALIFIEDNAME(nsSkills, "ParameterSetRealTime"),
        UA_NODEID_NUMERIC(0, 58LU), (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],
        NULL, &nodeNumber);


        retVal |= UA_Server_addReference( server, nodeNumber,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        return retVal;
    }


    UA_NodeId findSkillParameterSetObject( UA_Server* server, const UA_NodeId& skillTypeNode ){
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        return getComponentNodeByBrowseName( server, skillTypeNode, "ParameterSet", diNS );
    }

    UA_NodeId findSkillParameterSetRealTimeObject( UA_Server* server, const UA_NodeId& skillTypeNode ){
        return getComponentNodeByBrowseName( server, skillTypeNode, "ParameterSetRealTime", skillTypeNode.namespaceIndex );
    }


    UA_StatusCode addParameterNodeToSkillType( UA_Server* server, SAMYSkill * const skill , const SkillParam& param )
    {
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_NodeId typeNodeId = Reflection::NodesIdsRegistry::getNodeId( param.dataType );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        UA_VariableAttributes vattr = UA_VariableAttributes_default;
        vattr.valueRank = UA_VALUERANK_SCALAR;
        vattr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
        UA_LocalizedText_init( &vattr.description );
        UA_LocalizedText_init( &vattr.displayName );
        vattr.description = UA_LOCALIZEDTEXT("", (char*)param.name.c_str()  );
        vattr.displayName = UA_LOCALIZEDTEXT("", (char*)param.name.c_str() );
        UA_NodeId_init( &vattr.dataType );

        vattr.dataType = typeNodeId;

        UA_NodeId paramNodeId = UA_NODEID_NULL;

        UA_NodeId parametersSetNodeInType = findSkillParameterSetObject( server, skill->getSkillTypeNodeId() );

        retVal |= UA_Server_addVariableNode( server,
                                             UA_NODEID_NUMERIC(nsSkills, 0),
                                             parametersSetNodeInType,
                                             UA_NODEID_NUMERIC(0, UA_NS0ID_HASORDEREDCOMPONENT ),
                                             UA_QUALIFIEDNAME( nsSkills, const_cast<char*>( param.name.c_str() ) ),
                                             UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                             vattr, NULL, &paramNodeId
                                             );

        retVal |= UA_Server_addReference( server, paramNodeId, UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        std::string nameRT = param.name + "_RealTime";
        UA_NodeId parametersSetRealTimeNodeInType = findSkillParameterSetRealTimeObject( server, skill->getSkillTypeNodeId() );

        UA_VariableAttributes vattr2 = UA_VariableAttributes_default;
        vattr2.valueRank = UA_VALUERANK_SCALAR;
        vattr2.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
        UA_LocalizedText_init( &vattr2.description );
        UA_LocalizedText_init( &vattr2.displayName );
        vattr2.description = UA_LOCALIZEDTEXT("", (char*)nameRT.c_str()  );
        vattr2.displayName = UA_LOCALIZEDTEXT("", (char*)nameRT.c_str() );
        UA_NodeId_init( &vattr2.dataType );
        vattr2.dataType =  typeNodeId;

        UA_NodeId paramNodeIdRT = UA_NODEID_NULL;

        retVal |= UA_Server_addVariableNode( server,
                                             UA_NODEID_NUMERIC(nsSkills, 0),
                                             parametersSetRealTimeNodeInType,
                                             UA_NODEID_NUMERIC(0, UA_NS0ID_HASORDEREDCOMPONENT ),
                                             UA_QUALIFIEDNAME( nsSkills, const_cast<char*>( nameRT.c_str() ) ),
                                             UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                             vattr2, NULL, &paramNodeIdRT
                                             );

        retVal |= UA_Server_addReference( server, paramNodeIdRT, UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addParametersToSkillType( UA_Server* server, SAMYSkill * const skill ){
        auto params = skill->getSkillConfig().skillParams;

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        for( auto& par : params ){
              retVal |= addParameterNodeToSkillType( server, skill, par );
        }
        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addSkillTypeToServer(UA_Server* server, SAMYSkill *skill ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        retVal |= addBasicSkillType( server, skill );
        logOnAddingError( "Basic Skill", retVal );

        retVal |= addParameterSetObjectToSkillType( server, skill );
        logOnAddingError( "ParameterSetObject", retVal );

        retVal |= addParameterSetRealTimeObjectToSkillType( server, skill );
        logOnAddingError( "ParameterSetRealTimeObject", retVal );

        retVal |= addParametersToSkillType( server, skill ); // Do the last, since it uses previous info stored in the skill!
        logOnAddingError( "Parameters of Skill", retVal );

        std::stringstream msg;
        msg << "Finished processing skill: " << skill->getSkillName();
        logger->info( msg.str() );

        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addSkillTypesToServer( UA_Server* server, std::vector<SAMYSkill>& skills ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        std::stringstream msg1;
        msg1 << "Start processing skills: ";
        logger->info( msg1.str() );

        retVal |= addCRCLBasedSkillTypeNode( server );

        for( auto& skill : skills ){
            retVal |= addSkillTypeToServer( server, &skill );
        }

        return retVal;
    }

} /*SAMY*/
