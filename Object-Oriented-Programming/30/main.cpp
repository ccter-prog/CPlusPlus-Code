#include "A.h"
#include "B.h"

int main(void)
{
    A a(10);
    A b(a.operator +(3));
    b.print();
    A c(operator -(10, 5));
    c.print();
    return 0;
}