#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        A();
        void f(void);
        void f() const;
    private:
        int i;
};

inline A::A() : i(0)
{}

inline void A::f(void)
{
    std::cout << "f()" << "\n";
    std::cout << i << "\n";
    i = 1;
    std::cout << i << "\n";
}

inline void A::f() const
{
    std::cout << "f() const" << "\n";
}

#endif