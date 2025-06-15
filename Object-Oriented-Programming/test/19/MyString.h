#ifndef __MyString_H__
#define __MyString_H__

#include <iostream>

/* 创建一个名为 MyString 的类，用于管理字符串。实现以下功能：
构造函数：接受一个 const char* 类型的参数，用于初始化字符串。
析构函数：释放动态分配的字符串内存。
下标运算符重载：实现 [] 运算符重载，使得可以通过下标访问和修改字符串中的字符。 */

class MyString
{
    public:
        MyString(const char *s);
        char &operator [](int index);
        void print(void) const;
        virtual ~MyString();
    private:
        char *str;
};

inline MyString::MyString(const char *s) : str(nullptr)
{
    int size = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        size++;
    }
    size++;
    str = new char[size];
    for (int i = 0; i < size; i++)
    {
        str[i] = s[i];
    }
}

inline char &MyString::operator [](int index)
{
    return str[index];
}

inline void MyString::print(void) const
{
    std::cout << str << "\n";
}

inline MyString::~MyString()
{
    if (str)
    {
        delete[] str;
        str = nullptr;
    }
}

#endif