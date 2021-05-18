#ifndef SERVERGENERATOR_H
#define SERVERGENERATOR_H

#include "serverGenerator.h"

namespace SAMY{
namespace ServerGenerator{

    void logOfNodesAdditionToServer( const std::string& element, UA_StatusCode retVal ){
        std::string auxFail = "Could not add " + element + " to server.";
        std::string auxSuc = "Adding " +  element + " succeeded.";
        if( retVal != UA_STATUSCODE_GOOD ){
            UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, auxFail.c_str());
            retVal = UA_STATUSCODE_BADUNEXPECTEDERROR;
        }else{ std::cout << auxSuc << std::endl; }

    }

    UA_NodeId findFolderInRobotMotionSystem( UA_Server* server, const SAMYRobot* robot, char* folderName ){
        UA_UInt16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        UA_UInt16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
        UA_Int16 roboticsNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/Robotics/");

        UA_UInt32 length = 3;
        char *paths[length] = { "DeviceSet", (char*)robot->name.data, folderName };
        UA_UInt32 ids[length] = {UA_NS0ID_ORGANIZES, UA_NS0ID_ORGANIZES, UA_NS0ID_HASCOMPONENT};
        UA_UInt16 ns[length] = { diNS, robotNS, roboticsNS  };

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(ns[i], paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw std::runtime_error("FOLDER COULD NOT BE FOUND IN ROBOT MOTION SYSTEM: THE REQUIRED FOLDER IS NOT IN THE BROWSEPATH");

        UA_NodeId folderNodeId = res.targets->targetId.nodeId;

        return folderNodeId;
    }

    UA_NodeId findSkillType( UA_Server* server, const char* skillName ){

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

    UA_StatusCode addRobotMotionSystem( UA_Server* server, const SAMYRobot* robot ){
        UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        UA_Int16 roboticsNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/Robotics/");

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectAttributes attr = UA_ObjectAttributes_default;
        attr.eventNotifier = true;
        attr.displayName = UA_LOCALIZEDTEXT( "", (char*)robot->name.data );
        #ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
        attr.description = UA_LOCALIZEDTEXT( "",  (char*)robot->name.data );
        #endif
        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
        UA_NODEID_NUMERIC(robotNS, 15001LU),
        UA_NODEID_NUMERIC(diNS, 5001LU),
        UA_NODEID_NUMERIC(0, 35LU),
        UA_QUALIFIEDNAME(robotNS,  (char*)robot->name.data ),
        UA_NODEID_NUMERIC(roboticsNS, 1002LU),
        (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], NULL, NULL);

        retVal |= UA_Server_addNode_finish( server, UA_NODEID_NUMERIC( robotNS, 15001LU) );

        return retVal;
    }

    UA_NodeId findRobotControllerSkillsObject( UA_Server* server, const SAMYRobot* robot ){
        UA_UInt16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        UA_UInt16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
        UA_Int16 roboticsNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/Robotics/");
        UA_Int16 fortissDiNS = UA_Server_addNamespace( server, "https://fortiss.org/UA/DI/");

        UA_UInt32 length = 5;
        char *paths[length] = { "DeviceSet", (char*)robot->name.data, "Controllers", (char*)robot->name.data, "Skills" };
        UA_UInt32 ids[length] = {UA_NS0ID_ORGANIZES, UA_NS0ID_ORGANIZES, UA_NS0ID_HASCOMPONENT, UA_NS0ID_HASCOMPONENT, UA_NS0ID_HASCOMPONENT};
        UA_UInt16 ns[length] = { diNS, robotNS, roboticsNS, robotNS, fortissDiNS };

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
        browsePath.relativePath.elements = (UA_RelativePathElement*)UA_Array_new(length, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
        browsePath.relativePath.elementsSize = length;

        for(size_t i = 0; i < length; i++) {
            UA_RelativePathElement *elem = &browsePath.relativePath.elements[i];
            elem->referenceTypeId = UA_NODEID_NUMERIC(0, ids[i]);
            elem->targetName = UA_QUALIFIEDNAME_ALLOC(ns[i], paths[i]);
        }

        UA_BrowsePathResult res = UA_Server_translateBrowsePathToNodeIds(server, &browsePath);
        if(res.statusCode != UA_STATUSCODE_GOOD || res.targetsSize < 1)
            throw "SKILLS COULD NOT BE FOUND IN ROBOT CONTROLLER: THE REQUIRED OBJECT IS NOT IN THE BROWSEPATH";

        UA_NodeId folderNodeId = res.targets->targetId.nodeId;

        return folderNodeId;
    }

    UA_StatusCode addRobotMotionDevice( UA_Server* server, const SAMYRobot* robot ){
        UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        UA_Int16 fortissRoboticsNS = UA_Server_addNamespace( server, "https://fortiss.org/UA/Robotics/");

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectAttributes attr = UA_ObjectAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("",  reinterpret_cast<char*>(robot->name.data));
        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
        UA_NODEID_NUMERIC(robotNS, 15488LU),
        findFolderInRobotMotionSystem( server, robot, "MotionDevices"),
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(robotNS,   (char*)robot->name.data),
        UA_NODEID_NUMERIC(fortissRoboticsNS, 15768LU),
        (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);

        retVal |=  UA_Server_addNode_finish( server, UA_NODEID_NUMERIC(robotNS, 15488LU));

        return retVal;
    }

    UA_StatusCode addRobotPosition( UA_Server* server, const SAMYRobot* robot ){
        UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.minimumSamplingInterval = 0.000000;
        attr.userAccessLevel = 1;
        attr.accessLevel = 1;
        /* Value rank inherited */
        attr.valueRank = -1;
        attr.dataType = UA_NODEID_NUMERIC(0, 18814LU);
        attr.displayName = UA_LOCALIZEDTEXT("", "Position");
        #ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
        attr.description = UA_LOCALIZEDTEXT("", "The cartesian location of the robot");
        #endif

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_VARIABLE,
        UA_NODEID_NUMERIC(robotNS, 16296LU),
        UA_NODEID_NUMERIC(robotNS, 15488LU),
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(robotNS, "Position"),
        UA_NODEID_NUMERIC(0, 18791LU),
        (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

        retVal |= UA_Server_addNode_finish( server, UA_NODEID_NUMERIC(robotNS, 16296LU));

        return retVal;
    }

        UA_StatusCode addRobotController( UA_Server* server, const SAMYRobot* robot ){
            UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
            UA_Int16 roboticsNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/Robotics/");
            UA_Int16 fortissDiNS = UA_Server_addNamespace( server, "https://fortiss.org/UA/DI/");

            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
            UA_ObjectAttributes attr = UA_ObjectAttributes_default;
            attr.displayName = UA_LOCALIZEDTEXT("", (char*)robot->name.data );
            retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
            UA_NODEID_NUMERIC(robotNS, 16428LU),
            findFolderInRobotMotionSystem( server, robot, "Controllers"),
            UA_NODEID_NUMERIC(0, 47LU),
            UA_QUALIFIEDNAME(robotNS, (char*)robot->name.data ),
            UA_NODEID_NUMERIC(roboticsNS, 1003LU),
            (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
            retVal |= UA_Server_addReference( server, UA_NODEID_NUMERIC(robotNS, 16428LU), UA_NODEID_NUMERIC(0, 17603LU),
                                             UA_EXPANDEDNODEID_NUMERIC(fortissDiNS, 15396LU), true);

            retVal |= UA_Server_addNode_finish( server, UA_NODEID_NUMERIC(robotNS, 16428LU));

            return retVal;
        }

        inline const std::shared_ptr<UA_NodeId> UA_Server_getObjectChildId(
                UA_Server* server,
                const UA_NodeId objectId,
                const UA_QualifiedName childName,
                const UA_NodeId reference
        ) {
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
            if (retval != UA_STATUSCODE_GOOD || bpr.targetsSize < 1) {
                UA_BrowsePathResult_deleteMembers(&bpr);
                std::string qualifiedName = "ns=" + std::to_string(childName.namespaceIndex) + ";"
                                            + std::string(reinterpret_cast<char const*>(childName.name.data),
                                                          childName.name.length);
                std::string errorMessage = std::string(UA_StatusCode_name(retval));
                throw "NODE NOT FOUND ";
            }

            UA_NodeId* nodeId = UA_NodeId_new();

            UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, nodeId);

            UA_BrowsePathResult_deleteMembers(&bpr);

            return std::shared_ptr<UA_NodeId>(nodeId, UA_NodeId_delete);
        }

        inline const std::shared_ptr<UA_NodeId>
        UA_Server_getObjectComponentId(
                UA_Server* server,
                const UA_NodeId& objectId,
                const UA_QualifiedName& componentName
        ) {
            return UA_Server_getObjectChildId(server, objectId, componentName,
                                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT));
        }

        static UA_StatusCode startMethodCallback(
                UA_Server* server,
                const UA_NodeId* sessionId,
                void* sessionHandle,
                const UA_NodeId* methodId,
                void* methodContext,
                const UA_NodeId* objectId,
                void* objectContext,
                size_t inputSize,
                const UA_Variant* input,
                size_t outputSize,
                UA_Variant* output
        ){

            if (!objectContext)
                return UA_STATUSCODE_BADINTERNALERROR;

            auto* robot = static_cast<SAMYRobot*>(objectContext);

            /* Locks the thread while is adding the skill to the robot */
     //       const std::lock_guard<std::mutex> lock( robot->planMutex );

            for( int i = 0; i < robot->robotSkills.size(); i++ ){
                if( robot->robotSkills[i].getSkillNodeID().identifier.numeric == objectId->identifier.numeric ){
                    UA_CRCLSkillDataType skill;
                    if( robot->robotSkills[i].createSkillInstance( server, &skill ) ){
                        robot->robotPlan.emplace_back( skill );
                        std::cout << "ADDED " << skill.name.data << " TO ROBOT " << robot->name.data << std::endl;
          //              UA_String str;
          //              UA_String_init( &str );
          //              UA_print( &skill, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE], &str );
          //              std::cout<< str.data << std::endl;
                    }else{
                        throw std::runtime_error( "COULD NOT ADD SKILL TO ROBOT PLAN" );
                    }
                    break;
                }
            }

            return UA_STATUSCODE_GOOD;
        }

        UA_StatusCode setStartMethodCallbackAndContextInRobotSkill( UA_Server* server, const UA_NodeId& skillNode,
                                                                        SAMYRobot* robot ){

            UA_StatusCode retVal = UA_STATUSCODE_GOOD;

            retVal = UA_Server_setNodeContext( server, skillNode, static_cast<void*>( robot ) );
            if ( retVal != UA_STATUSCODE_GOOD) {
                throw std::runtime_error("SETTING START METHOD CONTEXT FOR A SKILL FAILED");
            }
            const std::shared_ptr<UA_NodeId> startMethodNode = UA_Server_getObjectComponentId(server, skillNode,
                                                                                        UA_QUALIFIEDNAME(0,
                                                                                                         const_cast<char*>("Start")));

            retVal = UA_Server_setMethodNode_callback( server, *(startMethodNode.get()), &startMethodCallback);

            return retVal;
        }

        UA_StatusCode addSkillsToRobotController( UA_Server* server, SAMYRobot* robot ){
            UA_StatusCode retVal = UA_STATUSCODE_GOOD;
            UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
            UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );
            for( int i=0; i < robot->robotSkills.size(); i++ ){
               UA_NodeId skillTypeNode = findSkillType( server, robot->robotSkills[i].getSkillName().c_str() );
               UA_NodeId skillInstanceNode;

                UA_ObjectAttributes attr = UA_ObjectAttributes_default;
                attr.displayName = UA_LOCALIZEDTEXT("", (char*)robot->robotSkills[i].getSkillName().c_str() );
                retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
                UA_NODEID_NUMERIC(robotNS, 0),
                findRobotControllerSkillsObject( server, robot ),
                UA_NODEID_NUMERIC(0, 47LU),
                UA_QUALIFIEDNAME(robotNS, (char*)robot->robotSkills[i].getSkillName().c_str()),
                skillTypeNode,
                (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], NULL, &skillInstanceNode);
    /*          ESTO PARA ANIADIR INTERFACES SI ES NECESARIO!
     *          retVal |= UA_Server_addReference( server, UA_NODEID_NUMERIC(robotNS, 16767LU),
                                                 UA_NODEID_NUMERIC(0, 17603LU),
                                                 UA_EXPANDEDNODEID_NUMERIC(fortissRoboticsNS, 15265LU), true); */

                retVal |= UA_Server_addNode_finish( server, skillInstanceNode);

                robot->robotSkills[i].setSkillNodeID( skillInstanceNode );
                robot->robotSkills[i].setSkillTypeNodeId( skillTypeNode );

                robot->robotSkills[i].setParameterNodesInSkill( server );

                retVal |= setStartMethodCallbackAndContextInRobotSkill( server, skillInstanceNode,
                                                                            const_cast<SAMYRobot*>(robot) );
            }
            return retVal;
        }

