#pragma once

#include <cstddef>
#include <array>

template <typename T>
struct ArrayHandler
{
    static constexpr size_t size = sizeof(T);
};

template <typename T, size_t N>
struct ArrayHandler<T[N]>
{
    static constexpr size_t size = N;
};

template <typename T, size_t N>
struct ArrayHandler<std::array<T, N>>
{
    static constexpr size_t size = N;    
};