#ifndef SERVERCONFIG_H
#define SERVERCONFIG_H

#include <string>

struct SAMYCoreConfig{
    std::string appLoggingLevel;
    std::string serverLoggingLevel;
    std::string logsPath;
    std::string serverPort;
    bool encryption = false;
    bool anonymous = true;
    std::string pathToRobotsConfig;
    std::string pathToSkillsConfig;
    std::string pathToInformationSourcesConfig;
    std::string appUri;
    std::string appName;
    std::string certificatesPath;
};

#endif
