#include <pythonFunctionLoader.h>

namespace SAMY {
namespace Scripting {

    bool PythonLoader::load( ){
        if( loaded )
            return true;

        PyObject * sys = PyImport_ImportModule("sys");
        PyObject * path = PyObject_GetAttrString(sys, "path");
        auto folderPath = filePath.parent_path();
        std::string p1 = folderPath.u8string();
        PyList_Append(path, PyUnicode_FromString( p1.c_str()) );

        std::string p2 = filePath.u8string();

        PyObject* pName = PyUnicode_FromString( p2.c_str() );
        PyObject * Module = PyImport_Import(pName);

   //     std::string mod = convertToString( Module );
   //     std::cout << mod << std::endl;

        PyObject * Dict = PyModule_GetDict(Module);

        callable = PyDict_GetItemString(Dict, entryFunction.c_str() );

        if( callable ){
            loaded = true;
            return true;
        }else{
            return false;
        }
    }

}
}


