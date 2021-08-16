#include <samycoreInterfaceGenerator.h>

namespace SAMY{

    UA_StatusCode SAMYCoreInterfaceGenerator::setContextInRobotSkill( UA_Server* server, const UA_NodeId& skillNode, SAMYRobot* robot )
    {
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal = UA_Server_setNodeContext( server, skillNode, static_cast<void*>( robot ) );
        if ( retVal != UA_STATUSCODE_GOOD) {
            throw std::runtime_error("SETTING SKILL CONTEXT (ROBOT AND SKILL) FOR SKILL FAILED");
        }
        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::setSkillMethodsCallbacks( UA_Server* server, UA_NodeId skillInstanceNode, SAMYRobot* robot ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal |= setStartMethodCallback( server, skillInstanceNode, const_cast<SAMYRobot*>(robot) );
        retVal |= setHaltMethodCallback( server, skillInstanceNode, const_cast<SAMYRobot*>(robot) );
        retVal |= setSuspendMethodCallback( server, skillInstanceNode, const_cast<SAMYRobot*>(robot) );
        retVal |= setResumeMethodCallback( server, skillInstanceNode, const_cast<SAMYRobot*>(robot) );
        retVal |= setResetMethodCallback( server, skillInstanceNode, const_cast<SAMYRobot*>(robot) );
        return retVal;
    }
UA_StatusCode SAMYCoreInterfaceGenerator::addSkillsToRobotController( UA_Server* server, SAMYRobot* robot ){
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
    for( int i=0; i < robot->robotSkills.size(); i++ )
    {
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

        robot->robotSkills[i].setSkillTypeNodeId( skillTypeNode );
        robot->robotSkills[i].setSkillNodeID( skillInstanceNode );
        retVal |= setContextInRobotSkill( server, skillInstanceNode, const_cast<SAMYRobot*>(robot) );
        retVal |= setSkillMethodsCallbacks( server, skillInstanceNode, const_cast<SAMYRobot*>(robot) );

        systemStatusNodesIds.emplace_back( skillInstanceNode );
    }
    robot->initializeRobotSkills( server );

    return retVal;
}

    UA_NodeId SAMYCoreInterfaceGenerator::findRobotControllerObject( UA_Server *server, const SAMYRobot* robot ){
        UA_UInt16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
        UA_Int16 roboticsNS = UA_Server_addNamespace( server, "http://opcfoundation.org/UA/Robotics/");

        UA_UInt32 length = 2;
        char *paths[length] = { "Controllers", (char*)robot->name.data };
        UA_UInt32 ids[length] = { UA_NS0ID_HASCOMPONENT, UA_NS0ID_HASCOMPONENT };
        UA_UInt16 ns[length] = { roboticsNS, robotNS };

        UA_BrowsePath browsePath;
        UA_BrowsePath_init(&browsePath);
        browsePath.startingNode = robot->robotNodeIdInSAMYCore;
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

        return res.targets->targetId.nodeId;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addCurrentState( UA_Server* server, const SAMYRobot* robot ){
        return UA_STATUSCODE_GOOD;
    }
    UA_StatusCode SAMYCoreInterfaceGenerator::addLastTransition( UA_Server* server, const SAMYRobot* robot ){
        return UA_STATUSCODE_GOOD;
    }
    UA_StatusCode SAMYCoreInterfaceGenerator::addCurrentSkill( UA_Server* server, const SAMYRobot* robot ){
        return UA_STATUSCODE_GOOD;
    }

    UA_NodeId SAMYCoreInterfaceGenerator::findFolderInRobotMotionSystem( UA_Server* server, const SAMYRobot* robot, char* folderName ){
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

    UA_NodeId SAMYCoreInterfaceGenerator::findSkillType( UA_Server* server, const char* skillName ){

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

    UA_StatusCode SAMYCoreInterfaceGenerator::addRobotMotionSystem( UA_Server* server, SAMYRobot* robot ){
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

        robot->robotNodeIdInSAMYCore = UA_NODEID_NUMERIC(robotNS, 15001LU);

        return retVal;
    }

    UA_NodeId SAMYCoreInterfaceGenerator::findRobotControllerSkillsObject( UA_Server* server, const SAMYRobot* robot ){
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

    UA_StatusCode SAMYCoreInterfaceGenerator::addRobotMotionDevice( UA_Server* server, const SAMYRobot* robot ){
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

    UA_StatusCode SAMYCoreInterfaceGenerator::addRobotPosition( UA_Server* server, const SAMYRobot* robot ){
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

        systemStatusNodesIds.emplace_back( UA_NODEID_NUMERIC(robotNS, 16296LU) );

        return retVal;
    }


    UA_StatusCode SAMYCoreInterfaceGenerator::addRobotCRCLStatus( UA_Server* server, const SAMYRobot* robot ){
        UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );
        UA_Int16 crclNS = UA_Server_addNamespace( server, "https://crcl.org" );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.minimumSamplingInterval = 0.000000;
        attr.userAccessLevel = 1;
        attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
        /* Value rank inherited */
        attr.valueRank = -1;
        attr.dataType = UA_NODEID_NUMERIC( crclNS, UA_CRCLID_CRCLSTATUSDATATYPE );
        attr.displayName = UA_LOCALIZEDTEXT("", "RobotStatus");
        #ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
        attr.description = UA_LOCALIZEDTEXT("", "Status of the robot");
        #endif

        UA_NodeId tempNode = UA_NODEID_NULL;
        retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_VARIABLE,
        UA_NODEID_NUMERIC(robotNS, 0),
        UA_NODEID_NUMERIC(robotNS, 15488LU),
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(robotNS, "RobotStatus"),
        UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
        (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, &tempNode);

        retVal |= UA_Server_addNode_finish( server, tempNode );

        systemStatusNodesIds.emplace_back( tempNode );

        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addRobotNextSkill( UA_Server* server, const SAMYRobot* robot ){
        UA_Int16 robotNS = UA_Server_addNamespace( server, reinterpret_cast<const char*>(robot->name.data) );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        UA_VariableAttributes attr = UA_VariableAttributes_default;
        attr.minimumSamplingInterval = 0.000000;
        attr.userAccessLevel = 1;
        attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
        /*attr.accessLevel = UA_ACCESSLEVELMASK_READ;*/
        /* Value rank inherited */
        attr.valueRank = -1;
        attr.dataType = UA_NODEID_NUMERIC(0, 17);
        attr.displayName = UA_LOCALIZEDTEXT("", "NextSkillNodeId");
        attr.displayName = UA_LOCALIZEDTEXT("", "NextSkillNodeId");
        #ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
        attr.description = UA_LOCALIZEDTEXT("", "The nodeid of the next skill to be executed by the robot");
        #endif

        UA_NodeId nextSkillNodeId = UA_NODEID_NULL;
        retVal |= UA_Server_addNode_begin(
        server,
        UA_NODECLASS_VARIABLE,
        UA_NODEID_NUMERIC(robotNS, 0),
        UA_NODEID_NUMERIC(robotNS, 16428LU),
        UA_NODEID_NUMERIC(0, 47LU),
        UA_QUALIFIEDNAME(robotNS, "NextSkillNodeId"),
        UA_NODEID_NUMERIC(0, 68),
        (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES], NULL, &nextSkillNodeId );

        retVal |= UA_Server_addNode_finish( server, nextSkillNodeId);

        systemStatusNodesIds.emplace_back( nextSkillNodeId );

        return retVal;
    }

    /* NodeId -> robotNS 16428 */
        UA_StatusCode SAMYCoreInterfaceGenerator::addRobotController( UA_Server* server, SAMYRobot* robot ){
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

            retVal = UA_Server_setNodeContext( server, UA_NODEID_NUMERIC(robotNS, 16428LU), static_cast<void*>( robot ) );

            return retVal;
        }

    UA_StatusCode SAMYCoreInterfaceGenerator::addSAMYRobotToServer( UA_Server* server, SAMYRobot* robot ){
        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        std::stringstream msg1;
        msg1 << "Processing Robot: " << robot->name.data;
        logger->info( msg1.str() );

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

        retVal |= addRobotCRCLStatus( server, robot );
        logOfNodesAdditionToServer( "Robot Motion Device CRCLStatus", retVal );

        retVal |= addRobotNextSkill( server, robot );
        logOfNodesAdditionToServer( "Robot Motion Device Next Skill", retVal );

        std::stringstream msg;
        msg << "Finished Processing Robot: " << robot->name.data << std::endl << std::endl;
        logger->info( msg.str() );

        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addSAMYRobotsToServer( UA_Server* server, std::vector<SAMYRobot>* robots ){

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        std::stringstream msg1;
        msg1 << "Start Processing Robots " << std::endl << std::endl;
        logger->info( msg1.str() );

        for( int i = 0; i < robots->size(); i++ ){
            retVal |= addSAMYRobotToServer( server, &(*robots)[i] );
        }
        return retVal;
    }

} /*SAMY*/
