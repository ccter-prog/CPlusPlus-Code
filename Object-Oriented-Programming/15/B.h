#ifndef __B_H__
#define __B_H__

#include "A.h"

class B : public A
{
    public:
        B();
        void print();
        ~B();
        void f();
};

#endif