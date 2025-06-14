#ifndef __DynamicArray_H__
#define __DynamicArray_H__

#include <vector>

/* 定义一个别名模板 DynamicArray，它是 std::vector<T, std::allocator<T>> 的别名。使用该别名模板声明一个存储 double 的动态数组 */

template <typename T>
using DynamicArray = std::vector<T, std::allocator<T>>;

#endif