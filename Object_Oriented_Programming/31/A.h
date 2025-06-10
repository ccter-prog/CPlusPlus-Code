#ifndef __A_H__
#define __A_H__

#include <iostream>

class A
{
    public:
        A(int size);
        int &operator [](int index);
        void print(void);
        ~A();
    private:
        int m_size;
        int *m_array;
};

inline A::A(int size) : m_size(size)
{
    m_array = new int[size];
}

inline int &A::operator [](int index)
{
    return m_array[index];
}

inline void A::print(void)
{
    for(int i = 0; i < m_size; i++)
    {
        std::cout << m_array[i] << "\n";
    }
}

inline A::~A()
{
    delete[] m_array;
}

#endif