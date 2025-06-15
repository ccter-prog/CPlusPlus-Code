#include "Point.h"

int main(void)
{
    Point a(1, 2);
    Point b(a);
    b.print();
    return 0;
}