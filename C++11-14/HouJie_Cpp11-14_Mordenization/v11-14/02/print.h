#ifndef __print_H__
#define __print_H__

#include <iostream>

inline void print()
{}

template <typename T, typename... Types>
void print(const T &firstArg, const Types &...args)
{
    std::cout << "调用第2个" << "\n";w
    // std::cout << firstArg << "\n";
    // print(args...);
}

template <typename... Types>
void print(const Types ...args)
{
    std::cout << "调用第3个" << "\n";
}

#endif