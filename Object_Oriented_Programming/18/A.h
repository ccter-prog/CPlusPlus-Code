#ifndef __A_H__
#define __A_H__

#include <iostream>


class A
{
    public:
        A();
        int f(int a, int b);
    private:
        int ret;
};

inline A::A() : ret(0)
{}

inline int A::f(int a, int b)
{
    if(a > b)
    {
        ret = 1;
    }
    return ret;
}

#endif