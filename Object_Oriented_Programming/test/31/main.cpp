#include <iostream>
#include "A.h"

int main(void)
{
    try
    {
        A a;
    }
    catch (std::bad_alloc &e)
    {
        std::cout << "请求内存过大" << "\n";
    }
    return 0;
}