    UA_StatusCode addSAMYRobotToServer( UA_Server* server, SAMYRobot* robot ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        std::cout << std::endl << "Processing Robot: " << robot->name.data << std::endl;

        retVal |= addRobotMotionSystem( server, robot );
        logOfNodesAdditionToServer( "Robot MotionSystem ", retVal );

        retVal |= addRobotMotionDevice( server, robot );
        logOfNodesAdditionToServer( "Specific Motion Device", retVal );

        retVal |= addRobotController( server, robot );
        logOfNodesAdditionToServer( "Robot Specific Controller", retVal );

        retVal |= addSkillsToRobotController( server, robot );
        logOfNodesAdditionToServer( "Skills to Robot Specific Controller", retVal );

        retVal |= addRobotPosition( server, robot );
        logOfNodesAdditionToServer( "Robot Motion Device Position", retVal );

        std::cout << "Finished Processing Robot: " << robot->name.data << std::endl << std::endl;

        return retVal;
    }

    UA_StatusCode addSAMYRobotsToServer( UA_Server* server, std::vector<SAMYRobot>* robots ){

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        std::cout << "Start Processing Robots" << std::endl << std::endl;

        for( int i = 0; i < robots->size(); i++ ){
            retVal |= addSAMYRobotToServer( server, &(*robots)[i] );
        }
        return retVal;
    }

