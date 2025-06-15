#ifndef __TestConst_H__
#define __TestConst_H__

#include <iostream>

void test()
{
    int x;
    std::cin >> x;
    const int size = x;
    int classAverage[size];
    for(int i = 0;i < size;i++)
    {
        std::cout << "请输入一个数：";
        std::cin >> classAverage[i];
    }
    for(int i = 0;i < size;i++)
    {
        std::cout << classAverage[i] << " ";
    }
    putchar('\n');
}

#endif