#pragma once

#include <type_traits>

template <bool pd, typename T, typename F>
struct TypeSelector
{
    using type = F;
};

template <typename T, typename F>
struct TypeSelector<true, T, F>
{
    using type = T;
};

template <typename T>
TypeSelector<std::is_integral_v<T>, int, double>::type choose_type()
{
    if constexpr (std::is_integral_v<T>)
    {
        return int {0};
    }
    else
    {
        return double {0.0};
    }
}