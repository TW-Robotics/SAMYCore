#include <cppFunctionLoader.h>


#include <iostream> //DELETE!
#include <filesystem>

namespace SAMY {
namespace Scripting {

    bool CppLoader::load( )
    {
        if( loaded )
            return true;

        // USE has_symbol() ??????????

        callable = library.get_symbol( entryFunction.c_str() );

        char* err = dlerror();
        if (err) {
            fprintf(stderr, "COULD NOT LOAD THE CPP SKILL %s\n %s\n", entryFunction.c_str(), err);
            exit(1);
        }

        loaded = true;
    }

}
}


