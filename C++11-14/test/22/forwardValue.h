#pragma once

#include <iostream>
#include <utility>

inline void process(int& value)
{
    std::cout << "左值版本\n";
}

inline void process(int&& value)
{
    std::cout << "右值版本\n";
}

template <typename T>
void forwardValue(T&& arg)
{
    process(std::forward<T>(arg));
}