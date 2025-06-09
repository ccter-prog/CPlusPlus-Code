#include "P.h"
#include "function.h"

int main()
{
    P p1(77, 5);
    P p2{77, 5};
    P p3 = {77, 5, 42};
    P p4(77, 5, 42);
    P p5 = {1, 2, 3};
    return 0;
}