#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        A();
        void set(int a);
        void print(void);
        static void test(void);
    private:
        static int i;
        int k;
};

inline A::A() : k(10)
{}

inline void A::set(int a)
{
    this -> i = a;
}

inline void A::test(void)
{
    std::cout << i << "\n";
}

inline void A::print(void)
{
    std::cout << i << "\n";
}

#endif