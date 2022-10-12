#pragma once

#include <vector>
#include <string>
#include <variant>

//#include <open62541.h>
#include <dylib.h>
#include <ffi.h>
#include <Python.h>

#include <typed_literals.h>

// #include <SAMYRobot.h>
#include <OpcUaServer.h>

#include <iostream> // DELETE, FOR TESTING

namespace SAMY {
    struct SAMYRobot; // forward definition
}

namespace SAMY {

namespace Scripting {

    /* Abstract class for calling functions using as parameters Nodes of the information model */
    class FunctionCaller {
    public:
        //virtual ~FunctionCaller() = 0; // Rule of zero: Not required virtual destructor since shared_ptr keeps destructor of the original type despite polymorphism:
        // https://marcoarena.wordpress.com/2014/04/12/ponder-the-use-of-unique_ptr-to-enforce-the-rule-of-zero/
        virtual void call( UA_Server * const server, const std::vector<UA_NodeId>& paramNodes ) = 0;

    protected:
        FunctionCaller( std::vector<std::string> * paramsDataTypesNames_  ):
             paramsDataTypesNames(paramsDataTypesNames_)
             {}

        bool initialized = false;
        std::vector<std::string>* paramsDataTypesNames; // A function caller is "ready" to call a specific "type" of function
    private:
         virtual bool initialize( ) = 0;
        // virtual bool initialize( ){}
        FunctionCaller( ) = delete;

    };

}
}

