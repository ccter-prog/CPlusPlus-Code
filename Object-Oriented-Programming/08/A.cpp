#include <stdio.h>
#include "A.h"

void A::f()
{
    this -> i = 20;
    printf("i = %d\n", i);
    printf("i = %p\n", &i);
}

A::A(int a)
{
    i = a;
    printf("A::A()=%p\n", this);
}

void f1(int i)
{

}