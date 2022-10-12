#pragma once

#include <vector>
#include <string>
#include <variant>

#include <dylib.h>
#include <ffi.h>
#include <Python.h>

#include <typed_literals.h>

//#include <SAMYRobot.h>
#include <functionCaller.h>
#include <OpcUaServer.h>

namespace SAMY {
    struct SAMYRobot; // forward definition
}

namespace SAMY {
namespace Scripting {

    class CppCaller : public FunctionCaller {
    public:
     void call(UA_Server * const server, const std::vector<UA_NodeId>& paramNodes ) override final;

     CppCaller( dylib& library_, dylib::native_symbol_type& symbol_, std::vector<std::string> * paramsDataTypesNames_ ):
         FunctionCaller( paramsDataTypesNames_ ),
         library( std::move(library_) ),
         symbol( std::move(symbol_) )
         {
            ffiArgs.resize( paramsDataTypesNames_->size(), nullptr );
         }

    private:
     CppCaller() = delete;
     bool initialize() override final;

     dylib library;
     dylib::native_symbol_type symbol;
     std::vector< ffi_type* > ffiArgs;
     ffi_cif callingInterface;
    };

}
}

