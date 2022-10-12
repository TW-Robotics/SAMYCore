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

#include <Reflection_macros.h>
#include <Auxiliar_traits.h>
#include <typed_literals.h>

#include <CastersRegistry.h>

namespace SAMY{
namespace Reflection {
namespace detail {


    template <typename T, size_t N, typename F, std::size_t... Idx>
    constexpr void for_each_in_array(std::array<T,N>& arr, F&& f, std::index_sequence<Idx...>)
    {
        (std::forward<F>(f)(std::get<Idx>(arr), std::integral_constant<size_t, Idx>{}), ...); /* std::get<Idx>(t), Idx is the element in the tuple,
                                                        t is the tuple whose contents to extract, and it returns a reference to the selected element of t */
    }

    template <typename T, size_t N, typename F, std::size_t... Idx>
    constexpr void for_each_in_array(const std::array<T,N>& arr, F&& f, std::index_sequence<Idx...>)
    {
        (std::forward<F>(f)(std::get<Idx>(arr), std::integral_constant<size_t, Idx>{}), ...);
    }

/* The metadata information is stored as a tuple of the member names and implicitely its types */
#define MAKE_META_DATA_IMPL(STRUCT_NAME, ...) \
static auto samy_reflect_members(STRUCT_NAME const&) \
{ \
    static bool initialized = false;\
    if( !initialized ){\
        CastersRegistry::addCaster( #STRUCT_NAME, std::make_shared< Caster< STRUCT_NAME > >() );\
	initialized = true;\
    }\
    struct reflect_members \
    { \
        constexpr decltype(auto) static apply_impl(){\
            return std::make_tuple(__VA_ARGS__);\
        }\
        using type = void;\
        using number_members = std::integral_constant<size_t, GET_ARG_COUNT(__VA_ARGS__)>; \
        constexpr static std::string_view name() { return std::string_view(#STRUCT_NAME, sizeof(#STRUCT_NAME)-1); }\
        constexpr static size_t number_members_value() { return number_members::value; }\
        constexpr static std::array<std::string_view, number_members::value> member_names() { return member_names_##STRUCT_NAME; }\
        constexpr static const std::array<std::string_view, number_members::value>& get_raw_pointers_info() { return raw_pointers_info_##STRUCT_NAME; }\
    }; \
    return reflect_members{}; \
}\




#define MAKE_META_DATA(STRUCT_NAME, N, ...) \
    constexpr inline std::array<std::string_view, N> member_names_##STRUCT_NAME = { MACRO_EXPAND(MACRO_CONCAT(CON_STR, N)(__VA_ARGS__)) };\
    constexpr static std::array<std::string_view, N> set_raw_pointers_info_##STRUCT_NAME( ){\
		std::array<std::string_view, N> retVal;\
		SAMY::Reflection::detail::for_each_in_array(\
			retVal,\
			[&](auto &v, auto i){\
			    if constexpr ( SAMY::Reflection::check_potential_pointer_member_with_array_size( member_names_##STRUCT_NAME, member_names_##STRUCT_NAME[i] ) )\
				v = member_names_##STRUCT_NAME[i];\
			},\
		std::make_index_sequence<N>{} );\
		return retVal;\
    }\
    constexpr inline std::array< std::string_view, N > raw_pointers_info_##STRUCT_NAME = set_raw_pointers_info_##STRUCT_NAME();\
    MAKE_META_DATA_IMPL(STRUCT_NAME, MAKE_ARG_LIST(N, &STRUCT_NAME::FIELD, __VA_ARGS__))\


/* Additional structure for reflection of Tagged unions with unnamed unions.
Tagged unions are expected to have two members, one integer member "switchField" (for this it does not matter the name at the moment), and one unnamed union member "fields" */
#define MAKE_META_DATA_UNION_FIELDS_IMPL(STRUCT_NAME, N, TYPES, CONSTRUCTION ) \
static auto samy_reflect_fields(STRUCT_NAME const&) \
{ \
    struct reflect_fields \
    { \
	STRUCT_NAME aux{};\
    TYPES\
        constexpr decltype(auto) static apply_impl(){\
            return std::make_tuple( CONSTRUCTION );\
        }\
        using type = void;\
        using number_fields = std::integral_constant<size_t, N>; \
        constexpr static std::string_view name() { return std::string_view(#STRUCT_NAME, sizeof(#STRUCT_NAME)-1); }\
        constexpr static size_t number_fields_value() { return number_fields::value; }\
        constexpr static std::array<std::string_view, number_fields::value> fields_names() { return fields_names_##STRUCT_NAME; }\
        constexpr static std::string_view get_union_member_name() { return union_member_##STRUCT_NAME; }\
    }; \
    return reflect_fields{}; \
}

/* From REFLECTION_UNION_FIELDS(A, a, b, c, d) creates MAKE_META_DATA_UNION_FIELDS_IMPL(A, 4, "using Ta = decltype(aux.fields.a);using Tb = decltype(aux.fields.b);...", 
											"Ta(), Tb(), ..." ) used for creation of samy_reflect_fields */
#define MAKE_META_DATA_UNION_FIELDS(STRUCT_NAME, UNION_MEMBER_NAME, N, ...) \
    constexpr inline std::array<std::string_view, N> fields_names_##STRUCT_NAME = { MACRO_EXPAND(MACRO_CONCAT(CON_STR, N)(__VA_ARGS__)) };\
    constexpr inline std::string_view union_member_##STRUCT_NAME = std::string_view(#UNION_MEMBER_NAME, sizeof(#UNION_MEMBER_NAME)-1);\
    MAKE_META_DATA_UNION_FIELDS_IMPL(STRUCT_NAME, N, MAKE_ARG_LIST_NO_SEP(N, OP_GENERATE_TYPE, UNION_MEMBER_NAME, __VA_ARGS__), MAKE_ARG_LIST(N, OP_GENERATE_TYPE_CONSTRUCTION, __VA_ARGS__))

#define REFLECTION_UNION_FIELDS(STRUCT_NAME, UNION_MEMBER_NAME, ...) \
	MAKE_META_DATA_UNION_FIELDS(STRUCT_NAME, UNION_MEMBER_NAME, GET_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)


} // detail
} // Reflection
} // SAMY

namespace SAMY{
namespace Reflection{
#define REFLECTION(STRUCT_NAME, ...) \
	MAKE_META_DATA(STRUCT_NAME, GET_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

#define REFLECTION_UNION_FIELDS(STRUCT_NAME, UNION_MEMBER_NAME, ...) \
	MAKE_META_DATA_UNION_FIELDS(STRUCT_NAME, UNION_MEMBER_NAME, GET_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

/* Union Fields docu:
	struct Test{
	    int switchField;
	    union{
		int a;
		bool b;
		float c;
		double d;
		int e;
	    } fields;
	};
    REFLECTION(Test, switchField, fields);
    REFLECTION_UNION_FIELDS(Test, fields, a, b, c, d, e);

    using M = decltype(samy_reflect_members(std::forward<Test>(t)));
    using F = decltype( samy_reflect_fields(std::forward<Test>(t)));

    auto tupleValues = M::apply_impl();
    auto tupleFields = F::apply_impl();

   for_each(tupleFields, [&t,&tupleValues](auto v, auto i){
        if( i == t.switchField ){
            auto fieldPtr = std::get<1>(tupleValues); // Actually check which one is the union! This should return a pointer to the fields member of the StructUnion(Tagged Union)       
            using C = Field<decltype(t), decltype(v)>;
            std::cout << t.*(reinterpret_cast<typename C::type>(fieldPtr)) <<  std::endl;  
        }
    }, std::make_index_sequence<F::number_members_value()>{});
*/


/*The templated Field struct allows casting a pointer to an unnamed union member within a struct of type SU (this fields member has type SU:: SU::*) into one of the members of the union (M SU::*)
so the value (taking into account its actual type) active in the union can be recovered. */
    template<typename SU, typename M>
    struct Field{
       using type = M SU::*;
    };

    template<typename T>
    using Reflect_members = decltype(samy_reflect_members(std::declval<T>()));

    template <typename T, typename = void>
    struct is_reflection : std::false_type
    {
    };

    template <typename T>
    struct is_reflection<T, std::void_t<typename Reflect_members<T>::type>> : std::true_type
    {
    };

    template<typename T>
    inline constexpr bool is_reflection_v = is_reflection<T>::value;



    template<typename T>
    using Reflect_fields = decltype(samy_reflect_fields(std::declval<T>()));

    template <typename T, typename = void>
    struct is_reflected_tagged_union : std::false_type
    {
    };

    template <typename T>
    struct is_reflected_tagged_union<T, std::void_t<typename Reflect_fields<T>::type>> : std::true_type
    {
    };

/* Given an array of member names and one member xxxxxxx, checks whether any other member has a name xxxxxxxSize, and stores then xxxxxxx and xxxxxSize.
It runs at compile time only once per reflected struct, so optimizations keeping the constexpr might be tricky and are not worth */
template< size_t N >
constexpr bool check_potential_pointer_member_with_array_size( const std::array< std::string_view, N >& membersNames, const std::string_view& targetName )
{
   typedef std::size_t count_t, pos_t;
   auto a = targetName.substr(pos_t(0), count_t(1));

   for( auto mem : membersNames ){
        // First we deal with a target xxx or kkk (same length) and member xxxSize
        auto mem1 = mem;
        auto mem2 = mem;
	    mem1.remove_prefix( std::min(targetName.size(), mem1.size()) );
    	if( mem1 == "Size" ){ // with a member xxxSize, and target xxx or kkk -> mem1 is Size
    	    mem2.remove_suffix( std::string_view{"Size"}.size() );  // with member xxxSize and a target xxx or kkk -> mem2 is xxx or kkk
    	    if( mem2 == targetName ) // if indeed the prefix of the current member xxxSize is the same than current target, and not only have the same length, return true
    	        return true;
    	}
    
        // Then we deal with a target xxxSize
        auto orig1 = targetName;
        auto orig2 = targetName;
    	orig1.remove_suffix( std::min(targetName.size(), std::string_view{"Size"}.size()) ); 
    	if( mem == orig1 ){ // with a target xxxSize or xxxABCD -> orig1 becomes xxx
    	    orig2.remove_prefix( std::min(targetName.size(), mem.size()) ); // with a target xxxSize or xxxABCD -> orig2 becomes Size or ABCD
    	    if( orig2 == "Size" )
    	        return true;
    	}
   }
   return false;
}


    template<size_t I, typename T>
    constexpr decltype(auto) get_member_value(T&& t)
    {
        using M = decltype(samy_reflect_members(std::forward<T>(t))); // Gets the metadata of this instance
		using U = decltype(std::forward<T>(t).*(std::get<I>(M::apply_impl()))); // Gets the type of the desired value in the tuple
		
		if constexpr(std::is_array_v<U>) { // If the requested value is an array, creates the array and returns it
			auto s = std::forward<T>(t).*(std::get<I>(M::apply_impl()));
			std::array<char, sizeof(U)> arr;
			memcpy(arr.data(), s, arr.size());
			return arr;
		}
		else
        		return std::forward<T>(t).*(std::get<I>(M::apply_impl())); // Otherwise just return the requested value
    }

    template <typename T, size_t ... Is>
    constexpr auto get_impl(T const& t, std::index_sequence<Is...>)
    {
        return std::make_tuple(std::get<Is>(t)...);
    }

    template <typename T, size_t ... Is>
    constexpr auto get_impl(T& t, std::index_sequence<Is...>)
    {
        return std::make_tuple(std::ref(std::get<Is>(t))...);
    }

    template <typename T>
    constexpr auto get(T const& t)
    {
        using M = decltype(samy_reflect_members(t));
        return get_impl(t, std::make_index_sequence<M::number_members_value()>{});
    }

    template <typename T>
    constexpr auto get_ref(T& t)
    {
        using M = decltype(samy_reflect_members(t));
        return get_impl(t, std::make_index_sequence<M::number_members_value()>{});
    }

    template<typename T, size_t  I>
    constexpr const std::string_view get_name_by_member_index()
    {
        using M = decltype(samy_reflect_members(std::declval<T>()));
        static_assert(I<M::number_members_value(), "out of range");
        return M::member_names()[I];
    }

    template<typename T>
    constexpr const std::string_view get_name(size_t i)
    {
        using M = decltype(samy_reflect_members(std::declval<T>()));
        return M::member_names()[i];
    }

    template<typename T>
    constexpr const std::string_view get_name()
    {
        using M = decltype(samy_reflect_members(std::declval<T>()));
        return M::name();
    }

    template<typename T>
    constexpr std::enable_if_t<is_reflection<T>::value, size_t> get_number_members_value()
    {
        using M = decltype(samy_reflect_members(std::declval<T>()));
        return M::number_members_value();
    }

    template<typename T>
    constexpr std::enable_if_t<!is_reflection<T>::value, size_t> get_number_members_value()
    {
        return 1;
    }

    template<typename T>
    constexpr auto get_member_names()
    {
        using M = decltype(samy_reflect_members(std::declval<T>()));
        return M::member_names();
    }

    template<typename T>
    constexpr auto get_member_index_by_name(std::string_view name)
    {
        using M = decltype(samy_reflect_members(std::declval<T>()));
        constexpr auto arr = M::member_names();

        auto it = std::find_if(arr.begin(), arr.end(), [name](auto str){
            return (str==name);
        });

        return std::distance(arr.begin(), it);
    }

    template <class Tuple, class F, std::size_t...Is>
    void tuple_switch(std::size_t i, Tuple&& t, F&& f, std::index_sequence<Is...>) {
        ((i == Is && ((std::forward<F>(f)(std::get<Is>(std::forward<Tuple>(t)))), false)), ...);
    }


    template <typename T, typename SU>
    struct ShowType;

//-------------------------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------------------------//
    template <typename... Args, typename F, std::size_t... Idx>
    constexpr void for_each(std::tuple<Args...>& t, F&& f, std::index_sequence<Idx...>)
    {
        (std::forward<F>(f)(std::get<Idx>(t), std::integral_constant<size_t, Idx>{}), ...);
    }

    template <typename... Args, typename F, std::size_t... Idx>
    constexpr void for_each(const std::tuple<Args...>& t, F&& f, std::index_sequence<Idx...>)
    {
        (std::forward<F>(f)(std::get<Idx>(t), std::integral_constant<size_t, Idx>{}), ...);
    }

    template<typename T, typename F>
    constexpr std::enable_if_t< is_reflection<T>::value > for_each(T&& t, F&& f)
    {
        using M = decltype(samy_reflect_members(std::forward<T>(t)));
        for_each(M::apply_impl(), std::forward<F>(f), std::make_index_sequence<M::number_members_value()>{});
    }


    template<typename T, typename F>
    constexpr std::enable_if_t< is_reflected_tagged_union<T>::value > for_each_union_field(T&& t, F&& f)
    {
        using M = decltype(samy_reflect_fields(std::forward<T>(t)));
        for_each(M::apply_impl(), std::forward<F>(f), std::make_index_sequence<M::number_fields_value()>{});
    }

} // ns Reflection
} // ns SAMY

