#include <samycoreInterfaceGenerator.h>

namespace SAMY{

    SAMYCoreInterfaceGenerator::SAMYCoreInterfaceGenerator( std::shared_ptr<spdlog::logger> appLogger_ ):
        logger(appLogger_)
    {}

    std::vector<UA_NodeId> SAMYCoreInterfaceGenerator::getSystemStatusNodesIds(){ return systemStatusNodesIds; }

    void SAMYCoreInterfaceGenerator::logOfNodesAdditionToServer( const std::string& element, UA_StatusCode retVal ){
        std::string auxFail = "Could not add " + element + " to server.";
        std::string auxSuc = "Adding " +  element + " succeeded.";
        if( retVal != UA_STATUSCODE_GOOD ){
            logger->error( auxFail );
        }else{ logger->info( auxSuc ); }
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addFixedInformationModels( UA_Server* server, std::vector<SAMYRobot>* robots ){
        std::stringstream msg1;
        msg1 << "Adding fixed information models to the SAMYCore Server " << std::endl << std::endl;
        logger->info( msg1.str() );

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal |= namespace_crcl_generated( server );
        logOfNodesAdditionToServer( "CRCL Nodeset", retVal );

        retVal |= namespace_di_generated( server );
        logOfNodesAdditionToServer( "DI Nodeset", retVal );

        retVal |= namespace_robotics_generated( server );
        logOfNodesAdditionToServer( "Robotics Nodeset", retVal );

        retVal |= namespace_fortiss_di_generated( server );
        logOfNodesAdditionToServer( "Fortiss DI Nodeset", retVal );

        retVal |= namespace_fortiss_robotics_generated( server );
        logOfNodesAdditionToServer( "Fortiss Robotics Nodeset", retVal );

        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::addInformationSourcesToServer(
                                            UA_Server* server, std::vector<InformationSource>* infoSources ){
         UA_Int16 infoSourcesNS = UA_Server_addNamespace( server, "http://SAMY.org/InformationSources");
         UA_StatusCode retVal = UA_STATUSCODE_GOOD;

         UA_NodeId infoSourcesFolder = UA_NODEID_NULL;
         UA_ObjectAttributes attr = UA_ObjectAttributes_default;
         attr.displayName = UA_LOCALIZEDTEXT("", "InformationSources" );
         retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
         UA_NODEID_NUMERIC(infoSourcesNS, 0),
         UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
         UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
         UA_QUALIFIEDNAME(infoSourcesNS, "InformationSources"),
         UA_NODEID_NUMERIC( 0, UA_NS0ID_FOLDERTYPE),
         (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], NULL, &infoSourcesFolder);

         retVal |= UA_Server_addNode_finish( server, infoSourcesFolder );

         for( InformationSource& infoSource : *infoSources ){
             UA_NodeId infoSourceNodeId = UA_NODEID_NULL;
             UA_ObjectAttributes attr = UA_ObjectAttributes_default;
             attr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>(infoSource.getName().c_str()) );
             retVal |= UA_Server_addNode_begin( server, UA_NODECLASS_OBJECT,
             UA_NODEID_NUMERIC(infoSourcesNS, 0),
             infoSourcesFolder,
             UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
             UA_QUALIFIEDNAME(infoSourcesNS, const_cast<char*>(infoSource.getName().c_str()) ),
             UA_NODEID_NUMERIC(0, UA_NS0ID_BASEOBJECTTYPE),
             (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES], NULL, &infoSourceNodeId);

             retVal |= UA_Server_addNode_finish( server, infoSourceNodeId );

             if( retVal != UA_STATUSCODE_GOOD ) return retVal;

             infoSource.setObjectNodeId( infoSourceNodeId );
             auto dataTypes = infoSource.getDataTypesNodeIds();

             std::vector<UA_NodeId> variableNodes;
             for( UA_NodeId& dataTypeNodeId : dataTypes ){
                std::string auxName = infoSource.getName() + std::string{"_"} + std::to_string( variableNodes.size() );
                UA_NodeId tempNodeId = UA_NODEID_NULL;

                UA_VariableAttributes attr = UA_VariableAttributes_default;
                attr.minimumSamplingInterval = 0.000000;
                attr.userAccessLevel = 1;
                attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
                /*attr.accessLevel = UA_ACCESSLEVELMASK_READ;*/
                /* Value rank inherited */
                attr.valueRank = -1;
                attr.dataType = dataTypeNodeId;
                attr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>(auxName.c_str()));
                attr.displayName = UA_LOCALIZEDTEXT("", const_cast<char*>(auxName.c_str()));
                #ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
                attr.description = UA_LOCALIZEDTEXT("", "Variable node of a custom defined external information source");
                #endif

                 retVal |= UA_Server_addVariableNode( server,
                                                      UA_NODEID_NUMERIC( infoSourcesNS, 0),
                                                      infoSourceNodeId,
                                                      UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                                                      UA_QUALIFIEDNAME(infoSourcesNS, const_cast<char*>(auxName.c_str()) ),
                                                      UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE), attr, NULL, &tempNodeId
                                                      );

                if( retVal != UA_STATUSCODE_GOOD) return retVal;

                variableNodes.emplace_back( tempNodeId );
                systemStatusNodesIds.emplace_back( tempNodeId );
             }
         }
        return retVal;
    }

    UA_StatusCode SAMYCoreInterfaceGenerator::generateSAMYCoreInterface( UA_Server* server,
                                                               std::vector<SAMYRobot>* robots,
                                                               std::vector<SAMYSkill>* skills,
                                                               std::vector<InformationSource>* informationSources ){

        UA_StatusCode retVal = UA_STATUSCODE_GOOD;
        retVal |= addFixedInformationModels( server,     robots );
        if( retVal != UA_STATUSCODE_GOOD ){
            logger->error( "Could not add the fixed nodesets!" );
        }else{ logger->info("DI, Robotics, Fortiss DI, Fortiss Robotics, CRCL nodesets correctly added\n\n"); }

        retVal |= addSkillTypesToServer( server, skills );
        if( retVal != UA_STATUSCODE_GOOD ){
            logger->error( "Could not add all the skill types nodesets!" );
        }else{ logger->info("Skill types nodes correctly added\n\n"); }

        retVal |= addSAMYRobotsToServer( server, robots );
        if( retVal != UA_STATUSCODE_GOOD ){
            logger->error( "Could not add the Robots nodesets!" );
        }else{ logger->info("Robots nodes correctly added\n\n"); }

        retVal |= addInformationSourcesToServer( server, informationSources );
        if( retVal != UA_STATUSCODE_GOOD ){ logger->error( "Could not add the information sources nodes!" );
        }else{ logger->info("Information source nodes correctly added\n\n"); }

        return retVal;
    }
} /*SAMY*/
