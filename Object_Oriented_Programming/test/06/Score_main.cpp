#include <iostream>
#include "Score.h"

int main(void)
{
    int n;
    int max;
    std::cout << "请输入人数：";
    std::cin >> n;
    int arr[n];
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < len;i++)
    {
        std::cout << "请输入成绩，总共有" << len << "个，当前是第" << i + 1 << "个：";
        std::cin >> arr[i];
    }
    Score a;
    max = a.score(arr, len);
    std::cout << "最高分为：" << max <<  "\n";
    return 0;
}