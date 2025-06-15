#include <iostream>
#include "A.h"
#include "B.h"

int main(void)
{
    A a;
    B b;
    std::cout << a.i << " " << b.i << "\n";
    std::cout << sizeof(a) << " " << sizeof(b) << "\n";
    int *p = (int *)&a;
    std::cout << p << " " << *p << "\n";
    *p = 25;
    std::cout << a.i << "\n";
    p = (int *)&b;
    std::cout << p << " " << *p << "\n";
    std::cout << a.i << " " << b.i << "\n";
    p++;
    b.f();
    return 0;
}