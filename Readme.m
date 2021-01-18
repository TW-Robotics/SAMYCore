# SAMYCore
  This Repository contains all files to compile and run the SAMYCore.

## Build

To build just do from the folder where this file is:
mkdir build && cd build
cmake ..
make -j6 

# Dependencies

The SAMYCore requires:
- Open62541 v1.2 (at this moment not working yet due to a Bug in the Unions DataType). Further instructions about exact build requeriments will be included when everything is fixed.
- yaml-cpp (included in Third Parties). Nothing to do required

## Structure

- Common contains files which are common to SAMYCore and SAMYPlugIns. So far, this include the SAMYRobot struct, which is an extension of the SAMYRobotDataType modelled in OPC UA (the information modelled in OPCUA is the actual information shared between SAMYCore and SAMYPlugIns). Next to this, it also contains the SAMYRobot struc extending the modelled in OPC UA contains a Publisher and a Subscriber objects, which contain information about the PubSub. They PubSub configuration is more or less generated automatically based on the SAMYRobot struct information.

Between SAMYCore and SAMYPlugIns Subscribers and Publishers, the only difference is that when executing the function for configuring them based on the SAMYRobot information (functions configureSAMYRobotPublisher... and configureSAMYRobotSubscriber...), the PlugIn automatically subscribes to the ip given in the SAMYRobot as ipAddresses.ipAddress_Skill, and it pusblishes in the address ipAddresses.ipAddress_Status. The SAMYCore does the inverse, it publishes in the address ipAddresses.ipAddress_Skill and subscribes to ipAddresses.ipAddress_Status.



- OPCUA_CRCL contains files related to OPCUA CRCL, including the information modelling. To modify the information model, modify the file ./OPCUA_CRCL/OPCUAModel/CRCL_OPCUA.xml and once modified execute the shell script ./OPCUA_CRCL/OPCUAModel/CompileModel.sh (probbably administrator rights required). Once this is done, when we rebuild the project, it will contain the new information model.



- I include different main files I used for testing PubSub with different protocols. 

To do a small testing, you could compile the main_PublisherMQTT, execute and then in other terminal execute "mosquitto_sub -t FirstRobot" with the MQTT client mosquitto in order to see the published information.
