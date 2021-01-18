#include <yaml_parser.h>
#include <iostream>
#include <fstream>

namespace SAMYCore {
namespace Parsers {

    MoveToCommand_Parser::MoveToCommand_Parser( const UA_MoveToDataType& moveToCommand ):
        command( moveToCommand )
        {}

    bool MoveToCommand_Parser::parse_moveToCommandParameters( const std::string& filepath )
    {
        std::ifstream stream(filepath);
        std::stringstream strStream;
        strStream << stream.rdbuf();

        YAML::Node data = YAML::Load(strStream.str());
        if(!data["Skills_Parameters"])
            return false;

        auto skillParams = data["Skills_Parameters"];

        auto fundamentalSkillsParams = skillParams["FundamentalSkills_Parameters"];

        if( fundamentalSkillsParams )
        {
            for(auto fundamentalSkillParam : fundamentalSkillsParams )
            {
                auto moveParam = fundamentalSkillParam["Move_Parameter"];

                if(moveParam)
                {
                    command.endPosition.xAxis.i = moveParam["FinalPoseAngXX"].as<UA_Double>();
                    command.endPosition.xAxis.j = moveParam["FinalPoseAngXY"].as<UA_Double>();
                    command.endPosition.xAxis.k = moveParam["FinalPoseAngXZ"].as<UA_Double>();
                    command.endPosition.zAxis.i = moveParam["FinalPoseAngZX"].as<UA_Double>();
                    command.endPosition.zAxis.j = moveParam["FinalPoseAngZY"].as<UA_Double>();
                    command.endPosition.zAxis.k = moveParam["FinalPoseAngZZ"].as<UA_Double>();
                    command.endPosition.point.x = moveParam["FinalPosePosX"].as<UA_Double>();
                    command.endPosition.point.y = moveParam["FinalPosePosY"].as<UA_Double>();
                    command.endPosition.point.z = moveParam["FinalPosePosZ"].as<UA_Double>();
                    command.moveStraight = moveParam["MoveStraight"].as<UA_Boolean>();
                    std::string str = moveParam["Name"].as<std::string>();
                    command.name = UA_STRING(const_cast<char*>(str.c_str()));

                    printf("%f \n", command.endPosition.xAxis.i);
                    printf("%f \n", command.endPosition.zAxis.i);
                    printf("%f \n", command.endPosition.point.x);
                    printf("%f \n", command.endPosition.xAxis.k);
                    printf("%f \n", command.endPosition.zAxis.k);
                    printf("%s \n\n\n", (char*)command.name.data);
                }
            }
        }
    }

    SetEndeffectorParametersCommand_Parser::SetEndeffectorParametersCommand_Parser(
                                                        const UA_SetEndEffectorParametersDataType& setEndeffectorParametersCommand ):
        command( setEndeffectorParametersCommand )
        {}
    bool SetEndeffectorParametersCommand_Parser::parse_setEndeffectorParametersCommand( const std::string& filepath ){

     }


    SetEndeffectorCommand_Parser::SetEndeffectorCommand_Parser( const UA_SetEndEffectorDataType& setEndEffectorCommand ):
        command( setEndEffectorCommand )
        {}
    bool SetEndeffectorCommand_Parser::parse_SetEndeffectorCommand( const std::string& filepath ){

    }


    //Provisional for the 3DPrintingUseCase
    PrintingParameters_Parser::PrintingParameters_Parser(const std::vector<ExtendedMoveTo> &moveParameters_,
                                                                const std::vector<ExtruderParams> &extrudeParameters_)
    {

    }

