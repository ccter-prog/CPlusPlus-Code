#ifndef __Wrapper_H__
#define __Wrapper_H__

#include <vector>
#include <memory>

/* 定义别名模板 WrapperOfPointer，它等价于 Wrapper<std::unique_ptr<T>> */

template <typename T>
struct Wrapper;

template <typename T>
using WrapperOfPointer = Wrapper<std::unique_ptr<T>>;

template <typename T>
struct Wrapper
{
    std::vector<T> items;
};

#endif