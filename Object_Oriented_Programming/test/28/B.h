#ifndef __B_H__
#define __B_H__

#include "A.h"

template <class T>
class B : public A<T>
{
    public:
        B();
        void show(T value);
};

template <class T>
inline B<T>::B()
{}

template <class T>
inline void B<T>::show(T value)
{
    A<T>::print(value);
}

#endif