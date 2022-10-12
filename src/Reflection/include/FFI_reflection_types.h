/* Terse sized type definitions copied from libffi types.c  */
#if defined(_MSC_VER) || defined(__sgi) || defined(__SUNPRO_C)
typedef unsigned char UINT8;
typedef signed char   SINT8;
typedef unsigned short UINT16;
typedef signed short   SINT16;
typedef unsigned int UINT32;
typedef signed int   SINT32;
# ifdef _MSC_VER
typedef unsigned __int64 UINT64;
typedef signed __int64   SINT64;
# else
# include <inttypes.h>
typedef uint64_t UINT64;
typedef int64_t  SINT64;
# endif
#else
typedef unsigned int UINT8  __attribute__((__mode__(__QI__)));
typedef signed int   SINT8  __attribute__((__mode__(__QI__)));
typedef unsigned int UINT16 __attribute__((__mode__(__HI__)));
typedef signed int   SINT16 __attribute__((__mode__(__HI__)));
typedef unsigned int UINT32 __attribute__((__mode__(__SI__)));
typedef signed int   SINT32 __attribute__((__mode__(__SI__)));
typedef unsigned int UINT64 __attribute__((__mode__(__DI__)));
typedef signed int   SINT64 __attribute__((__mode__(__DI__)));
#endif

typedef float FLOAT32;


/* Modified versionfs from definitions in libffi types.c + generate_FFI_types definitions for the reflection system */

#define FFI_TYPEDEF_MOD(name, type, id)\
struct aux_struct_align_##name {			\
  char c;					\
  type x;					\
};						\
template<>						\
struct FFI_Type_Wrapper<type>{						\
    constexpr static std::size_t number_elements = 1;				\
    inline static ffi_type ffiType = {	\
					  sizeof(type),					\
					  offsetof(struct aux_struct_align_##name, x),	\
					  id, NULL					\
					};\
};\
inline auto generate_FFI_types( type ){\
  const std::string tName{ #name };\
  if( typeName_ffiType_map.find( tName ) != typeName_ffiType_map.end() )\
     return ;\
  typeName_ffiType_map.insert ( std::pair< std::string, ffi_type* >( tName, &FFI_Type_Wrapper< type >::ffiType ) );\
}
