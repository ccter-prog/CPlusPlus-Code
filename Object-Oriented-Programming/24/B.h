#ifndef __B_H__
#define __B_H__

#include <iostream>
#include "A.h"

class B : public A
{
    public:
        B();
        virtual void f();
    private:
        int j;
};

#endif