# Always set the cmake min version.
cmake_minimum_required(VERSION 3.0)

set (PROJECT_VERSION "1.0")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})


# ADD STUFF TO INCLUDE THE OPEN62541/GENERATED TYPES FILES!


# Set the variable PROJ_NAME to whatever your library's name is, PROJECT_VERSION should be a version string like "0.1"
project(MultiPlat_Dyn_Lib VERSION ${PROJECT_VERSION})

include_directories( ThirdParty )
include_directories( libs )

add_subdirectory( libs )

add_executable( test
		main.cpp )


set_target_properties(test
    PROPERTIES LINK_FLAGS "-L./bin"
    PREFIX ""
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION}
)


target_link_libraries(test PRIVATE ffi -ldl)

