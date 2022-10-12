#pragma once

#include <type_traits>

namespace SAMY
{
namespace Reflection{

    template< class T >
    struct is_signed_integral_like : std::integral_constant < bool,
            (std::is_integral<T>::value) &&
            std::is_signed<T>::value
    > {};

    template< class T >
    struct is_unsigned_integral_like : std::integral_constant < bool,
            (std::is_integral<T>::value) &&
            std::is_unsigned<T>::value
    > {};

    template <typename T, typename Tuple>
    struct has_type;

    template <typename T, typename... Us>
    struct has_type<T, std::tuple<Us...>> : std::disjunction<std::is_same<T, Us>...> {};

    template<typename T>
    inline constexpr bool  is_int64_v = std::is_same_v<T, int64_t>||std::is_same_v<T, uint64_t>;
}
}


