cmake_minimum_required(VERSION 3.0...3.12)
if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_definitions(-w)# DELETE!!!

project(SAMYCore VERSION 2.0 LANGUAGES C CXX)

add_library(${PROJECT_NAME}_Library SHARED)

set_target_properties(${PROJECT_NAME}_Library
    PROPERTIES
    PREFIX "" # So the generated library does not have prefix "lib"
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION}
)

add_executable(${PROJECT_NAME}) # entry executable

# open62541 v1.2 must be installed!
# If in custom path, then use -DCMAKE_PREFIX_PATH=/home/user/installcmake_minimum_required(VERSION 3.2)
find_package(open62541 1.2 REQUIRED COMPONENTS FullNamespace)
find_package( yaml-cpp REQUIRED )
find_package(Catch2 REQUIRED)
find_package (Python COMPONENTS Interpreter Development REQUIRED) #Python 3.8

set(CMAKE_C_COMPILER "g++-9") # Use the compiler without specific version. I am using it so because I have several versions of g++/clang/etc.
set(CMAKE_CXX_COMPILER "g++-9") # Use the compiler without specific version. I am using it so because I have several versions of g++/clang/etc.


# Setting up some things for the code generation
include(Tools/cmake/generate_code.cmake)

set(GENERATE_OUTPUT_DIR "${CMAKE_BINARY_DIR}/src_generated/")
include_directories("${GENERATE_OUTPUT_DIR}")
file(MAKE_DIRECTORY "${GENERATE_OUTPUT_DIR}")

include_directories(${Python_INCLUDE_DIRS})
include_directories("${PROJECT_SOURCE_DIR}/OPCUA_Models")


# The generated files are: "namespace_${NAMESPACE_NAME}_... .c/.h"
set(NAMESPACE_NAME_CRCL "crcl")
set(NAMESPACE_NAME_DI "di")
set(NAMESPACE_NAME_ROBOTICS "robotics")
set(NAMESPACE_NAME_FORTISS_DI "fortiss_di")
set(NAMESPACE_NAME_FORTISS_ROBOTICS "fortiss_robotics")

# The compiled namespace is: "${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME}"
set(NAMESPACE_PREFIX "pref")

set(REFLECTION_OUTPUT_DIR ${PROJECT_BINARY_DIR}/src_generated/)
set(SAMY_TOOLS_DIR ${PROJECT_SOURCE_DIR}/Tools/)

generate_code() # Macro that contains the calls for generating the reflection and the Open62541 code
# end of the code generation

target_sources( ${PROJECT_NAME}_Library
                PUBLIC
                ${UA_NODESET_DI_SOURCES}
                ${UA_TYPES_DI_SOURCES}
                ${UA_NODESET_ROBOTICS_SOURCES}
                ${UA_TYPES_ROBOTICS_SOURCES}
                ${UA_NODESET_FORTISS_DI_SOURCES}
                ${UA_TYPES_FORTISS_DI_SOURCES}
                ${UA_NODESET_FORTISS_ROBOTICS_SOURCES}
                ${UA_TYPES_FORTISS_ROBOTICS_SOURCES}
                ${UA_NODESET_CRCL_SOURCES}
                ${UA_TYPES_CRCL_SOURCES}
		)


#add_executable(testsClient
#               "./Tests/CRCLnamespace_tests/testsClient.cpp"
#               )

#add_executable(testsServer
#               "./Tests/CRCLnamespace_tests/testsServer.cpp"
#               )


# Make sure the nodeset compiler is executed before compiling the SAMYCore_Library
add_dependencies(${PROJECT_NAME}_Library
                 ${NAMESPACE_NAME_CRCL}-Reflection
                 ${NAMESPACE_NAME_DI}-Reflection
                 ${NAMESPACE_NAME_ROBOTICS}-Reflection
                 ${NAMESPACE_NAME_FORTISS_DI}-Reflection
                 ${NAMESPACE_NAME_FORTISS_ROBOTICS}-Reflection
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_DI}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_ROBOTICS}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_DI}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_ROBOTICS}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_CRCL}
                 )

# Make sure the nodeset compiler is executed before compiling the main file
add_dependencies(${PROJECT_NAME}
                 ${NAMESPACE_NAME_CRCL}-Reflection
                 ${NAMESPACE_NAME_DI}-Reflection
                 ${NAMESPACE_NAME_ROBOTICS}-Reflection
                 ${NAMESPACE_NAME_FORTISS_DI}-Reflection
                 ${NAMESPACE_NAME_FORTISS_ROBOTICS}-Reflection
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_DI}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_ROBOTICS}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_DI}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_ROBOTICS}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_CRCL}
                 )

# Make sure the nodeset compiler is executed before compiling the testsClient
#add_dependencies(testsClient
#                 ${NAMESPACE_NAME_CRCL}-Reflection
#                 ${NAMESPACE_NAME_DI}-Reflection
#                 ${NAMESPACE_NAME_ROBOTICS}-Reflection
#                 ${NAMESPACE_NAME_FORTISS_DI}-Reflection
#                 ${NAMESPACE_NAME_FORTISS_ROBOTICS}-Reflection
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_DI}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_ROBOTICS}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_DI}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_ROBOTICS}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_CRCL}
#                 )

# Make sure the nodeset compiler is executed before compiling the testsServer
#add_dependencies(testsServer
#                 ${NAMESPACE_NAME_CRCL}-Reflection
#                 ${NAMESPACE_NAME_DI}-Reflection
#                 ${NAMESPACE_NAME_ROBOTICS}-Reflection
 #                ${NAMESPACE_NAME_FORTISS_DI}-Reflection
#                 ${NAMESPACE_NAME_FORTISS_ROBOTICS}-Reflection
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_DI}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_ROBOTICS}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_DI}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_FORTISS_ROBOTICS}
#                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_CRCL}
#                 )


add_subdirectory(ThirdParty)
add_subdirectory(src)


target_link_libraries(${PROJECT_NAME}_Library PRIVATE open62541::open62541 yaml-cpp python3.8 -ldl ffi)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_Library python3.8 yaml-cpp -ldl ffi -pthread )


get_target_property( dirs ${PROJECT_NAME}_Library INCLUDE_DIRECTORIES)
FILE(WRITE "${CMAKE_CURRENT_SOURCE_DIR}/SAMYCore_Library_includes.cmake" "") # Empty file
FILE(APPEND "${CMAKE_CURRENT_SOURCE_DIR}/SAMYCore_Library_includes.cmake" "function(include_SAMYCore_Library_headers)\n" )
foreach(var ${dirs})
  FILE(APPEND "${CMAKE_CURRENT_SOURCE_DIR}/SAMYCore_Library_includes.cmake" "\ttarget_include_directories( \${LIBRARY_NAME} PUBLIC \"${var}\" )\n")
endforeach()
FILE(APPEND "${CMAKE_CURRENT_SOURCE_DIR}/SAMYCore_Library_includes.cmake" "endfunction()" )




