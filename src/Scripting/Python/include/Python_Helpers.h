#pragma once

#include <Python.h>
#include <string>

inline std::string convertToString( PyObject* obj ){
        PyObject* str_exc_type = PyObject_Repr(obj); //Now a unicode object
        PyObject* pyStr = PyUnicode_AsEncodedString(str_exc_type, "utf-8", "Error ~");
        return std::string{ PyBytes_AS_STRING(pyStr) };
}
