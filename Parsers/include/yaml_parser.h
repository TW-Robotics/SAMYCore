#ifndef YAML_PARSER_H
#define YAML_PARSER_H

#include "string.h"
#include "crcl_opcua_nodeids.h"
#include "namespace_crcl_opcua_generated.h"
#include <yaml-cpp/yaml.h>

#include <vector>

namespace SAMYCore{
namespace Parsers
{

	class MoveToCommand_Parser{
	public:
        MoveToCommand_Parser( const UA_MoveToDataType& moveToCommand);       
        bool parse_moveToCommandParameters( const std::string& filepath );

	private:
        UA_MoveToDataType command;
    };

    class SetEndeffectorParametersCommand_Parser{
    public:
        SetEndeffectorParametersCommand_Parser( const UA_SetEndEffectorParametersDataType& setEndEffectorParametersCommand);
        bool parse_setEndeffectorParametersCommand( const std::string& filepath );

    private:
        UA_SetEndEffectorParametersDataType command;
    };

    class SetEndeffectorCommand_Parser{
    public:
        SetEndeffectorCommand_Parser( const UA_SetEndEffectorDataType& setEndeffectorCommand);
        bool parse_SetEndeffectorCommand( const std::string& filepath );

    private:
        UA_SetEndEffectorDataType command;
    };



    //Provisional for the 3DPrintingUseCase
    typedef struct {
        UA_UInt32 cooling;
        UA_Double extrusionTime;
        UA_String name;
        UA_Double speed;
        UA_Double temperature;
    }ExtruderParams;

    typedef struct {
        UA_MoveToDataType moveTo;
        UA_Double transSpeed;
    }ExtendedMoveTo;

/*    typedef struct {
        UA_MoveToDataType moveTo;
        ExtruderParams extrudeParams;
        UA_Double transSpeed;
    }PrintingParameters;*/

    class PrintingParameters_Parser{
    public:
        PrintingParameters_Parser(const std::vector<ExtendedMoveTo>& moveParameters_,
                                            const std::vector<ExtruderParams>& printingParameters_);
        bool parse_printingParameters( const std::string& filepath );

    private:
        std::vector<ExtendedMoveTo> moveParams;
        std::vector<ExtruderParams> extrudeParams;
    };

}
}



#endif /*YAML_PARSER_H*/
