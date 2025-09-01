#pragma once

#include <iostream>

inline void printX()
{}

template <typename T, typename... Types>
void printX(const T& first, const Types&... args)
{
    std::cout << first << "\n";
    printX(args...);
}