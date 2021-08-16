#ifndef SERVERINTERFACEGENERATOR_H
#define SERVERINTERFACEGENERATOR_H

#include <map>
#include <vector>
#include <typeinfo>
#include <algorithm>
#include <memory>
#include <thread>

#include "namespace_di_generated.h"
#include "namespace_robotics_generated.h"
#include "namespace_fortiss_di_generated.h"
#include "namespace_fortiss_robotics_generated.h"
#include "namespace_crcl_generated.h"
#include <types_crcl_generated_handling.h>
#include <helpers.h>
#include <informationSource.h>
#include <logging.h>
#include <ProgramState.h>
#include <SAMYRobot.h>

namespace SAMY {
 struct SAMYRobot;
 struct SAMYSkill;
}
namespace SAMY{

    class SAMYCoreInterfaceGenerator{
    public:
        SAMYCoreInterfaceGenerator( std::shared_ptr<spdlog::logger> appLogger_ );
        UA_StatusCode generateSAMYCoreInterface( UA_Server* server, std::vector<SAMYRobot>* robots,
                                                                    std::vector<SAMYSkill>* skills,
                                                                    std::vector<InformationSource>* informationSources );
        std::vector<UA_NodeId> getSystemStatusNodesIds();
        private:
        std::vector<UA_NodeId> systemStatusNodesIds;
        std::shared_ptr<spdlog::logger> logger;

        void logOfNodesAdditionToServer( const std::string& element, UA_StatusCode retVal );
        UA_NodeId findRobotControllerObject( UA_Server *server, const SAMYRobot* robot );
        UA_StatusCode addCurrentState( UA_Server* server, const SAMYRobot* robot );
        UA_StatusCode addLastTransition( UA_Server* server, const SAMYRobot* robot );
        UA_StatusCode addCurrentSkill( UA_Server* server, const SAMYRobot* robot );
        UA_NodeId findFolderInRobotMotionSystem( UA_Server* server, const SAMYRobot* robot, char* folderName );
        UA_NodeId findSkillType( UA_Server* server, const char* skillName );
        UA_StatusCode addRobotMotionSystem( UA_Server* server, SAMYRobot* robot );
        UA_NodeId findRobotControllerSkillsObject( UA_Server* server, const SAMYRobot* robot );
        UA_StatusCode addRobotMotionDevice( UA_Server* server, const SAMYRobot* robot );
        UA_StatusCode addRobotPosition( UA_Server* server, const SAMYRobot* robot );
        UA_StatusCode addRobotCRCLStatus( UA_Server* server, const SAMYRobot* robot );
        UA_StatusCode addRobotNextSkill( UA_Server* server, const SAMYRobot* robot );
        UA_StatusCode addRobotController( UA_Server* server, SAMYRobot* robot );
        UA_StatusCode setContextInRobotSkill( UA_Server* server, const UA_NodeId& skillNode, SAMYRobot* robot );
        UA_StatusCode setStartMethodCallback( UA_Server* server, const UA_NodeId& skillNode, SAMYRobot* robot );
        UA_StatusCode setHaltMethodCallback( UA_Server* server, const UA_NodeId& skillNode, SAMYRobot* robot );
        UA_StatusCode setResumeMethodCallback( UA_Server* server, const UA_NodeId& skillNode, SAMYRobot* robot );
        UA_StatusCode setSuspendMethodCallback( UA_Server* server, const UA_NodeId& skillNode, SAMYRobot* robot );
        UA_StatusCode setResetMethodCallback( UA_Server* server, const UA_NodeId& skillNode, SAMYRobot* robot );
        UA_StatusCode addSkillsToRobotController( UA_Server* server, SAMYRobot* robot );
        UA_StatusCode addSAMYRobotToServer( UA_Server* server, SAMYRobot* robot );
        UA_StatusCode addSAMYRobotsToServer( UA_Server* server, std::vector<SAMYRobot>* robots );
        UA_StatusCode addCRCLBasedSkillTypeNode( UA_Server *server );
        UA_StatusCode addBasicSkillType( UA_Server* server, SAMYSkill* skill );
        UA_StatusCode addParameterSetObjectToSkillType( UA_Server* server, SAMYSkill* skill );
        UA_StatusCode addParameterSetRealTimeObjectToSkillType( UA_Server* server, SAMYSkill* skill );
        UA_StatusCode addParametersToSkillType( UA_Server* server, const SAMYSkill *skill );
        UA_StatusCode addSkillTypeToServer(UA_Server* server, SAMYSkill *skill );
        UA_StatusCode addSkillTypesToServer( UA_Server* server, std::vector<SAMYSkill> *skills );
        UA_StatusCode addFixedInformationModels( UA_Server* server, std::vector<SAMYRobot>* robots );
        UA_StatusCode addInformationSourcesToServer( UA_Server* server, std::vector<InformationSource>* infoSources );
        UA_StatusCode setSkillMethodsCallbacks( UA_Server* server, UA_NodeId skillInstanceNode, SAMYRobot* robot );

    };

    static void logOfNodesAdditionToServer( const std::string& element, UA_StatusCode retVal );

}

#endif
