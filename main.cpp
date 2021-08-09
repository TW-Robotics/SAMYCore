#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
/* Files namespace_foo_flt_generated.h and namespace_foo_flt_generated.c are created from FooFlt.NodeSet2.xml in the
 * /src_generated directory by CMake */

#include "SAMYRobot.h"

#include <thread>

#include <signal.h>

#include <yaml_parser.h>

#include <samyskill.h>

#include <iostream>

#include <chrono>

#include <open62541/plugin/log_stdout.h>

#include "serverGenerator.h";

#include "namespace_kuka_iiwa_generated.h"


UA_Boolean running = true;
static void stopHandler(int sign){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}


int main(int argc, char** argv){

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server* server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, 4841, NULL);

    bool correctParsing = true;

    SAMY::Parsers::SkillsParser skillsParser;
    correctParsing |= skillsParser.parse( "../Skills.yaml" );
    std::vector<SAMY::SAMYSkill>* skills = skillsParser.getParsedSkills();

    SAMY::Parsers::RobotsConfigurationParser robotsParser;
    correctParsing |= robotsParser.parse( "../RobotsConfiguration.yaml", *skills );
    std::vector<SAMY::SAMYRobot>* robots = robotsParser.getParsedRobots();

    if( correctParsing == false )
        return 0;

    for(int i=0; i < skills->size(); i++){
        std::cout << "Number of commands in skill " << (*skills)[i].getSkillName() << "  :  "
                  << (*skills)[i].getSkillCommands().size() << std::endl;
        std::cout << "Skill NodeTypeID " << (*skills)[i].getSkillTypeNodeId().identifier.numeric << std::endl;
    }
    std::cout << "Number of parsed skills: " << skills->size() << std::endl;

    std::cout << "Robots size: " << robots->size() << std::endl;

    for(int i=0; i < robots->size(); i++){
        std::cout << "Robot skills: " << std::endl;
        for(int j=0; j < (*robots)[i].robotSkills.size(); j++){
            std::cout << "Skill: " << (*robots)[i].robotSkills[j].getSkillName() << "  Number of commands: "
                      << (*robots)[i].robotSkills[j].getSkillCommands().size() << std::endl;
        }
    }

    UA_StatusCode retVal = SAMY::ServerGenerator::generateSAMYCoreServer( server, robots, skills );
    if( retVal != UA_STATUSCODE_GOOD ){
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the fixed information models nodesets. "
        "Check previous output for any error.");
        retVal = UA_STATUSCODE_BADUNEXPECTEDERROR;
    }else {/*If custom namespaces succesfully added*/
        std::thread SAMYCoreOPCUAInterface(UA_Server_run, server, &running);
        SAMYCoreOPCUAInterface.detach();

        /* Connect SAMYCore to all the plugins */
 /*       for(int i=0; i < robots->size(); i++){
            retVal |= (*robots)[i].createConnectionToPlugin();
        }
*/

        std::cout<< "Request skills to the system and press enter to continue..." << std::endl;

        std::getchar();

        std::cout<< "Execution of skills start!" << std::endl;


        while( running && retVal == UA_STATUSCODE_GOOD ){
            for(int i=0; i < robots->size(); i++){
                if( (*robots)[i].lastRequestedSkill < (*robots)[i].robotPlan.size() ){
              //      retVal |= UA_Client_run_iterate((*robots)[i].client.get(), 1);
                    std::this_thread::sleep_for(std::chrono::milliseconds(1));
                }
            }
        }
    }    

    UA_Server_delete( server );

    return retVal == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
