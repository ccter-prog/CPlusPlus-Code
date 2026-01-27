#pragma once

#include <type_traits>

template <typename T1, typename T2>
inline constexpr auto safe_add(T1 a, T2 b) -> decltype(a + b)
{
    static_assert(!std::is_pointer_v<T1> || !std::is_pointer_v<T2>, "指针不能相加");
    // if constexpr (std::is_arithmetic_v<T1> && std::is_arithmetic_v<T2>)
    // {
    //     return a + b;
    // }
    return a + b;
}