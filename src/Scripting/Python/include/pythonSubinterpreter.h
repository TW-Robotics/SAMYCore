#pragma once

/* Modified from:
 https://gist.github.com/sterin/61561c3139dd49da1f43
*/

#include <Python.h>

#include <string>
#include <vector>
#include <thread>

namespace SAMY {
    namespace Python {

	// allow other threads to run
	class  EnableThreadsScope
	{
	public:
	    EnableThreadsScope()
	    {
		_state = PyEval_SaveThread();
	    }

	    ~EnableThreadsScope()
	    {
		PyEval_RestoreThread(_state);
	    }

	private:

	    PyThreadState* _state;
	};

	// restore the thread state when the object goes out of scope
	class RestoreTstateScope
	{
	public:

	    RestoreTstateScope()
	    {
		_ts = PyThreadState_Get();
	    }

	    ~RestoreTstateScope()
	    {
		PyThreadState_Swap(_ts);
	    }

	private:

	    PyThreadState* _ts;
	};

	// swap the current thread state with ts, restore when the object goes out of scope
	class SwapTstateScope
	{
	public:

	    SwapTstateScope(PyThreadState* ts)
	    {
		_ts = PyThreadState_Swap(ts);
	    }

	    ~SwapTstateScope()
	    {
		PyThreadState_Swap(_ts);
	    }

	private:

	    PyThreadState* _ts;
	};

	// create new thread state for interpreter interp, make it current, and clean up on destruction
	class PyThreadStateWrapper
	{
	public:

	    PyThreadStateWrapper(PyInterpreterState* interp)
	    {
		_ts = PyThreadState_New(interp);
		PyEval_RestoreThread(_ts);
	    }

	    ~PyThreadStateWrapper()
	    {
		PyThreadState_Clear(_ts);
		PyThreadState_DeleteCurrent();
	    }

	    operator PyThreadState*()
	    {
		return _ts;
	    }

	    static PyThreadState* current()
	    {
		return PyThreadState_Get();
	    }

	private:

	    PyThreadState* _ts;
	};

	// represent a sub interpreter
	class PythonSubinterpreter
	{
	public:

	    // perform the necessary setup and cleanup for a new thread running using a specific interpreter
	    struct ThreadScope
	    {
		PyThreadStateWrapper _state;
		SwapTstateScope _swap{ _state };

		ThreadScope(PyInterpreterState* interp) :
		    _state(interp)
		{
		}
	    };

	    PythonSubinterpreter()
	    {
		RestoreTstateScope restore;

		_ts = Py_NewInterpreter();
	    }

	    ~PythonSubinterpreter()
	    {
		if( _ts )
		{
		    SwapTstateScope sts(_ts);

		    Py_EndInterpreter(_ts);
		}
	    }

	    PyInterpreterState* interp()
	    {
		return _ts->interp;
	    }

	    static PyInterpreterState* current()
	    {
		return PyThreadStateWrapper::current()->interp;
	    }

	private:

	    PyThreadState* _ts;
	};

    } // ns Python
} // ns SAMY
