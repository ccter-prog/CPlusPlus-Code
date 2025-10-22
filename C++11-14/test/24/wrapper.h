#pragma once

#include <iostream>
#include <utility>

template <typename... Args>
inline void target(Args&&... args)
{
    std::cout << "target被调用，参数数量：" << sizeof...(args) << '\n';
}

template <typename... Args>
inline void wrapper(Args&&... args)
{
    target(std::forward<Args>(args)...);
}