    /* Add CRCLBasedSkill abstract type (the rest of the skills inherit from this one) i=CRCLSKILLS_NODE_ID */
    static UA_StatusCode addCRCLBasedSkillTypeNode( UA_Server *server ){
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

    UA_StatusCode addBasicSkillType( UA_Server* server, SAMYSkill* skill ){
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_NodeId nodeNumber;

        std::cout << "Adding Skill Type node" << std::endl;

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

    UA_StatusCode addParameterSetObjectToSkillType( UA_Server* server, const SAMYSkill* skill ){
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_NodeId nodeNumber;

        //UA_NodeId skillTypeNodeId = findSkillType( server, skill->getSkillName().c_str() );
        UA_NodeId skillTypeNodeId = std::move( skill->getSkillTypeNodeId() );
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectAttributes attr = UA_ObjectAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
        UA_NODEID_NUMERIC(nsSkills, 0),
        skillTypeNodeId,
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(diNS, "ParameterSet"),
        UA_NODEID_NUMERIC(0, 58LU), (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],
        NULL, &nodeNumber);

        retVal |= UA_Server_addReference( server, nodeNumber,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        return retVal;
    }

    UA_StatusCode addParameterSetRealTimeObjectToSkillType( UA_Server* server, const SAMYSkill* skill ){
        UA_Int16 diNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/DI/");
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );

        UA_NodeId nodeNumber;
        //UA_NodeId skillTypeNodeId = findSkillType( server, skill->getSkillName().c_str() );
        UA_NodeId skillTypeNodeId = std::move( skill->getSkillTypeNodeId() );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_ObjectAttributes attr = UA_ObjectAttributes_default;
        attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSetRealTime");

        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
        UA_NODEID_NUMERIC(nsSkills, 0),
        skillTypeNodeId,
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(nsSkills, "ParameterSetRealTime"),
        UA_NODEID_NUMERIC(0, 58LU), (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],
        NULL, &nodeNumber);

        retVal |= UA_Server_addReference( server, nodeNumber,
                UA_NODEID_NUMERIC(0, 37LU), UA_EXPANDEDNODEID_NUMERIC(0, 78LU), true);

        return retVal;
    }

