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

#include <Reflection.h>

#include <types.h>


namespace SAMY{
namespace Reflection {
namespace Printing {


template< typename T >
void printArray( std::ostream& out, const std::string_view& attrName, T* arr, size_t N );

/* Print implementations for different types */
void printValue( std::ostream& out, const std::string_view& attrName, const std::string& value) {
	out << "\t" << attrName << "       " << value << "\n";
}

void printValue( std::ostream& out, const std::string_view& attrName, const char *s, size_t size) {
	out << "\t" << attrName << "       " << std::string{ s, size } << "\n";
}

void printValue( std::ostream& out, const std::string_view& attrName, std::nullptr_t) {
	out << "\t" << attrName << "  nullptr_t  " << "\n";
}

void printValue( std::ostream& out, const std::string_view& attrName, bool b) {
	out << "\t" << attrName << "       " << b << "\n";
};

void printValue(std::ostream& out, const std::string_view& attrName, const UA_String& val) {
        printArray( out, attrName, val.data, val.length );
}

void printValue(std::ostream& out, const std::string_view& attrName, const UA_Guid& val) {
  out << "\t" << attrName << "\n";
  printValue(out, std::string_view{"data1"}, val.data1);
  printValue(out, std::string_view{"data2"}, val.data2);
  printValue(out, std::string_view{"data3"}, val.data3);
  printValue(out, std::string_view{"data4"}, val.data4);
}

/* printValue if T is UA_NodeId */
void printValue(std::ostream& out, const std::string_view& attrName, const UA_NodeId& val) {
  out << "\t" << attrName << "\n";
  printValue( out, std::string_view{"namespaceIndex"}, val.namespaceIndex);
  printValue( out, std::string_view{"identifierType"}, (std::underlying_type_t<decltype( val.identifierType )> &)val.identifierType);
  
  switch(val.identifierType) {
	  case UA_NODEIDTYPE_NUMERIC:
  		printValue( out, std::string_view{"identifier.numeric"}, val.identifier.numeric);
	    break;
	  case UA_NODEIDTYPE_STRING:
  		printValue( out, std::string_view{"identifier.string"}, val.identifier.string);
	    break;
	  case UA_NODEIDTYPE_GUID:
  		printValue( out, std::string_view{"identifier.guid"}, val.identifier.guid);
	    break;
	  case UA_NODEIDTYPE_BYTESTRING:
  		printValue( out, std::string_view{"identifier.byteString"}, val.identifier.byteString);
	    break;
  }
}

/* Templated implementations for integers and float numbers (float, double) */
template <typename T>
std::enable_if_t<!std::is_floating_point<T>::value &&
                 (std::is_integral<T>::value || std::is_unsigned<T>::value ||
                  std::is_signed<T>::value)> printValue( std::ostream& out, const std::string_view& attrName, const T& value) {
	out << "\t" << attrName << "       " << value << "\n";
}

template <typename T>
std::enable_if_t<std::is_floating_point<T>::value> printValue( std::ostream& out, const std::string_view& attrName, T value) {
	out << "\t" << attrName << "       " << value << "\n";
}

/* End of print implementations for the different types */


/* Forward declaration of the entry function, definition later */
template <typename T>
constexpr auto printValueFromCstruct( T &&t, std::ostream& out)-> std::enable_if_t<is_reflection<T>::value>;

template <typename T>
auto printValue(std::ostream& out, const std::string_view& attrName, T &&t) -> std::enable_if_t<is_reflection<T>::value> {
 // out << "\t" << attrName << "\n";
  printValueFromCstruct(std::forward<T>(t), out);
}

/* printValue if T is enum */
template <typename T>
std::enable_if_t<std::is_enum<T>::value> printValue(std::ostream& out, const std::string_view& attrName, T val) {
  out << "\t" << attrName << "\n";
  printValue(out, attrName, (std::underlying_type_t<T> &)val);
}

template< typename T >
void printArray( std::ostream& out, const std::string_view& attrName, T* arr, size_t N ){
  //  out << "printArray  -> " << attrName << "\n";
    out << "\t" << attrName << "\n";
    for( size_t i = 0; i < N; ++i ){
    	out << "\t";
	printValue( out, "", arr[i] );
    }
}

template <typename T, size_t N>
constexpr bool fields_index_0(const std::array<T, N>& array, const T& value) {
  if( array[0] == value )
    return true;
  return false;
}

/* process if T is a Tagged Union. To be threated as a tagged union, the struct must contain only two members, one integer type being the switchfield and the unnamed union member. */
template <typename T>
constexpr auto processTaggedUnion( std::ostream& out, T& t) -> std::enable_if_t< is_reflected_tagged_union<T>::value >  {
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
		 printValue( out, member_names[switchFieldIndex], switchFieldVal );
out << "\t" << member_names[fieldsIndex] << "\n \t";
		 printValue( out, member_names[fieldsIndex], unionVal );
	    },
	    std::make_index_sequence<number_fields>{});
}

template<typename T>
void printTaggedUnion( std::ostream& out, const std::string_view& attrName, T& t ){
    processTaggedUnion( out, t );
}

/* raw_pointers_info() returns a reference to a constexpr array named raw_pointers_info_STRUCTNAME constructed at compile time in the following manner:
   Given member_names_STRUCTNAME containing the reflected members of a struct, raw_pointers_info_STRUCTNAME is an array of the same length where all the elements are "" except for those
   members that within the same struct, are named xxx and xxxSize.They appear in the same order than in raw_pointers_info_STRUCTNAME. E.g.:
   REFLECTED(TEST, aaa, b, c, aaaSize) macro generates the following two arrays:
   member_names_TEST = { "aaa", "b", "c", "aaaSize" }
   raw_pointers_info_TEST = { "aaa", "", "", "aaaSize" }
   For such members, xxx is assumed to be potentially a raw pointer representing an array and xxxSize its size.
   If xxx is indeed a pointer and contiguous to it there is a member called xxxSize, such member will be handled as an array.
   In the previous example, aaa would not be handled as an array even if it was a pointer, since aaaSize member it does not appear next to it. Assuming aaa to be a pointer, if we did:
   REFLECTED(TEST, b, aaa, aaaSize, c)
   member_names_TEST = { "b", "aaa", "aaaSize", "c" }
   raw_pointers_info_TEST = { "", "aaa", "aaaSize", "" }
   in case aaa was a pointer, it would be threated as an array of length aaaSize in this case (this criteria is in this function)
  */
template <typename T, size_t currentIdx>
constexpr int64_t pointer_array_lengthMember_index( ){ // returns index of the member giving the length of the array (-1 if is a pointer to an object and not an array).
    using M = decltype(samy_reflect_members( typename std::decay<T>::type{} )  );
        constexpr auto& rawPtrsInfo = M::get_raw_pointers_info();
	constexpr auto Count = M::number_members::value;
  	constexpr auto aux = std::integral_constant<int64_t, currentIdx + 1 >::value;

	if constexpr ( rawPtrsInfo[currentIdx] != std::string_view{""} ){ // In case this pointer does appear as potential array in set_raw_pointers_info_##STRUCT_NAME
		if constexpr ( aux < Count )
			if constexpr ( rawPtrsInfo[aux] != std::string_view{""} ) // Two ifs so we ensure always check within boundarires of the array
				return aux;

	  	constexpr auto aux2 = std::integral_constant<int64_t, currentIdx -1 >::value;
		if constexpr ( aux2 >= 0 )
			if constexpr ( rawPtrsInfo[aux2] != std::string_view{""} )
				return aux2;
	}
	return -1;
}


/* Definition of the entry function for printing (recursively) */
template <typename T>
constexpr auto printValueFromCstruct(T &&t, std::ostream& out) -> std::enable_if_t< is_reflection<T>::value > {
	  for_each(std::forward<T>(t), // We process each reflected member of the type
		[&t, &out](const auto& v, auto i) {
		    using M = decltype(samy_reflect_members(std::forward<T>(t)));
		    constexpr auto Count = M::number_members::value;
		    constexpr auto member_names = M::member_names();
		    constexpr auto Idx = decltype(i)::value;
		    static_assert(Idx < Count);
		
		    if constexpr ( is_reflected_tagged_union<T>::value && i==0 ) { //only processes once the tagged union (with the first member, hence i==0). A tagged union must have two members
		        static_assert( Count == 2, "Reflected tagged unions can only have two members, the switchfield and the unnamed union member" ); // We ensure that the tagged union type has indeed only two types reflected
		        printTaggedUnion( out, member_names[Idx], t );
		    }else if constexpr( !is_reflected_tagged_union<T>::value ) { //processes the rest of types
   	    	    	auto val = t.*v;
			if constexpr ( std::is_pointer<decltype(val)>::value ) { // If the current member is a pointer it requires additional checks
                                constexpr auto lengMemberIdx = pointer_array_lengthMember_index<T, Idx>( );
				if constexpr( lengMemberIdx > -1 ) { // If the pointer represents an array
					printArray( out, member_names[Idx], val, get_member_value<lengMemberIdx>(t) );
				}else{
                                    if( val != nullptr )
				      printValue( out, member_names[Idx], *val );
				    else
				      printValue( out, member_names[Idx], val );
				}
			}else{
				printValue( out, member_names[Idx], val );
			}
		    }
		}
	);
}


} // ns Printing
} // ns Reflection
} // ns SAMY


