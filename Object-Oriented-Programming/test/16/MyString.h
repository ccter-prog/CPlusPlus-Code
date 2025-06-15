#ifndef __MyString_H__
#define __MyString_H__

#include <iostream>

/* 设计一个 MyString 类，用于处理字符串。
该类有一个私有成员指针 char* str 用于存储字符串。
为这个类重载赋值运算符，需要考虑内存管理，避免内存泄漏，同时确保字符串能够正确复制。 */

class MyString
{
    public:
        MyString();
        MyString &operator =(const MyString &p);
        MyString &input(const int size);
        void print(void) const;
        virtual ~MyString();
    private:
        char *str;
        static int control;
};

inline MyString::MyString() : str(nullptr)
{}

inline MyString &MyString::operator =(const MyString &p)
{
    str = p.str;
    return *this;
}

inline MyString &MyString::input(const int size)
{
    str = new char[size];
    getchar();
    std::cout << "请输入字符串：";
    std::cin.getline(str, size);
    return *this;
}

inline void MyString::print(void) const
{
    std::cout << str << "\n";
}

inline MyString::~MyString()
{
    if(str && control)
    {
        delete[] str;
        control = 0;
        str = nullptr;
    }
}

#endif