    UA_StatusCode addParametersToSkillType( UA_Server* server, const SAMYSkill *skill ){
        std::vector<UA_CRCLCommandsUnionDataType> com = skill->getSkillCommands();

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        AdderParameterNodesToSkillType adder( skill->getSkillName() , -1, server );

        for(int i=0; i < com.size(); i++){
            auto it = crclCommandSwitchfield_ParameterType_Map.find(com[i].switchField);
            if( it != crclCommandSwitchfield_ParameterType_Map.end()){
                CRCLCommandsParametersVariant param = it->second;
                adder.numberOfCommandInSkill = i;
                retVal |= std::visit( adder, param );
            }
            else{
                throw "PAMETER FOR SKILL COMMAND NOT FOUND";
            }
        }
        return retVal;
    }

    UA_StatusCode addSkillTypeToServer(UA_Server* server, SAMYSkill *skill ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        std::cout << std::endl << "Processing skill: " << skill->getSkillName() << std::endl;

        retVal |= addBasicSkillType( server, skill );
        logOfNodesAdditionToServer( "Basic Skill", retVal );

        retVal |= addParameterSetObjectToSkillType( server, skill );
        logOfNodesAdditionToServer( "ParameterSetObject", retVal );

        retVal |= addParameterSetRealTimeObjectToSkillType( server, skill );
        logOfNodesAdditionToServer( "ParameterSetRealTimeObject", retVal );

        retVal |= addParametersToSkillType( server, skill );
        logOfNodesAdditionToServer( "Parameters of Skill", retVal );

        std::cout << "Finished Processing skill: " << skill->getSkillName() << std::endl << std::endl;

        return retVal;
    }

