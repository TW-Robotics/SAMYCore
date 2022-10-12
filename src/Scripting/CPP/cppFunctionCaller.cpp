#include <skillCallable.h>
#include <Reflection.h>
#include <CastersRegistry.h>

//#include <ReflectedTypes.h>

namespace SAMY {
namespace Scripting {

    bool CppCaller::initialize()
    {

        // SKIP/MODIFY IF NUMBER OF PARAMETERS IS ZERO??????????????
        for( int i = 0; i < paramsDataTypesNames->size(); ++i ){ // FIX TO USE THE FFI_types reflection, so I can pass also by value!!!
            ffiArgs[i] = &ffi_type_pointer; // Currently everything passed by pointer due to the problem with unions. Extend for handling arrays!!!
        }

        ffi_status status = ffi_prep_cif( &callingInterface, FFI_DEFAULT_ABI, paramsDataTypesNames->size(), &ffi_type_void, ffiArgs.data() );
        if(  status == FFI_OK ){
            initialized = true;
            return true;
        }else{
            throw std::runtime_error( "CALLING INTERFACE COULD NOT BE INITIALIZED" );
            return false;
        }
    }

    void CppCaller::call(UA_Server * const server, const std::vector<UA_NodeId>& paramNodes){

        if(!initialized)
            initialize();

        if( paramNodes.size() != paramsDataTypesNames->size() )
            return;


        std::vector< void* > paramsValues( paramNodes.size(), nullptr  ); // IF WE ONLY USE POINTERS, THIS COULD BE args(  paramsDataTypesNames->size(), &ffi_type_pointer  );
        std::vector< UA_Variant > variants(paramNodes.size());

        // Reads the parameters of the skill
        for( int i = 0; i < paramNodes.size(); ++i ){
            UA_Variant_init( &(variants[i]) );
            UA_StatusCode retVal = UA_Server_readValue( server, paramNodes[i], &(variants[i]) );
            if( retVal != UA_STATUSCODE_GOOD )
                throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

            paramsValues[i] = &(variants[i].data);
        }

        // #define FFI_FN(f) ((void (*)(void))f)
        // dylib::native_symbol_type contains the platform independent function pointer. Test with windows! With Linux apparently works out of the box like this
        ffi_call(&callingInterface, FFI_FN( symbol ), NULL, paramsValues.data() ); // Calls the foreign function

    }

}
}
