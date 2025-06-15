#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        A(int n);
        A(const A &a);
        const A operator +(const A &n) const;
        void print(void);
        friend const A operator -(const A &a, const A &b);
    private:
        int i;
};

inline A::A(int n) : i(n)
{}

inline A::A(const A &a)
{
    i = a.i;
}

inline const A A::operator +(const A &n) const
{
    return A(i + n.i);
}

inline void A::print(void)
{
    std::cout << i << "\n";
}

#endif