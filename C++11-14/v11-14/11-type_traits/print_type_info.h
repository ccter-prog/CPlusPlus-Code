#pragma once

#include <print>
#include <type_traits>
#include <cstddef>

template <typename T>
inline void print_type_info()
{
    std::println("类型信息:");
    if constexpr (std::is_integral_v<T>)
    {
        std::println("是整数");
    }
    if constexpr (std::is_floating_point_v<T>)
    {
        std::println("是浮点数");
    }
    if constexpr (std::is_pointer_v<T>)
    {
        std::println("是指针");
    }
    if constexpr (std::is_reference_v<T>)
    {
        std::println("是引用");
    }
    if constexpr (std::is_const_v<T>)
    {
        std::println("是const");
    }
    std::println("大小: {}", sizeof(T));
}