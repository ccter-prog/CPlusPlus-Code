#pragma once

#include <type_traits>

template <typename T1, typename T2>
inline auto add(std::enable_if_t<std::is_arithmetic_v<T1>, T1> value1, std::enable_if_t<std::is_arithmetic_v<T2>, T2> value2) -> decltype(value1 + value2)
{
    return value1 + value2;
}