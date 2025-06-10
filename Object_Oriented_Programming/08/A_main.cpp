#include <stdio.h>
#include "A.h"

int main(void)
{
    int i = 100;
    A a(1);
    printf("a = %p\n", &a);
    a.f();
    A aa(3);
    A y[2] = {A(10)};
    return 0;
}