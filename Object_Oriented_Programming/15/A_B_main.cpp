#include "B.h"

int main(void)
{
    B b;
    b.print();
    b.f();
    b.A::print(200);
    return 0;
}