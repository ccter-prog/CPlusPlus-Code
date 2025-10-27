#include <iostream>
#include <string>
#include "Array.h"

int main()
{
    // 基本使用
    Array<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    
    // 移动语义
    Array<int> moved = std::move(nums);
    // nums 现在为空，moved 拥有数据
    
    // 拷贝语义
    Array<int> copied = moved;
    // moved 和 copied 都有独立的数据副本
    
    // 字符串数组
    Array<std::string> words;
    words.push_back("Hello");
    words.push_back("World");
    
    // 比较
    Array<int> a, b;
    a.push_back(1);
    b.push_back(1);
    if (a == b)
    {
        std::cout << "Arrays are equal" << std::endl;
    }
    return 0;
}