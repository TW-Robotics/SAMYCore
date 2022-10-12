#pragma once 

#include <cstdint>

#include <dylib.h>

#include <skillsScriptingAPI.h>

extern "C" {
/*
        void SAMYCoreAPI_dummy();
        void SAMYCoreAPI_dummyCommandState_Running();
        void SAMYCoreAPI_dummyCommandState_Pending();
        void SAMYCoreAPI_dummyCommandState_Awaiting();
        void SAMYCoreAPI_dummyWait();
*/

        void testFunction2( UA_UInt32 const * const param1, UA_UInt32 const * const param2 );
        void testFunction( UA_UInt32 param1, UA_UInt32 param2 );
} 
