#include "Friend.h"

X::X()
{
    i = 0;
}

void g(X *x, int i)
{
    x -> i = i;
}

void Y::f(X *x)
{
    x -> i = 47;
}