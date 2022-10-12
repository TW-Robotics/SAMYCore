find_package(open62541 1.2 REQUIRED COMPONENTS FullNamespace)
include(Tools/cmake/macros.cmake)

function(generate_code)

	# This macros generate each a target with the name TARGET_SUFFIX-Reflection
	generate_opcua_based_reflection(
		INTERNAL
		NAME "${NAMESPACE_NAME_CRCL}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/CRCL/CRCL.NodeSet2.xml"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/CRCL/CRCL.csv"
		FILES_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/CRCL/CRCL.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
		TARGET_SUFFIX "${NAMESPACE_NAME_CRCL}"
		OUTPUT_DIR "${REFLECTION_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 2:https://crcl.org
	)

	generate_opcua_based_reflection(
		INTERNAL
		NAME "${NAMESPACE_NAME_DI}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/DI/Opc.Ua.Di.NodeSet2.xml"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/DI/OpcUaDiModel.csv"
		FILES_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/DI/Opc.Ua.Di.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
		TARGET_SUFFIX "${NAMESPACE_NAME_DI}"
		OUTPUT_DIR "${REFLECTION_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 3:http://opcfoundation.org/UA/DI/
	)

	generate_opcua_based_reflection(
		INTERNAL
		NAME "${NAMESPACE_NAME_ROBOTICS}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/Robotics/Opc.Ua.Robotics.NodeSet2.xml"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/Robotics/OpcUaRoboticsModel.csv"
		FILES_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/Robotics/Opc.Ua.Robotics.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
		TARGET_SUFFIX "${NAMESPACE_NAME_ROBOTICS}"
		OUTPUT_DIR "${REFLECTION_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 4:http://opcfoundation.org/UA/Robotics/
	#        DEPENDS "${NAMESPACE_NAME_DI}"
	)

	generate_opcua_based_reflection(
		INTERNAL
		NAME "${NAMESPACE_NAME_FORTISS_DI}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_di/fortiss.Di.NodeSet2.xml"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_di/fortissDiModel.csv"
		FILES_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_di/fortiss.Di.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
		TARGET_SUFFIX "${NAMESPACE_NAME_FORTISS_DI}"
		OUTPUT_DIR "${REFLECTION_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 5:https://fortiss.org/UA/DI/
	#        DEPENDS "${NAMESPACE_NAME_ROBOTICS}"
	)

	generate_opcua_based_reflection(
		INTERNAL
		NAME "${NAMESPACE_NAME_FORTISS_ROBOTICS}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_robotics/fortiss.Robotics.NodeSet2.xml"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_robotics/fortissRoboticsModel.csv"
		FILES_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_robotics/fortiss.Robotics.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
		TARGET_SUFFIX "${NAMESPACE_NAME_FORTISS_ROBOTICS}"
		OUTPUT_DIR "${REFLECTION_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 6:https://fortiss.org/UA/Robotics/
	#        DEPENDS "${NAMESPACE_NAME_FORTISS_DI}"
	)





	ua_generate_nodeset_and_datatypes(
		INTERNAL
		NAME "${NAMESPACE_NAME_CRCL}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/CRCL/CRCL.NodeSet2.xml"
		TARGET_PREFIX "${NAMESPACE_PREFIX}"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/CRCL/CRCL.csv"
		FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/CRCL/CRCL.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 2:https://crcl.org
	)

	ua_generate_nodeset_and_datatypes(
		INTERNAL
		NAME "${NAMESPACE_NAME_DI}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/DI/Opc.Ua.Di.NodeSet2.xml"
		TARGET_PREFIX "${NAMESPACE_PREFIX}"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/DI/OpcUaDiModel.csv"
		FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/DI/Opc.Ua.Di.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 3:http://opcfoundation.org/UA/DI/
	)

	ua_generate_nodeset_and_datatypes(
		INTERNAL
		NAME "${NAMESPACE_NAME_ROBOTICS}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/Robotics/Opc.Ua.Robotics.NodeSet2.xml"
		TARGET_PREFIX "${NAMESPACE_PREFIX}"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/Robotics/OpcUaRoboticsModel.csv"
		FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/Robotics/Opc.Ua.Robotics.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 4:http://opcfoundation.org/UA/Robotics/
		DEPENDS "${NAMESPACE_NAME_DI}"
	)

	ua_generate_nodeset_and_datatypes(
		INTERNAL
		NAME "${NAMESPACE_NAME_FORTISS_DI}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_di/fortiss.Di.NodeSet2.xml"
		TARGET_PREFIX "${NAMESPACE_PREFIX}"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_di/fortissDiModel.csv"
		FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_di/fortiss.Di.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 5:https://fortiss.org/UA/DI/
		DEPENDS "${NAMESPACE_NAME_ROBOTICS}"
	)

	ua_generate_nodeset_and_datatypes(
		INTERNAL
		NAME "${NAMESPACE_NAME_FORTISS_ROBOTICS}"
		FILE_NS "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_robotics/fortiss.Robotics.NodeSet2.xml"
		TARGET_PREFIX "${NAMESPACE_PREFIX}"
		FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_robotics/fortissRoboticsModel.csv"
		FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/OPCUA_Models/all_models/Published/fortiss_robotics/fortiss.Robotics.Types.bsd"
		OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
	    # This namespace index must match the order in which you are adding the nodeset in the source code
		NAMESPACE_MAP 6:https://fortiss.org/UA/Robotics/
		DEPENDS "${NAMESPACE_NAME_FORTISS_DI}"
	)
endfunction()
