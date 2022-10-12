target_include_directories( ${PROJECT_NAME}_Library
                            PUBLIC
                            "${CMAKE_CURRENT_SOURCE_DIR}/include"
                            )

target_include_directories( ${PROJECT_NAME}
                            PUBLIC
                            "${CMAKE_CURRENT_SOURCE_DIR}/include"
                            )

target_sources( ${PROJECT_NAME}_Library
                PUBLIC
		"${CMAKE_CURRENT_SOURCE_DIR}/robotsNodesAddition.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/samycoreInterfaceGenerator.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/skillsMethodsCallbacks.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/skillsNodesAddition.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/systemStatusNodes.cpp"
		)
