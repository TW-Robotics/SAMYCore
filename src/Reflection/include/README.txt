My initial idea was using a reflection mechanism so I created the ffitypes and stored them in a map at launchtime.
This way, given the name of a type, I could retrieve the ffitype and use it for calling C++ and Python functions without knowing the signature in advance by means of libffi. 
Nevertheless libffi seems to not handle correctly unions (despite what is said in documentation), and this is problematic because I do use unions in my modelling of CRCL in OPC UA. 
Anyways, the reflection mechanism and the FFI_Reflection seems to work well so far for elements not containing unions and it should work if all the interfaces are pointers. 
In order to overcome this problem with the unions, for the moment I will enforce passing everything by pointer. Nevertheless, I still need to use reflection and a registry, so I can cast a void* pointer to a certain type given the type name I want. This is required if using libffi and passing pointers around.
Also I implemented a mechanism for "dynamic casting" given a typename. This would allow me to enforce certain behaviours depending on the typename of unknown vars read in the server.

