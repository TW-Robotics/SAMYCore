# SAMYCore

Content:
 - Fortiss_reusable: Some code files from Fortiss projects (OPC UA servers, etc.) that have been/could be adapted used for the SAMYCore
 - OPC_UA Models: The OPC_UA models used in the SAMYCore (CRCL, DI, Robotics, fortiss_di, fortiss_robotics)
 - OPCUA Python: An improved version of FreeOPCUA Python stack with added support for unions
 - SAMYControl: Software components for controlling a system through the SAMYCore. It includes the SAMYControlInterface and the SAMYControllerBase, the former 
   a simple control interface for easing the implementation of controllers for the SAMYCore, the later an abstract class that can be used as based for 
   implementing controllers. DTbasedController is a controller that makes use of the previous blocks to implement a controller based on DTControl.
   It allows creating controllers by means of decision trees described as .dot files that can be created manually or by DTControl.
 - Tests: testing block for the CRCL information model.
 - ThirdParties: external packages used by the SAMYCore
 - UseCases: different use cases
 - build: contains some (correctly) autogenerated files that can be used as reference
 - configFiles: examples of configuration files than are require by the SAMYCore
 - open62541_v1.2_unions_fixed: a corrected version of the open62541 v1.2 that supports unions.
   In particular, there nodeset compiler requires a minor change in one line to generate correct code.
 - src: Source code of the SAMYCore
 - Fixing_Unions.txt: a description of the required steps for allowing the use of unions in Open62541/OPCUA,
   since its support is limited.
