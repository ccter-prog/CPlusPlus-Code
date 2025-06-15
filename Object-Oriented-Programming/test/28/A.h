#ifndef __A_H__
#define __A_H__

#include <iostream>

template <class T>
class A
{
    public:
        A();
        void print(T value);
};

template <class T>
inline A<T>::A()
{}

template <class T>
inline void A<T>::print(T value)
{
    std::cout << value << "\n";
}

#endif