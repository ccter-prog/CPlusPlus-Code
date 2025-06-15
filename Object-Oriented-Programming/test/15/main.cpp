#include "Point.h"

int main(void)
{
    Point a(10, 20);
    Point b(a);
    b = a;
    b.print();
    return 0;
}