#pragma once

#include <iostream>
#include <utility>
#include <string>

inline void target(int& a, std::string& b)
{
    std::cout << "左值：" << a << ", " << b << '\n';
}

inline void target(int&& a, std::string&& b)
{
    std::cout << "右值：" << a << ", " << b << '\n';
}

template <typename T1, typename T2>
void forwardTwo(T1&& a, T2&& b)
{
    target(std::forward<T1>(target), std::forward<T2>(target));
}