#ifndef __printContainer_H__
#define __printContainer_H__

#include <iostream>
#include <vector>
#include <list>

/* 创建一个函数模板 printContainer，它接受模板模板参数：
第一个模板参数：容器模板（如 std::vector, std::list）
第二个模板参数：元素类型 T
函数参数：const Container<T>& 类型的容器
函数功能：遍历并打印容器所有元素（用空格分隔）。 */

template <template <typename, typename...> class Container, typename T>
void printContainer(const Container<T> &c)
{
    for (auto i : c)
    {
        std::cout << i << " ";
    }
    std::cout.put('\n');
}

#endif