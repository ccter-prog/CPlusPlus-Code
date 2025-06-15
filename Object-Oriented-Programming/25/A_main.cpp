#include <iostream>
#include "A.h"

A f();

int main(void)
{
    A b;
    b.i = 20;
    f() = b;
    return 0;
}

A f()
{
    A a;
    return a;
}