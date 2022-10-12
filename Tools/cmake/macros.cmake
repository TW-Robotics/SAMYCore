function(generate_opcua_based_reflection)
    set(options BUILTIN INTERNAL)
    set(oneValueArgs NAME TARGET_SUFFIX TARGET_PREFIX OUTPUT_DIR FILE_CSV)
    set(multiValueArgs FILES_BSD IMPORT_BSD FILES_SELECTED NAMESPACE_MAP)
    cmake_parse_arguments(UA_GEN_DT "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    if(NOT DEFINED open62541_TOOLS_DIR)
        message(FATAL_ERROR "open62541_TOOLS_DIR must point to the open62541 tools directory")
    endif()

    # ------ Argument checking -----
    if(NOT DEFINED UA_GEN_DT_NAMESPACE_MAP AND NOT "${UA_GEN_DT_NAMESPACE_MAP}" STREQUAL "")
        message(FATAL_ERROR "generate_opcua_based_reflection function requires a value for the NAMESPACE_MAP argument")
    endif()
    if(NOT UA_GEN_DT_NAME OR "${UA_GEN_DT_NAME}" STREQUAL "")
        message(FATAL_ERROR "generate_opcua_based_reflection function requires a value for the NAME argument")
    endif()
    if(NOT UA_GEN_DT_TARGET_SUFFIX OR "${UA_GEN_DT_TARGET_SUFFIX}" STREQUAL "")
        message(FATAL_ERROR "generate_opcua_based_reflection function requires a value for the TARGET_SUFFIX argument")
    endif()
    if(NOT UA_GEN_DT_FILE_CSV OR "${UA_GEN_DT_FILE_CSV}" STREQUAL "")
        message(FATAL_ERROR "generate_opcua_based_reflection function requires a value for the FILE_CSV argument")
    endif()
    if(NOT UA_GEN_DT_FILES_BSD OR "${UA_GEN_DT_FILES_BSD}" STREQUAL "")
        message(FATAL_ERROR "generate_opcua_based_reflection function requires a value for the FILES_BSD argument")
    endif()

    if(NOT UA_GEN_DT_OUTPUT_DIR OR "${UA_GEN_DT_OUTPUT_DIR}" STREQUAL "")
        message(FATAL_ERROR "generate_opcua_based_reflection function requires a value for the OUTPUT_DIR argument")
    endif()

    # ------ Add custom command and target -----

    set(NAMESPACE_MAP_TMP "")
    foreach(f ${UA_GEN_DT_NAMESPACE_MAP})
        set(NAMESPACE_MAP_TMP ${NAMESPACE_MAP_TMP} "--namespaceMap=${f}")
    endforeach()

    set(UA_GEN_DT_NO_BUILTIN "--no-builtin")
    if (UA_GEN_DT_BUILTIN)
        set(UA_GEN_DT_NO_BUILTIN "")
    endif()

    set(UA_GEN_DT_INTERNAL_ARG "")
    if (UA_GEN_DT_INTERNAL)
        set(UA_GEN_DT_INTERNAL_ARG "--internal")
    endif()

    set(SELECTED_TYPES_TMP "")
    foreach(f ${UA_GEN_DT_FILES_SELECTED})
        set(SELECTED_TYPES_TMP ${SELECTED_TYPES_TMP} "--selected-types=${f}")
    endforeach()

    set(BSD_FILES_TMP "")
    foreach(f ${UA_GEN_DT_FILES_BSD})
        set(BSD_FILES_TMP ${BSD_FILES_TMP} "--type-bsd=${f}")
    endforeach()

    set(IMPORT_BSD_TMP "")
    foreach(f ${UA_GEN_DT_IMPORT_BSD})
        set(IMPORT_BSD_TMP ${IMPORT_BSD_TMP} "--import=${f}")
    endforeach()

    # Make sure that the output directory exists
    if(NOT EXISTS ${UA_GEN_DT_OUTPUT_DIR})
        file(MAKE_DIRECTORY ${UA_GEN_DT_OUTPUT_DIR})
    endif()

    # Replace dash with underscore to make valid c literal
    string(REPLACE "-" "_" UA_GEN_DT_NAME ${UA_GEN_DT_NAME})

    if((MINGW) AND (DEFINED ENV{SHELL}))
        # fix issue 4156 that MINGW will do automatic Windows Path Conversion
        # powershell handles Windows Path correctly
        # MINGW SHELL only accept environment variable with "env"
        set(ARG_CONV_EXCL_ENV env MSYS2_ARG_CONV_EXCL=--import)
    endif()

    add_custom_command(OUTPUT "${UA_GEN_DT_OUTPUT_DIR}${UA_GEN_DT_NAME}_Reflection.h"
        PRE_BUILD
        COMMAND ${PYTHON_EXECUTABLE} ${SAMY_TOOLS_DIR}reflection_generator/Reflections_OPCUA_generator.py
        ${NAMESPACE_MAP_TMP}
        ${SELECTED_TYPES_TMP}
        ${BSD_FILES_TMP}
        ${IMPORT_BSD_TMP}
        --type-csv=${UA_GEN_DT_FILE_CSV}
        ${UA_GEN_DT_NO_BUILTIN}
        ${UA_GEN_DT_INTERNAL_ARG}
        ${UA_GEN_DT_OUTPUT_DIR}/${UA_GEN_DT_NAME}
        --open62541_tools_path=${open62541_TOOLS_DIR} # Used to pass to the python script the path of the open62541 tools (python OPCUA bsd parser) so it can use them in the script
        DEPENDS 
        ${SAMY_TOOLS_DIR}reflection_generator/Reflections_OPCUA_generator.py
        ${open62541_TOOLS_DIR}/generate_datatypes.py
        ${UA_GEN_DT_FILES_BSD}
        ${UA_GEN_DT_FILE_CSV}
        ${UA_GEN_DT_FILES_SELECTED})

    add_custom_target("${UA_GEN_DT_TARGET_SUFFIX}-Reflection" DEPENDS
        "${UA_GEN_DT_OUTPUT_DIR}/${UA_GEN_DT_NAME}_Reflection.h"
        )

endfunction()


macro(print_all_variables)
    message(STATUS "print_all_variables------------------------------------------{")
    get_cmake_property(_variableNames VARIABLES)
    foreach (_variableName ${_variableNames})
        message(STATUS "${_variableName}=${${_variableName}}")
    endforeach()
    message(STATUS "print_all_variables------------------------------------------}")
endmacro()










