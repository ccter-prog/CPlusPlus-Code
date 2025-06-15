#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        virtual void print(void);
};

inline void A::print(void)
{
    std::cout << "This is A.print()" << "\n";
}

#endif