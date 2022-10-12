pythonFunctionPreprocessing.cpp
Modifies the AST to include calls to SAMYScripting_API function waitForReponse(); where required (e.g. on branching, looping, etc.)



pythonFunctionLoader.cpp
It loads the modified AST into a callable PyObject*



pythonFunctionCaller.cpp
Allows calling a skill scripted in Python.
It uses the callable PyObject for this purpose.
Use ffi pointers for calls 



??maybe include an intermediate call in Python to hide some things regarding ffi??
