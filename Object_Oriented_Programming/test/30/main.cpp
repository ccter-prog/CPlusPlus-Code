#include <iostream>
#include "A.h"

int main(void)
{
    int temp;
    try
    {
        std::cout << "请输入数字：";
        std::cin >> temp;
        if (temp < 0)
        {
            throw "错误";
        }
    }
    catch (const char *s)
    {
        std::cout << "调用catch" << "\n";
    }
    return 0;
}