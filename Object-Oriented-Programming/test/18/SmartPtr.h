#ifndef __SmartPtr_H__
#define __SmartPtr_H__

#include <iostream>
#include "T.h"

/* 创建一个 SmartPtr 类，模拟智能指针的行为。
该类有一个指向对象的指针 T* ptr 和一个引用计数 int* refCount。
在重载赋值运算符时，需要正确处理引用计数的更新，确保资源的正确释放和共享。 */

class SmartPtr
{
    public:
        SmartPtr();
        SmartPtr &operator =(const SmartPtr &p);
        virtual ~SmartPtr();
    private:
        T *ptr;
        int &refCount;
        int cnt;
        int control;
};

inline SmartPtr::SmartPtr() : ptr(nullptr), refCount(cnt), cnt(0), control(1)
{}

inline SmartPtr &SmartPtr::operator =(const SmartPtr &p)
{
    ptr = new T;
    cnt = 0;
    control = 0;
    return *this;
}

inline SmartPtr::~SmartPtr()
{
    if(!control && ptr)
    {
        delete ptr;
        ptr = nullptr;
        std::cout << "调用析构" << "\n";
    }
}

#endif