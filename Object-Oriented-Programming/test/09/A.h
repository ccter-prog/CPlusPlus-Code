#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        virtual void f(void);
};

inline void A::f(void)
{
    std::cout << "This's A::f()" << "\n";
}

#endif