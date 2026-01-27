#pragma once

#include <type_traits>

template <typename T>
inline std::enable_if_t<std::is_pointer_v<T>, std::remove_pointer_t<T>&> safe_deref(T value)
{
    return *value;
}

template <typename T>
inline std::enable_if_t<std::is_arithmetic_v<T>, T> safe_deref(T value)
{
    return value;
}