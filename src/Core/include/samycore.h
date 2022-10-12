#pragma once

#include <vector>
#include <memory>
#include <thread>

#include <BS_thread_pool.hpp>

#include <pythonWrapper.h>

#include <samycoreInterfaceGenerator.h>
#include <OpcUaServer.h>
#include <yaml_parsers.h>
#include <logging.h>
#include <logging_opcua.h>

#include <crcl_Reflection.h>
#include <di_Reflection.h>
#include<robotics_Reflection.h>
#include <fortiss_di_Reflection.h>

namespace SAMY {

    /* SAMYCore is a singleton, in order for the API to be able to use the SAMYCore without having to pass it as variable nor being a global, so the API is transparent.
     * This also allows us to not having to pass around the robot which is calling a certain scripted skill,
     * because we use a thread id - caller robot map for recovering the caller robot(threadToRobotMap)
     */
    class SAMYCore{
    public:
        inline static SAMYCore& getInstance( )
        {
            static SAMYCore instance{}; // Guaranteed to be destroyed. Instantiated on first use.
            return instance;
        }

        void configure( const std::string &serverConfigFilePath );

        SAMYCore(SAMYCore const&) = delete;
        void operator=(SAMYCore const&)  = delete;
        SAMYCore ( SAMYCore && ) = delete;
        SAMYCore& operator=(SAMYCore &&)  = delete;

        inline SAMYRobot* getRobotFromThreadID( std::thread::id threadID ){ return threadToRobotMap.at( threadID ); }
        inline void setThreadIDtoRobot( std::thread::id threadID, SAMYRobot* robotPtr ){ threadToRobotMap[ threadID ] = robotPtr; }

        std::shared_ptr<spdlog::logger> getLogger();
        void run(bool &running);
    private:
        SAMYCore( ) = default;

        std::unique_ptr<OPCUA::OpcUaServer> server;
        std::unique_ptr<Python::CPythonInstance> python;

        SAMYCoreConfig config;
        std::vector< std::pair<UA_NodeId, std::string> > systemStatusNodesAndNames;
        std::vector<SAMYRobot> robots;
        std::vector<SAMYSkill> skills;
        std::vector<InformationSource> informationSources;
        std::vector< std::tuple< std::string, UA_UInt16, std::string > > dataBaseTypes; /* tuple is (namespace, index, browsename) */
        std::shared_ptr<spdlog::logger> logger;

        bool configured = false;

        BS::thread_pool threadsPool;
        /* Since we use a threads pool for running tasks (executing robot skills),
        this map keeps track of which thread is currently processing which robot skill execution. This way I do not have to pass around the robot in the API */
        std::map< std::thread::id, SAMYRobot* > threadToRobotMap;

        void fillConfig( const std::shared_ptr<spdlog::logger>& logger, const std::string& serverConfigFilePath );
        void generateThreadsPool();
        void generateSkills( const std::vector< SAMYSkillConfig >& skillsConfigs );
        void setThreadsPoolInRobots();
        inline UA_StatusCode initializeRobots(){ UA_StatusCode retval = UA_STATUSCODE_GOOD; for( auto& robot : robots ) retval |= robot.initializeRobot(); return retval; }

    };

}


