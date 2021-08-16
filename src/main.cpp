#include <samycore.h>

UA_Boolean running = true;
static void stopHandler(int sign){
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(int argc, char** argv){

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    if (argc != 2) return -1;

    SAMY::SAMYCore core{argv[1]};
    core.run( running );

    return 0;
}

/*
 *
 *
    UA_Server* server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, 4841, NULL);

    bool correctParsing = true;

    SAMY::Parsers::SkillsParser skillsParser;
    correctParsing |= skillsParser.parse( "../Skills.yaml" );
    std::vector<SAMY::SAMYSkill>* skills = skillsParser.getParsedSkills();

    SAMY::Parsers::RobotsParser robotsParser;
    correctParsing |= robotsParser.parse( "../RobotsConfiguration.yaml", *skills );
    std::vector<SAMY::SAMYRobot>* robots = robotsParser.getParsedRobots();

    SAMY::Parsers::InformationSourcesParser infoSourcesParser;
    correctParsing |= infoSourcesParser.parse( "../InformationSources.yaml" );
    std::vector<SAMY::InformationSource>* infoSources = infoSourcesParser.getParsedSources();

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

    std::cout << "Info sources: " << std::endl;
    for(int i=0; i < infoSources->size(); i++){
        std::cout << "Info source " << (*infoSources)[i].getName() << std::endl;
        for(int j=0; j < (*infoSources)[i].getDataTypesNodeIds().size(); j++){
            std::cout << "Info source Data Type " << (*infoSources)[i].getDataTypesNodeIds()[j].identifier.numeric << std::endl;
        }
    }

    SAMY::ServerInterfaceGenerator generator;

    UA_StatusCode retVal = generator.generateSAMYCoreInterface( server, robots, skills, infoSources );
    if( retVal != UA_STATUSCODE_GOOD ){
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the fixed information models nodesets. "
        "Check previous output for any error.");
        retVal = UA_STATUSCODE_BADUNEXPECTEDERROR;
    }else {
        std::thread SAMYCoreOPCUAInterface(UA_Server_run, server, &running);
        SAMYCoreOPCUAInterface.detach();


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

    */
