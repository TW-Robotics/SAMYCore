#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <string>
#include <tuple>
#include <iomanip>
#include <map>
#include <vector>
#include <array>
#include <type_traits>
#include <functional>
#include <string_view>
#include <algorithm>
#include <Python.h>

#include <Reflection.h>

#include <types.h>


namespace SAMY{
namespace Reflection {
namespace PythonBinding {


template< typename T >
inline void set_PyObj_field_array( PyObject* pyObject, const std::string_view& attrName, T* arr, size_t N );

/* implementations for different "basic" types */
inline void set_PyObj_field( PyObject* pyObject, const std::string_view& attrName, const std::string& value) {
        int res = PyObject_SetAttrString( pyObject, std::string(attrName).c_str() , PyLong_FromLong(value) );
}

inline void set_PyObj_field( PyObject* pyObject, const std::string_view& attrName, const char *s, size_t size) {
        res = PyObject_SetAttrString( pyObject, std::string(attrName).c_str(), PyUnicode_FromString(s) );
}

inline void set_PyObj_field( PyObject* pyObject, const std::string_view& attrName, std::nullptr_t) {

}

inline void set_PyObj_field( PyObject* pyObject, const std::string_view& attrName, bool b) {
    int res = -1;
    if( b )
       res = PyObject_SetAttrString( pyObject, std::string(attrName).c_str() , Py_True );
    else
       res = PyObject_SetAttrString( pyObject, std::string(attrName).c_str() , Py_False );
    std::cout << "Bool attribute " << attrName << " setting result: " << res << std::endl;
};

/* This applies also for UA_ByteString, since UA_ByteString is just an alias for UA_String */
inline void set_PyObj_field(PyObject* pyObject, const std::string_view& attrName, const UA_String& val) {
/*
UA_Byte = c_uint8

struct_anon_81._fields_ = [
    ('length', c_size_t),
    ('data', POINTER(UA_Byte)),
]
UA_String = struct_anon_81
*/

        set_PyObj_field_array( attrName, val.data, val.length );
}

inline void set_PyObj_field(PyObject* pyObject, const std::string_view& attrName, const UA_Guid& val) {
/*
struct_anon_82._fields_ = [
    ('data1', UA_UInt32),
    ('data2', UA_UInt16),
    ('data3', UA_UInt16),
    ('data4', UA_Byte * int(8)),
]

UA_Guid = struct_anon_82*/

  set_PyObj_field(pyObject, std::string_view{"data1"}, val.data1);
  set_PyObj_field(pyObject, std::string_view{"data2"}, val.data2);
  set_PyObj_field(pyObject, std::string_view{"data3"}, val.data3);
  set_PyObj_field(pyObject, std::string_view{"data4"}, val.data4);
}

/* set_PyObj_field if T is UA_NodeId */
inline void set_PyObj_field(PyObject* pyObject, const std::string_view& attrName, const UA_NodeId& val) {
/*
enum_UA_NodeIdType = c_int

struct_anon_84._fields_ = [
    ('namespaceIndex', UA_UInt16),
    ('identifierType', enum_UA_NodeIdType),
    ('identifier', union_anon_83),
]

UA_NodeId = struct_anon_84
*/

  set_PyObj_field( std::string_view{"namespaceIndex"}, val.namespaceIndex);
  set_PyObj_field( std::string_view{"identifierType"}, (std::underlying_type_t<decltype( val.identifierType )> &)val.identifierType );
  
  switch(val.identifierType) {
	  case UA_NODEIDTYPE_NUMERIC:
  		set_PyObj_field( std::string_view{"identifier.numeric"}, val.identifier.numeric);
	    break;
	  case UA_NODEIDTYPE_STRING:
  		set_PyObj_field( std::string_view{"identifier.string"}, val.identifier.string);
	    break;
	  case UA_NODEIDTYPE_GUID:
  		set_PyObj_field( std::string_view{"identifier.guid"}, val.identifier.guid);
	    break;
	  case UA_NODEIDTYPE_BYTESTRING:
  		set_PyObj_field( std::string_view{"identifier.byteString"}, val.identifier.byteString);
	    break;
  }
}

/* Templated implementations for integers and float numbers (float, double) */
template <typename T>
inline std::enable_if_t<!std::is_floating_point<T>::value &&
                 (std::is_integral<T>::value || std::is_unsigned<T>::value ||
                  std::is_signed<T>::value)> set_PyObj_field( PyObject* pyObject, const std::string_view& attrName, const T& value) {
    int res = PyObject_SetAttrString( pyObject, std::string(attrName).c_str() , PyLong_FromLong(value) );
}

template <typename T>
inline std::enable_if_t<std::is_floating_point<T>::value> set_PyObj_field( PyObject* pyObject, const std::string_view& attrName, T value) {
    int res = PyObject_SetAttrString( pyObject, std::string(attrName).c_str() , PyFloat_FromDouble(value) );
}

/* End of print implementations for the different types */


/* Forward declaration of the entry function, definition later */
template <typename T>
constexpr auto set_PyObj_fields_from_C_obj(PyObject* pyObject, T &&t)-> std::enable_if_t<is_reflection<T>::value>;

template <typename T>
inline auto set_PyObj_field(PyObject* pyObject, const std::string_view& attrName, T &&t) -> std::enable_if_t<is_reflection<T>::value> {
  PyObject* complexAttr = PyObject_GetAttrString( field, std::string(attrName).c_str() );
  set_PyObj_fields_from_C_obj(complexAttr, std::forward<T>(t));
}

/* set_PyObj_field if T is enum */
template <typename T>
inline std::enable_if_t<std::is_enum<T>::value> set_PyObj_field(PyObject* pyObject, const std::string_view& attrName, T val) {
  set_PyObj_field(pyObject, attrName, (std::underlying_type_t<T> &)val);
}

template< typename T >
inline void set_PyObj_field_array( PyObject* pyObject, const std::string_view& attrName, T* arr, size_t N ){


    for( size_t i = 0; i < N; ++i ){
	set_PyObj_field( pyObject, "", arr[i] );
    }

}

template <typename T, size_t N>
constexpr bool fields_index_0(const std::array<T, N>& array, const T& value) {
  if( array[0] == value )
    return true;
  return false;
}

/* process if T is a Tagged Union. To be threated as a tagged union, the struct must satisfy two conditions: It must contain only two members, an integer type for the switchfield and the unnamed union member called fields. */
template <typename T>
constexpr auto processTaggedUnion( T& t, PyObject* pyObject ) -> std::enable_if_t< has_reflected_union<T>::value >  {

    	using M = decltype(samy_reflect_members(std::forward<T>(t)));
    	using F = decltype( samy_reflect_fields(std::forward<T>(t)));
	constexpr auto member_names = M::member_names();
	constexpr auto number_fields = F::number_fields::value;

	/* In REFLECTION, does not matter whether fields or switchField go first */
        constexpr auto unionMemberName = F::get_union_member_name();
	constexpr int fieldsIndex = !!( !fields_index_0( member_names, unionMemberName) ); // If member_names[0] == unionMemberName, fields_index_0 returns 1 and fieldsIndex must be zero (hence the !)
	constexpr int switchFieldIndex = !!(!fieldsIndex); // opposite of fieldsIndex (1->0, 0->1) as integer (the !!)

    	constexpr auto tupleValues = M::apply_impl(); // Contains the pointers to switchField and fields
    	constexpr auto tupleFields = F::apply_impl(); // Contains the types and names of the members of the (unnamed) union "fields" in T (T the tagged union type)
       
        constexpr auto switchFieldPtr = std::get<switchFieldIndex>(tupleValues);
        auto switchFieldVal = t.*switchFieldPtr;

         tuple_switch(
            switchFieldVal-1, tupleFields, // switchField must use 0 to indicate uninitialized, therefore its relevant values go from 1 to num.fields. Tuple goes from 0 to num.fields-1. Hence, the -1.
	    [&](auto &v){
		 constexpr auto fieldPtr = std::get<fieldsIndex>(tupleValues);
		 using C = Field< T, typename std::decay< decltype( v ) >::type >;
		 auto unionVal = t.*( reinterpret_cast<typename C::type>(fieldPtr) );
		 set_PyObj_field( pyObject, member_names[switchFieldIndex], switchFieldVal );
		 set_PyObj_field( pyObject, member_names[fieldsIndex], unionVal );
	    },
	    std::make_index_sequence<number_fields>{});
}

template <typename T, size_t currentIdx>
constexpr int64_t pointer_array_lengthMember_index( const T& t ){ // returns index of the member giving the length of the array (-1 if is a pointer to an object and not an array).
        using M = decltype(samy_reflect_members(std::forward<T>(t)));
        constexpr auto& rawPtrsInfo = M::get_raw_pointers_info();
	constexpr auto Count = M::number_members::value;
  	constexpr auto aux = std::integral_constant<int64_t, currentIdx + 1 >::value;
	if constexpr ( aux < Count ) {
		if constexpr ( rawPtrsInfo[aux] != std::string_view{""} )
			return aux;
	}
  	constexpr auto aux2 = std::integral_constant<int64_t, currentIdx -1 >::value;
	if constexpr ( aux2 >= 0 ) {
		if constexpr ( rawPtrsInfo[aux2] != std::string_view{""} )
			return aux2;
	}
	return -1;
}

/* Definition of the entry function for setting PyObjects from complex C objects (recursively) */
template <typename T>
constexpr auto set_PyObj_fields_from_C_obj(PyObject* pyObject, T &&t) -> std::enable_if_t< is_reflection<T>::value > {
	  for_each(std::forward<T>(t), // We process each reflected member of the type
		[&t, &pyObject](const auto& v, auto i) {
		    using M = decltype(samy_reflect_members(std::forward<T>(t)));
		    constexpr auto Count = M::number_members::value;
		    constexpr auto member_names = M::member_names();
		    constexpr auto Idx = decltype(i)::value;
		    static_assert(Idx < Count);
		
		    if constexpr ( has_reflected_union<T>::value && i==0 && Count == 2 ) { //only processes once the tagged union (with the first member, hence i==0). A tagged union must have two members
		        processTaggedUnion( pyObject, t );
		    }else if constexpr( !has_reflected_union<T>::value ) { //processes the rest of types
   	    	    	auto val = t.*v;
			if constexpr ( std::is_pointer<decltype(val)>::value ) { // If the current member is a pointer it requires additional checks
				constexpr auto lengMemberIdx = pointer_array_lengthMember_index<T, Idx>( t );
				if constexpr( lengMemberIdx > -1 ) { // If the pointer represents an array
					set_PyObj_field_array( pyObject, member_names[Idx], val, get_member_value<lengMemberIdx>(t) );
				}else{
                    		      if( val != nullptr ) // Correct
				          set_PyObj_field( pyObject, member_names[Idx], *val );
				}
			}else{
				set_PyObj_field( pyObject, member_names[Idx], val );
			}
		    }
		}
	);
}


} // ns Python
} // ns Reflection
} // ns SAMY


