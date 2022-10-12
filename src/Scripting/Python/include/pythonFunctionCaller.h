#pragma once

#include <vector>
#include <string>
#include <variant>

#include <dylib.h>
#include <ffi.h>
#include <Python.h>

#include <typed_literals.h>

// #include <SAMYRobot.h>
#include <functionCaller.h>

namespace SAMY{
    struct SAMYRobot; // forward definition
}

namespace SAMY {
namespace Scripting {

    class PythonCaller : public FunctionCaller
    {
    public:
     void call(UA_Server * const server, const std::vector<UA_NodeId>& paramNodes ) override final;

     PythonCaller( PyObject * callable_, std::vector<std::string> * paramsDataTypesNames_ ):
        FunctionCaller( paramsDataTypesNames_ ),
        callable(callable_)
        {}

    private:
        PythonCaller() = delete;
        bool initialize() override final;

        PyObject* callable;
        bool initialized; // Allows reusing the data types so they do not have to be set every time the function is run
    };

}
}

