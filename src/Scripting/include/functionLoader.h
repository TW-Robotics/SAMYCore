#pragma once

#include <filesystem>
#include <dylib.h>

namespace SAMY {
namespace Scripting {

    class FunctionLoader
    {
    public:
        //virtual ~FunctionLoader() = 0; // Rule of zero: Not required virtual destructor since shared_ptr keeps destructor of the original type despite polymorphism:
        // https://marcoarena.wordpress.com/2014/04/12/ponder-the-use-of-unique_ptr-to-enforce-the-rule-of-zero/

        virtual bool load( ) = 0;

        inline bool isReady() const { return loaded; }
        inline std::string getEntryFunction() const { return entryFunction; }
        inline std::filesystem::path getFilePath() const { return filePath; }

    protected:
        FunctionLoader( const std::filesystem::path& path_, const std::string& entryFunction_ ):
            filePath(path_),
            entryFunction(entryFunction_)
            {}

        std::filesystem::path filePath;
        std::string entryFunction;
        bool loaded = false; // Allows reusing the data types so they do not have to be set every time the function is run

    private:
        FunctionLoader() = delete;

    };

}
}

