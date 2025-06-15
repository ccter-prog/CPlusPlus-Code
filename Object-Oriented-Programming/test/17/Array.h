#ifndef __Array_H__
#define __Array_H__

#include <iostream>

/* 定义一个 Array 类，该类有一个私有成员 int* data 指向一个动态分配的整数数组，
以及一个 size 成员表示数组的大小。为这个类重载赋值运算符，要处理好动态数组的复制和内存管理，避免浅拷贝导致的问题。 */

class Array
{
    public:
        Array();
        Array(int size);
        Array &operator =(const Array &p);
        void print(void);
        virtual ~Array();
    private:
        int *date;
        int size;
};

inline Array::Array() : date(nullptr), size(0)
{}

inline Array::Array(int size) : date(nullptr), size(size)
{
    date = new int[size];
    for(int i = 0; i < size; i++)
    {
        std::cout << "请输入数字：";
        std::cin >> date[i];
    }
}

inline Array &Array::operator =(const Array &p)
{
    date = new int[p.size];
    size = p.size;
    for(int i = 0; i < size; i++)
    {
        date[i] = p.date[i];
    }
    return *this;
}

inline void Array::print(void)
{
    int control = 0;
    for(int i = 0; i < size; i++)
    {   if(control <= 5)
        {
            std::cout << date[i] << " ";
            control++;
        }
        else
        {
            std::cout << "\n" << date[i] << " ";
            control = 1;
        }
    }
    putchar('\n');
}

inline Array::~Array()
{
    if(date)
    {
        delete[] date;
        date = nullptr;
    }
    std::cout << "调用析构" << "\n";
}

#endif