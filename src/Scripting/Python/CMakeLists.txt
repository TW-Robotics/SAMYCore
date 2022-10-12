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
		"${CMAKE_CURRENT_SOURCE_DIR}/pythonFunctionPreprocessing.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/pythonFunctionLoader.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/pythonFunctionCaller.cpp"
		)
