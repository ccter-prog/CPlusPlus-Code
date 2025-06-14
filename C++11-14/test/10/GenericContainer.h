#ifndef __GenericContainer_H__
#define __GenericContainer_H__

#include <iostream>
#include <vector>
#include <list>

/* 定义一个模板类 GenericContainer：
模板模板参数 Container（接受任意数量参数）
成员：Container<int, std::allocator<int>> 的实例
方法：push(int), print() */

template <template <typename...> class Container>
class GenericContainer
{
    public:
        GenericContainer() = default;
        void push(int num);
        void print() const;
        virtual ~GenericContainer() = default;
    private:
        Container<int, std::allocator<int>> _container;
};

template <template <typename...> class Container>
inline void GenericContainer<Container>::push(int num)
{
    _container.push_back(num);
}

template <template <typename...> class Container>
inline void GenericContainer<Container>::print() const
{
    for (auto i : _container)
    {
        std::cout << i << " ";
    }
    std::cout.put('\n');
}

#endif