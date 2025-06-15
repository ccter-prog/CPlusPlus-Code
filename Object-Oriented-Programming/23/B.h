#ifndef __B_H__
#define __B_H__

#include <iostream>
#include "A.h"

class B : public A
{
    public:
        virtual void print(void) override;
};

inline void B::print(void)
{
    std::cout << "This is B.print()" << "\n";
} 

#endif