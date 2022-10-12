add_subdirectory( Core )
add_subdirectory( Helpers )
add_subdirectory( InformationSource )
add_subdirectory( Logging )
add_subdirectory( OPCUA_Server )
add_subdirectory( Parsers )
add_subdirectory( Reflection )
add_subdirectory( SAMYCoreConfig )
add_subdirectory( SAMYCoreInterfaceGenerator )
add_subdirectory( SAMYRobot )
add_subdirectory( SAMYSkill )
add_subdirectory( Scripting )

target_sources( ${PROJECT_NAME}
                PUBLIC
		"${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
		)
