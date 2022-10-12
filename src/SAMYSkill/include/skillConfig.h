#pragma once

#include <string>
#include <vector>
#include <filesystem>

#include <helpers.h>
#include <skillCallable.h>

namespace SAMY{

    struct ScriptEntryPoint {
        std::filesystem::path file;
        std::string functionName;
    };

    struct SkillParam{
        std::string name;
        std::string dataType;
    };

	struct SAMYSkillConfig{
		std::string skillName;
        ScriptEntryPoint entryPoint; // Use for loading the function
        SkillScripting::SkillScriptingLanguage lang; // language of the script + loaded script ready to be called/interpreted by the corresponding robot thread
        std::vector< SkillParam > skillParams;
    };

}
