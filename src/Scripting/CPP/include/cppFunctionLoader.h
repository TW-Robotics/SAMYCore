#pragma once

#include <functionLoader.h>
#include <filesystem>
#include <dylib.h>

namespace SAMY {
namespace Scripting {

    class CppLoader : public FunctionLoader  {
    public:
     bool load( ) override final;

     inline dylib::native_symbol_type& getCallable(){ return callable; }
     inline dylib& getLibrary(){ return library; }

     CppLoader( const std::filesystem::path& filePath_, const std::string& entryFunction_ ):
         FunctionLoader(filePath_, entryFunction_),
         library( filePath.parent_path(), entryFunction_, true  ) // NOT ENTRY FUNCTION BUT THE .so NAME!!!!!!!!!!! MODIFY!
         {}
    private:
     CppLoader() = delete;

     dylib library;
     dylib::native_symbol_type callable;
    };

}
}
