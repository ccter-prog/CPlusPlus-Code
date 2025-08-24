#pragma once

#include <iostream>

inline void process(int& i)
{
    std::cout << "process(int&): " << i << '\n';
}

inline void process(int&& i)
{
    std::cout << "process(int&&): " << i << '\n';
}

inline void forward(int&& i)
{
    std::cout << "forward(int&&): " << i << ", ";
    process(i);
}