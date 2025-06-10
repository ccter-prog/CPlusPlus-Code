#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        A();
        virtual A *f();
    private:
        A *p;
        int i;
};

A::A() : p(nullptr), i(10)
{}

inline A *A::f()
{
    return p;
}

#endif