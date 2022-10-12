#pragma once 

#include <cstdint>

#define UA_Int32 uint32_t // For testing 

extern "C" {
    void testFunction( UA_Int32 param1, UA_Int32 param2 );
} 
