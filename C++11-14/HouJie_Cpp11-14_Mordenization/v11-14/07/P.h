#ifndef __P_H__
#define __P_H__

#include <iostream>

class P
{
    public:
        P(int a, int b);
        P(std::initializer_list<int>);
        explicit P(int a, int b, int c);
};

inline P::P(int a, int b)
{
    std::cout << "P(int a, int b)" << "\n";
}

inline P::P(std::initializer_list<int>)
{
    std::cout << "P(initializer_list<int>)" << "\n";
}

inline P::P(int a, int b, int c)
{
    std::cout << "explicit P(int a, int b, int c)" << "\n";
}

#endif