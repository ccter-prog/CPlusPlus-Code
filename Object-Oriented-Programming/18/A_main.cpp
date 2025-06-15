#include <iostream>
#include "A.h"

int main(void)
{
    A a;
    int ret;
    ret = a.f(10, 20);
    std::cout << ret << "\n";
    return 0;
}