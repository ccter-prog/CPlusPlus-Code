#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        A(int a, int b);
        A(std::initializer_list<int> vals);
};

inline A::A(int a, int b)
{
    std::cout << "A::A(int, int)" << "\n";
}

inline A::A(std::initializer_list<int> vals)
{
    std::cout << "initializer_list<int>" << "\n";
}

#endif