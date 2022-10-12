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
		"${CMAKE_CURRENT_SOURCE_DIR}/cppFunctionPreprocessing.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/cppFunctionCompiler.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/cppFunctionLoader.cpp"
		"${CMAKE_CURRENT_SOURCE_DIR}/cppFunctionCaller.cpp"
		)
