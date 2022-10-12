#pragma once

#include <filesystem>

#include <dylib.h>
#include <Python.h>

#include <Python_Helpers.h>
#include <functionLoader.h>

namespace SAMY {
namespace Scripting {

    class PythonLoader : public FunctionLoader {
    public:
     bool load( ) override final;

     PyObject* getCallable(){ return callable; }

     PythonLoader( const std::filesystem::path& filePath_, const std::string& entryFunction_ ):
         FunctionLoader(filePath_, entryFunction_)
         {}
    private:
     PythonLoader() = delete;

     PyObject* callable;
    };

}
}
