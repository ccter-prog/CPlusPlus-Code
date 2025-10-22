#pragma once

#include <vector>
#include <iostream>
#include <utility>

template <typename T>
class ContainerWrapper
{
    public:
        void print() const;
    public:
        template <typename U>
        void push(U&& a);
    private:
        std::vector<T> items;
};

template <typename T>
inline void ContainerWrapper<T>::print() const
{
    for (const auto& item : items)
    {
        std::cout << item << " ";
    }
    std::cout.put('\n');
}

template <typename T>
template <typename U>
inline void ContainerWrapper<T>::push(U&& a)
{
    items.push_back(std::forward<U>(a));
}