    bool PrintingParameters_Parser::parse_printingParameters( const std::string& filepath ){
        std::ifstream stream(filepath);
        std::stringstream strStream;
        strStream << stream.rdbuf();

        YAML::Node data = YAML::Load(strStream.str());
        if(!data["Skills_Parameters"])
            return false;

        auto skillParams = data["Skills_Parameters"];

        auto fundamentalSkillsParams = skillParams["FundamentalSkills_Parameters"];

        if( fundamentalSkillsParams )
        {
            for(auto fundamentalSkillParam : fundamentalSkillsParams )
            {
                if(fundamentalSkillParam["Move_Parameter"])
                {
                    auto moveParam = fundamentalSkillParam["Move_Parameter"];
                    ExtendedMoveTo parameters;
                    parameters.moveTo.endPosition.xAxis.i = moveParam["FinalPoseAngXX"].as<UA_Double>();
                    parameters.moveTo.endPosition.xAxis.j = moveParam["FinalPoseAngXY"].as<UA_Double>();
                    parameters.moveTo.endPosition.xAxis.k = moveParam["FinalPoseAngXZ"].as<UA_Double>();
                    parameters.moveTo.endPosition.zAxis.i = moveParam["FinalPoseAngZX"].as<UA_Double>();
                    parameters.moveTo.endPosition.zAxis.j = moveParam["FinalPoseAngZY"].as<UA_Double>();
                    parameters.moveTo.endPosition.zAxis.k = moveParam["FinalPoseAngZZ"].as<UA_Double>();
                    parameters.moveTo.endPosition.point.x = moveParam["FinalPosePosX"].as<UA_Double>();
                    parameters.moveTo.endPosition.point.y = moveParam["FinalPosePosY"].as<UA_Double>();
                    parameters.moveTo.endPosition.point.z = moveParam["FinalPosePosZ"].as<UA_Double>();
                    parameters.moveTo.moveStraight = moveParam["MoveStraight"].as<UA_Boolean>();
                    std::string str = moveParam["Name"].as<std::string>();
                    parameters.moveTo.name = UA_STRING(const_cast<char*>(str.c_str()));

                    parameters.transSpeed = moveParam["TransSpeed"].as<UA_Double>();

                    moveParams.emplace_back(parameters);

                    printf("FinalPoseAngXX   :   %f \n", moveParams.back().moveTo.endPosition.xAxis.i);
                    printf("FinalPoseAngXY   :   %f \n", moveParams.back().moveTo.endPosition.xAxis.j);
                    printf("FinalPoseAngXZ   :   %f \n", moveParams.back().moveTo.endPosition.xAxis.k);
                    printf("FinalPoseAngZX   :   %f \n", moveParams.back().moveTo.endPosition.zAxis.i);
                    printf("FinalPoseAngZY   :   %f \n", moveParams.back().moveTo.endPosition.zAxis.j);
                    printf("FinalPoseAngZZ   :   %f \n", moveParams.back().moveTo.endPosition.zAxis.k);
                    printf("FinalPosePosX   :   %f \n", moveParams.back().moveTo.endPosition.point.x);
                    printf("FinalPosePosY   :   %f \n", moveParams.back().moveTo.endPosition.point.y);
                    printf("FinalPosePosZ   :   %f \n", moveParams.back().moveTo.endPosition.point.z);
                   // printf("MoveStraight   :   %b \n", moveParams.back().moveTo.moveStraight);
                    printf("Name   :   %s \n\n", (char*)moveParams.back().moveTo.name.data);

                    printf("TransSpeed   :   %f \n\n\n", moveParams.back().transSpeed);

                }
                else if (fundamentalSkillParam["Extrude_Parameter"])
                {
                    auto extrudeParam = fundamentalSkillParam["Extrude_Parameter"];
                    ExtruderParams paramsExt;
                    paramsExt.cooling = extrudeParam["Cooling"].as<UA_Double>();
                    paramsExt.extrusionTime = extrudeParam["Extrusion_Time"].as<UA_Double>();
                    std::string str = extrudeParam["Name"].as<std::string>();
                    paramsExt.name = UA_STRING(const_cast<char*>(str.c_str()));
                    paramsExt.speed = extrudeParam["Speed"].as<UA_Double>();
                    paramsExt.temperature = extrudeParam["Temperature"].as<UA_Double>();

                    extrudeParams.emplace_back(paramsExt);

                    printf("Cooling   :   %f \n", extrudeParams.back().cooling);
                    printf("Extrusion_Time   :   %f \n", extrudeParams.back().extrusionTime);
                    printf("Name   :   %s \n", (char*)extrudeParams.back().name.data);
                    printf("Speed   :   %f \n", extrudeParams.back().speed);
                    printf("Temperature   :   %f \n\n\n", extrudeParams.back().temperature);
                }
                else
                {
                    printf("Wrong parameter!!!!!!");
                }
            }
        }
    }
}
}
