#include "Point.h"

int main(void)
{
    Point a(2, 4);
    a.print();
    ++a;
    a.print();
    a++;
    a.print();
    --a;
    a.print();
    a--;
    a.print();
    return 0;
}