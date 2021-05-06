#ifndef YAML_PARSER_H
#define YAML_PARSER_H

#include <iostream>
#include <fstream>
#include <tuple>
#include "string.h"
#include "crcl_nodeids.h"
#include "namespace_crcl_generated.h"
#include "types_crcl_generated.h"
#include <samyskill.h>
#include <yaml-cpp/yaml.h>
#include <algorithm>
#include <vector>
#include "SAMYRobot.h"

namespace SAMY {

namespace Parsers {
    class SkillsParser;
    class RobotsConfigurationParser;
}

class Parsers::SkillsParser{
    std::vector<SAMY::SAMYSkill> parsedSkills;
public:
    SkillsParser() = default;
    bool parse(const std::string& filepath );
    UA_CRCLCommandsUnionDataType stringToCRCLCommandUnion(const std::string& strEx) const ;
    std::vector<SAMY::SAMYSkill>* getParsedSkills();
};

class Parsers::RobotsConfigurationParser{
    std::vector<SAMYRobot> parsedRobots;
public:
    RobotsConfigurationParser() = default;
    bool parse(const std::string& filepath, std::vector<SAMYSkill> &parsedSkills);
    std::vector<SAMYRobot>* getParsedRobots();
};

}

#endif /*YAML_PARSER_H*/