    UA_StatusCode addSkillTypesToServer( UA_Server* server, std::vector<SAMYSkill> *skills ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_Int16 nsSkills = UA_Server_addNamespace( server, "http://SAMY.org/SAMYSkills" );
        std::cout << "SAMYSkills Namespace Number: " << nsSkills << std::endl;

        retVal |= addCRCLBasedSkillTypeNode( server );

        for( int i = 0; i < skills->size(); i++ ){
            retVal |= addSkillTypeToServer( server, &(*skills)[i] );
        }

        return retVal;
    }

    UA_StatusCode addFixedInformationModels( UA_Server* server, std::vector<SAMYRobot>* robots ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;

        retVal |= namespace_di_generated( server );
        logOfNodesAdditionToServer( "DI Nodeset", retVal );

        retVal |= namespace_robotics_generated( server );
        logOfNodesAdditionToServer( "Robotics Nodeset", retVal );

        retVal |= namespace_fortiss_di_generated( server );
        logOfNodesAdditionToServer( "Fortiss DI Nodeset", retVal );

        retVal |= namespace_fortiss_robotics_generated( server );
        logOfNodesAdditionToServer( "Fortiss Robotics Nodeset", retVal );

        retVal |= namespace_crcl_generated( server );
        logOfNodesAdditionToServer( "CRCL Nodeset", retVal );

        return retVal;
    }

    UA_StatusCode generateSAMYCoreServer( UA_Server* server, std::vector<SAMYRobot>* robots,
                                                                std::vector<SAMYSkill>* skills ){

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal |= addFixedInformationModels( server,     robots );
        if( retVal != UA_STATUSCODE_GOOD ){
            UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the fixed nodesets!!");
            retVal = UA_STATUSCODE_BADUNEXPECTEDERROR;
        }else{ std::cout << std::endl << "DI, Robotics, Fortiss DI, Fortiss Robotics, CRCL nodesets correctly added" << std::endl
                         << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl; }


        retVal |= addSkillTypesToServer( server, skills );
        if( retVal != UA_STATUSCODE_GOOD ){
            UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add all the skill types nodesets. ");
            retVal = UA_STATUSCODE_BADUNEXPECTEDERROR;
        }else{ std::cout << "Skill types nodesets correctly added. " << std::endl
                         <<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"  << std::endl; }

        retVal |= addSAMYRobotsToServer( server, robots );
        if( retVal != UA_STATUSCODE_GOOD ){
            UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the Robots nodesets. ");
            retVal = UA_STATUSCODE_BADUNEXPECTEDERROR;
        }else{ std::cout << "Robots nodesets correctly added. " << std::endl
                         << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl ; }

        return retVal;
    }
} /*SAMY*/
} /*ServerGenerator*/


#endif SERVERGENERATOR_H
