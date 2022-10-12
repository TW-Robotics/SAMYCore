#include <algorithm>

#include <yaml_parsers.h>
#include <skillCallable.h>

namespace SAMY {
namespace Parsers {

bool iequals(const std::string& a, const std::string& b)
{
    return std::equal(a.begin(), a.end(),
                      b.begin(), b.end(),
                      [](char a, char b) {
                          return tolower(a) == tolower(b);
                      });
}

SkillScripting::SkillScriptingLanguage parseLanguage( const std::string& lang ){
    SkillScripting::SkillScriptingLanguage retVal = SkillScripting::SkillScriptingLanguage::NONE;
    if( iequals(lang, "C") || iequals(lang,"C++") ){
        retVal = SkillScripting::SkillScriptingLanguage::CPP;
    }else if( iequals(lang, "Python") ){
        retVal = SkillScripting::SkillScriptingLanguage::PYTHON;
    }else if( iequals(lang, "no_scripted") || lang.size() == 0 ){
        retVal = SkillScripting::SkillScriptingLanguage::NO_SCRIPTED;
    }
    return retVal;
}

std::vector< SkillParam > parseParameters(const YAML::Node& paramsNode, std::shared_ptr<spdlog::logger>& logger ){
    std::vector< SkillParam > retVal;
    int paramCounter = 0;

    for(const auto& param : paramsNode){
        SkillParam auxParam;
        auto paramNameNode = param["Name"];
        auto paramDataTypeNode = param["DataType"];
        if( !paramDataTypeNode ){
            std::string message = "In the SkillConfig.yaml, the Parameter number " + std::to_string(paramCounter) + " does not contain a DataType."
                                  "This is required in order for the SAMYCore to be able to call the corresponding script. "
                                  "This skill will be skipped, and hence it won't be available.";
            logger.get()->warn( message );
            return std::vector< SkillParam >{};
        }

        if( !paramNameNode ){
            auxParam.name = "parameter_" + std::to_string(paramCounter);
            std::string message = "In the SkillConfig.yaml, the Parameter number " + std::to_string(paramCounter) + " does not contain a Name."
                                  "A default name " + auxParam.name + " for this parameter has been assigned.";
            logger.get()->warn( message );
        }else{
            auxParam.name = param["Name"].as<std::string>();
        }
        auxParam.dataType = param["DataType"].as<std::string>(); // Here use a map or something so I assign to the DataType name the corresponding type
        retVal.emplace_back( auxParam );
    }
    return retVal;
}

bool parseSkillConfig(std::filesystem::path& configPath, SAMYSkillConfig& config, std::shared_ptr<spdlog::logger>& logger){

    std::ifstream stream(configPath);
    std::stringstream strStream;
    strStream << stream.rdbuf();

    YAML::Node data = YAML::Load(strStream.str());

    if(!data["SAMYSkillConfig"])
        return false;

    // ParseFundamentalSkills
    auto root = data["SAMYSkillConfig"];
    auto skillNameNode = root["SkillName"];
    auto entryPointNode = root["EntryFile"];

    if( !skillNameNode || !entryPointNode ){
        std::string message = "In the SkillConfig.yaml, SkillConfig.SkillName and SkillConfig.EntryFile are required. Skipping the skill, so the skill won't be available.";
        logger.get()->warn( message );
        return false;
    }

    config.skillName = root["SkillName"].as<std::string>();
    config.entryPoint.file = configPath.parent_path() / root["EntryFile"].as<std::string>();

    auto langNode = root["Language"];
    if(!langNode){ // TODO: Modify this so I can reuse the previous code for skills parsing as commands' arrays
        std::string message = "The skill described by " + configPath.u8string() + ", since it does not contain Language, is assumed to be non-scripted "
                                                                                      "(just an array of YAML CRCL commands in the file indicated by EntryFile)";
        logger.get()->warn( message );
        config.lang = SkillScripting::SkillScriptingLanguage::NO_SCRIPTED;
        // processNoScriptedSkill();
        return false;
    }else{
        config.lang = parseLanguage( root["Language"].as<std::string>() );
        if( config.lang == SkillScripting::SkillScriptingLanguage::NONE ){
            std::string message = "Unvalid value given for Language in " + configPath.u8string() + ". Valid values are C, C++, Python and NO_SCRIPTED. "
                                                                                        "Skipping the skill, so the skill won't be available.";
            logger.get()->warn( message );
            return false;
        }else{
            auto entryFunctionNode = root["EntryFunction"];
            if(!entryFunctionNode && ( config.lang == SkillScripting::SkillScriptingLanguage::PYTHON ||
                                                                                config.lang == SkillScripting::SkillScriptingLanguage::CPP ) ){
                std::string message = "The skill described by " + configPath.u8string() + " does not contain an entry function, but this is required since the skill is marked as "
                                                                               "using C, C++ or Python. Skipping the skill, so it won't be available";
                logger.get()->warn( message );
                config.lang = SkillScripting::SkillScriptingLanguage::NO_SCRIPTED;
                return false;
            }

            config.entryPoint.functionName = root["EntryFunction"].as<std::string>();

            auto paramsNode = root["Parameters"];
            if(!paramsNode){
                std::string message = "The skill described by " + configPath.u8string() + " does not contain an entry Parameters, so the skill is assumed to not have parameters";
                logger.get()->warn( message );
            }else{
                std::vector< SkillParam > params = std::move( parseParameters( paramsNode, logger) ); // Each param a pair name: dataType

                if( params.size() == 0 )
                    return false;

                config.skillParams = params;
            }

        }
    }

    return true;
}

bool SkillsParser::parseIndividualSkill(const std::filesystem::path& skillFolderPath){
    std::filesystem::path skillConfigPath;
    bool configFound = false;
    for( auto const& dir_entry : std::filesystem::directory_iterator(skillFolderPath)  ){
        if(  dir_entry.is_regular_file() && dir_entry.path().filename().u8string() == "SkillConfig.yaml"  ){
            skillConfigPath = dir_entry;
            configFound = true;
            break;
        }
    }

    if(!configFound){
        std::string message = "No config file found in skill folder " + skillFolderPath.u8string() + ". Skipping folder, so this skill won't be available.";
        logger.get()->warn( message );
        return false;
    }

    SAMYSkillConfig config;

    bool ok = parseSkillConfig(skillConfigPath, config, logger);

    if( ok ){
        skillConfigs.emplace_back( config );
        return true;
    }else
        return false;

}


bool SkillsParser::parseSkills(){
    bool retVal;

    for( auto const& dir_entry : std::filesystem::directory_iterator(skillsFolderPath)  ){
        if( std::filesystem::is_directory(dir_entry) ) // Each skill is in a folder with a SkillConfig.yaml file + code
            retVal |= parseIndividualSkill( dir_entry.path() );
    }

    logger->info( "Skills succesfully parsed" );

    return true;
}

SkillsParser::SkillsParser(const std::filesystem::path &skillsFolderPath_, const std::shared_ptr<spdlog::logger>& logger_ ):
    skillsFolderPath(skillsFolderPath_),
    logger(logger_)
{}

SkillsParser::SkillsParser( const std::shared_ptr<spdlog::logger>& logger_ ):
    skillsFolderPath( std::filesystem::current_path() ),
    logger(logger_)
{}


}

}
