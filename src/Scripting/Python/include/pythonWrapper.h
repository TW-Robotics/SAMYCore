#pragma once

#include <Python.h>

namespace SAMY {
    namespace Python {

        class CPythonInstance
        {
            public:
                CPythonInstance()
                {
                    Py_Initialize();
     		    //PyEval_InitThreads(); // not needed as of Python 3.7, deprecated as of 3.9
                }

                ~CPythonInstance()
                {
                    Py_Finalize();
                }
        };


        class CPyObject
            {
            private:
                PyObject *p;

            public:
                CPyObject() : p(nullptr){}

                CPyObject(PyObject* _p) : p(_p){}


                ~CPyObject(){
                    release();
                }

                PyObject* getObject()
                {
                    return p;
                }

                PyObject* setObject(PyObject* _p)
                {
                    return (p = _p);
                }

                PyObject* addRef()
                {
                    if(p != nullptr)
                    {
                        Py_INCREF(p);
                    }
                    return p;
                }

                void release()
                {
                    if(p != nullptr)
                    {
                        Py_DECREF(p);
                    }
                    p = nullptr;
                }

                PyObject* operator = (PyObject* _p)
                {
                    p = _p;
                    return p;
                }

        };

    } // ns Python
} // ns SAMY

