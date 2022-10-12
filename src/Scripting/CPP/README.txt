cppFunctionPreprocessing.cpp
Creates a copy of the original, and adds to the code of the original statements for calling to the SAMYScripting_API function waitForReponse(); where required (e.g. on branching, looping, etc.)


cppFunctionCompiler.cpp
Given a path, if there is a CMakeLists.txt file, it uses that for compiling. Otherwise, it copies the default CMakeFile.txt and attempts to compile


cppFunctionLoader.cpp
Given a path, it loads the dynamic library and it makes it available to the SAMYSkill


cppFunctionCaller.cpp
Allows calling a skill.
It is invoked upon calling start method node for a skill with a cpp implementation.
It takes the skill, reads the values of the array of parameters std::vector<UA_NodeId> normalParameterNodes;, and uses those values for calling using libffi (every argument is a pointer! This way I do not have to worry about unions) to the corresponding C/Cpp function.
