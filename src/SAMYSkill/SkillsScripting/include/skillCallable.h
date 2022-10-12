#pragma once

#include <vector>
#include <string>
#include <variant>
#include <typeinfo>

#include <dylib.h>
#include <ffi.h>
#include <Python.h>

#include <typed_literals.h>
#include <cppFunctionCaller.h>
#include <pythonFunctionCaller.h>
#include <cppFunctionLoader.h>
#include <pythonFunctionLoader.h>

//#include <SAMYRobot.h>

namespace SAMY {
    struct SAMYRobot; // forward definition
}

namespace SAMY {
namespace SkillScripting {

    enum class SkillScriptingLanguage {
         NONE = 0,
         NO_SCRIPTED = 1,
         CPP = 2,
         PYTHON = 3,

         NUM_SCRIPTING_LANGUAGES
    };

    class SkillCallable {
    public:
     SkillCallable() = default;
     SkillCallable( SkillScriptingLanguage la, std::shared_ptr< Scripting::FunctionCaller > ca ):
         lang(la),
         caller(ca)
         {}


     SkillScriptingLanguage getLanguage(){return lang; }
     void call( UA_Server * const server, const std::vector<UA_NodeId>& paramNodes );

    private:
     //SkillCallable() = delete;
     bool initialize();

     SkillScriptingLanguage lang = SkillScriptingLanguage::NONE;
     std::shared_ptr< Scripting::FunctionCaller > caller;
     bool initialized = false; // Allows reusing the data types so they do not have to be set every time the function is run
     ffi_cif callingInterface;
    };

}
}

