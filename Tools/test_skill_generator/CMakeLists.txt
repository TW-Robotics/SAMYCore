# Always set the cmake min version.
cmake_minimum_required(VERSION 3.0)

set (PROJECT_VERSION "1.0")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})


# Set the variable PROJ_NAME to whatever your library's name is, PROJECT_VERSION should be a version string like "0.1"
project(Skill_1_project VERSION ${PROJECT_VERSION})

# Create our library target
add_library(Skill_1 SHARED)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

target_sources(Skill_1
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/Skill_1.cpp
)

# This will name your output .so files "libsomething.1.0" which is pretty useful
set_target_properties(Skill_1
    PROPERTIES
    PREFIX "lib" # It will add lib as prefix to the library
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION}
)

# Let's set compiler-specific flags
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
    # G++
    target_compile_options(Skill_1 PRIVATE -Wall -Wextra)
elseif(${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
    # MSVC
    target_compile_options(Skill_1 PRIVATE /EHsc /MTd /W2 /c)
    # Set the DLLEXPORT variable to export symbols
    target_compile_definitions(Skill_1 PRIVATE WIN_EXPORT)
endif()
