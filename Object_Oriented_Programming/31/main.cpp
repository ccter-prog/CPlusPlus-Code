#include "A.h"

int main(void)
{
    A a(100);
    a.operator [](0) = 10;
    a.print();
    return 0;
}