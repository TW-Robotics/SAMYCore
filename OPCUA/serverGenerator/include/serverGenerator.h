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
#include "SAMYRobot.h"
#include <types_crcl_generated_handling.h>

namespace SAMY{
namespace ServerGenerator{

    /* Add robot to SAMYCore internals */
    UA_StatusCode addMotionSystem( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addMotionDevices( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addRobotSpecificMotionDevice( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addRobotManufacturer( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addRobotModel( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addRobotMotionDeviceCategory( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addRobotPosition( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addRobotParameterSet( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addControllers( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addRobotSpecificController( UA_Server* server, const SAMYRobot* robot );
    UA_StatusCode addControllerSkills(UA_Server* server, const SAMYRobot *robot );
    UA_StatusCode addSkillToRobot(UA_Server* server, const SAMYRobot* robot);
    UA_StatusCode addSkillsToRobot( UA_Server* server, const SAMYRobot *robot );
    UA_StatusCode addSAMYRobotToServer(UA_Server* server, SAMYRobot *robot );
    /* Add robots to SAMYCore interface */
    UA_StatusCode addSAMYRobotsToServer( UA_Server* server, std::vector<SAMYRobot>* robots );

    /* Add skill to SAMYCore internals */
    UA_StatusCode addBasicSkillType(UA_Server* server, SAMYSkill *skill );
    UA_StatusCode addParameterSetObjectToSkillType(UA_Server* server, const SAMYSkill *skill );
    UA_StatusCode addParametersToSkillType(UA_Server* server, const SAMYSkill *skill );
    UA_StatusCode addSkillTypeToServer(UA_Server* server, SAMYSkill *skill );
    /* Add skills to SAMYCore interface */
    UA_StatusCode addSkillTypesToServer(UA_Server* server, std::vector<SAMYSkill> *skills );

    /* Generate SAMYCore OPC UA Server internals */
    UA_StatusCode addFixedInformationModels( UA_Server* server );

    /* Generate SAMYCore OPC UA Server interface */
    UA_StatusCode generateSAMYCoreServer(UA_Server* server, std::vector<SAMYRobot> *robots,
                                                                std::vector<SAMYSkill> *skills );   
}
}
