#pragma once

#include <type_traits>
#include <print>

template <typename T>
inline std::enable_if_t<std::is_integral_v<T>> process(T num)
{
    std::println("整数处理: {}", num);
}

template <typename T>
inline std::enable_if_t<std::is_floating_point_v<T>> process(T num)
{
    std::println("浮点数处理: {}", num);
}