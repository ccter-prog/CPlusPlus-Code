#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        A();
        ~A();
};

inline A::A()
{
    std::cout << "This's A::A()" << "\n";
}

inline A::~A()
{
    std::cout << "This's A::~A()" << "\n";
}

#endif