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
		"${CMAKE_CURRENT_SOURCE_DIR}/robotsParser.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/informationSourcesParser.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/skillsParser.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/dataBaseParser.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/samycoreConfigParser.cpp"
		)
