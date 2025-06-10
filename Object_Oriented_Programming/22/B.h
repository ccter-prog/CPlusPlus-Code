#ifndef __B_H__
#define __B_H__

#include <iostream>
#include "A.h"

class B : public A
{
    public:
        B();
        void f();
    private:
        int j;
};

inline B::B() : j(30)
{}

inline void B::f()
{
    std::cout << "B.j = " << j << "\n";
}

#endif