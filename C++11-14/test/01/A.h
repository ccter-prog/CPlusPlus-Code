#ifndef __A_H__
#define __A_H__

#include <iostream>

void print()
{}

template <typename T, typename... types>
void print(T a, const types &...args)
{
    std::cout << a << "\n";
    print(args...);
    nullptr;
    char a;
}

#endif