#include <iostream>
#include "A.h"
#include "B.h"

int main(void)
{
    A a;
    B b;
    A *p = &a;
    int *r = (int *)&a;
    int *q = (int *)&b;
    *r = *q;
    p -> f();
    return 0;
}