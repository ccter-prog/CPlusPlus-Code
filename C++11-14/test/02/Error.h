#ifndef __Error_H__
#define __Error_H__

#include <iostream>

class Error
{
    public:
        Error();
        static void input_error();
        static void search_error();
        static void del_error();
        static void head_pointer_error();
};
inline Error::Error()
{}

inline void Error::input_error()
{
    std::cout << "内存分配失败" << "\n";
}

inline void Error::search_error()
{
    std::cout << "没找到要找的数据" << "\n";
}

inline void Error::del_error()
{
    std::cout << "没有找到这个数据，无法删除" << "\n";
}

inline void Error::head_pointer_error()
{
    std::cout << "请先添加数据！" << "\n";
}

#endif