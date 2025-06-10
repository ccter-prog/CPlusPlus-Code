#ifndef __B_H__
#define __B_H__

#include "A.h"

class B : public A
{
    public:
        virtual void f(void) override;
};

inline void B::f(void)
{
    std::cout << "This's B::f()" << "\n";
}

#endif