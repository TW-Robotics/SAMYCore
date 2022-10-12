/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array>
#include <tuple>
#include <utility>

using namespace std;

struct Test{
    int i;
    float f;
};


constexpr inline std::array<std::string_view, 2> member_names_Test = { std::string_view{"i"}, std::string_view{"f"} };
static auto samy_reflect_members(Test const&)
{
    struct reflect_members
    {
        constexpr decltype(auto) static apply_impl(){
            return std::make_tuple( &Test::i, &Test::f ); // This creates a tuple of member types: std::tuple<int Test::*, float Test::*>! Hence it will require .* notation
        }
        using type = void;
        using number_members = std::integral_constant<size_t, 2>;
        constexpr static std::string_view name() { return std::string_view("Test", sizeof("Test")-1); }
        constexpr static size_t number_members_value() { return number_members::value; }
        constexpr static std::array<std::string_view, number_members::value> member_names() { return member_names_Test; }
    };
    return reflect_members{};
}


/* Implementation one of the for_each 
template<std::size_t I = 0, typename FuncT, typename... Tp>
inline typename std::enable_if<I == sizeof...(Tp), void>::type
  for_each(std::tuple<Tp...> &, FuncT) // Unused arguments are given no names.
  {
        std::cout << " a " << std::endl;
  }

template<std::size_t I = 0, typename FuncT, typename... Tp>
inline typename std::enable_if<I < sizeof...(Tp), void>::type
  for_each(std::tuple<Tp...>& t, FuncT f)
  {
      std::cout << " b " << std::endl;
    f(std::get<I>(t));
    for_each<I + 1, FuncT, Tp...>(t, f);
  }
  */
  
  
  
  // Implementation two of the for_each with recursion
  // Entry point for basic types, called for each basic type (given by std::size_t... Idx)
    template <typename... Args, typename F, std::size_t... Idx>
    constexpr void for_each(std::tuple<Args...>& t, F&& f, std::index_sequence<Idx...>)
    {
        (std::forward<F>(f)(std::get<Idx>(t), std::integral_constant<size_t, Idx>{}), ...); /* std::get<Idx>(t), Idx is the element in the tuple,
                                                        t is the tuple whose contents to extract, and it returns a reference to the selected element of t */
    }
  
  // Only difference with previous case is the const std::tuple<Args...>& instead of just std::tuple<Args...>& 
    template <typename... Args, typename F, std::size_t... Idx>
    constexpr void for_each(const std::tuple<Args...>& t, F&& f, std::index_sequence<Idx...>)
    {
        (std::forward<F>(f)(std::get<Idx>(t), std::integral_constant<size_t, Idx>{}), ...);
    }

/*    template<typename T, typename F> // Entry point for complex types 
    constexpr std::enable_if_t<is_reflection<T>::value> for_each(T&& t, F&& f)
    {
        using M = decltype(samy_reflect_members(std::forward<T>(t)));
        for_each(M::apply_impl(), std::forward<F>(f), std::make_index_sequence<M::number_members_value()>{}); // Calls recursively for each type of the complex type
    }
*/

int main()
{
    Test t{ 100, 99.8877 };
    
    std::cout << t.i << std::endl;
    std::cout << t.f << std::endl;
    
    using M = decltype(samy_reflect_members(std::forward<Test>(t))); // forward not required in this case since in this case samy_reflect_members is not a template but manually created
    
    auto tuple = M::apply_impl();
  //  std::cout << "Hereee 0    " << tuple  << std::endl;
    // for_each implementation one
  //  for_each(tuple, [&t](const auto &v){ std::cout << "Hereee 1    " << t.*v << std::endl;  });
    
    
   // for_each implementation one
    for_each(tuple, [&t](const auto &v, auto i){ std::cout << "Hereee 2    " << t.*v <<  std::endl;  }, std::make_index_sequence<M::number_members_value()>{});


    auto lambda =  [&t](const auto &v, auto i){ std::cout << "Hereee 4    " << t.*v  << std::endl;  };
    lambda( std::get<1>(tuple), std::integral_constant<size_t, 1>{} );
    /* std::get<1>(tuple) returns a reference to a "pointer to a data member" stored in the tuple, in this case a value of type "pointer to data member"  float Test::* due to
    how it was created the tuple with std::make_tuple( &Test::i, &Test::f );
    Hence, we need to take this "pointer to data member" pointing to the value f of Test instance t, and using the .* operator (dereference to data member operator)
    dereference it: this is done with  t.*v   */
    return 0;
}

