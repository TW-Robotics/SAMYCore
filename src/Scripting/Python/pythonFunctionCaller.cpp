#pragma once

#include <pythonFunctionCaller.h>
#include <CastersRegistry.h>

namespace SAMY {
namespace Scripting {

     bool PythonCaller::initialize(){
         /*
         std::unique_ptr<ffi_type*[]> args(new ffi_type*[paramsDataTypesNames->size()]);

         for( int i = 0; i < paramsDataTypesNames->size(); i++ ){
             args.get()[i] = &ffi_type_pointer; // Currently everything passed by pointer due to the problem with unions. Extend for handling arrays!!!
         }

         ffi_status status = ffi_prep_cif( &callingInterface, FFI_DEFAULT_ABI, paramsDataTypesNames->size(), NULL, args.get() );
         if(  status == FFI_OK ){
             initialized = true;
             return true;
         }else{
             throw std::runtime_error( "CALLING INTERFACE COULD NOT BE INITIALIZED" );
             return false;
         } */

         // Create Tuple prototype or something alike with the correct types for calling using ffi ????
     }

     void PythonCaller::call( UA_Server * const server, const std::vector<UA_NodeId>& paramNodes ){

/*
 *         // the robot contains its thread?

        if(!initialized)
            initialize();

        std::unique_ptr<void*[]> paramsValues( new void*[paramNodes.size()] );

        std::vector< UA_Variant > variants(paramNodes.size());

        for( int i = 0; i < paramNodes.size(); ++i ){
            UA_Variant_init( &(variants[i]) );
            UA_StatusCode retVal = UA_Server_readValue( server, paramNodes[i], &(variants[i]) );
            if( retVal != UA_STATUSCODE_GOOD )
                throw std::runtime_error( "SKILL PARAMETER COULD NOT BE READ" );

            paramsValues.get()[i] = variants[i].data;
        }

        // #define FFI_FN(f) ((void (*)(void))f)
        // dylib::native_symbol_type contains the platform independent function pointer. Test with windows! With Linux apparently works out of the box like this
        ffi_call(&callingInterface, FFI_FN( symbolPtr ), NULL, paramsValues.get() );
*/

         // Create tuple object for calling after reading values
         // call: PyObject * Result = PyObject_CallObject(callable, NULL);

     }

}
}

