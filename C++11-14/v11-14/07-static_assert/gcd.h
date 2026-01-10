#pragma once

#include <type_traits>

template <typename T>
inline constexpr T gcd(T a, T b)
{
    static_assert(std::is_integral_v<T>, "T must be an integral type");
    T result;
    T temp = a % b;
    while (temp != 0)
    {
        a = b;
        b = temp;
        temp = a % b;
    }
    result = b;
    return result;
}