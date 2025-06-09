#ifndef __Calculation_H__
#define __Calculation_H__

#include <iostream>

template <typename T>
class Calculation
{
    public:
        Calculation();
        T add(T a, T b);    // 加法
        T minus(T a, T b);  // 减法
        T multiplication(T a, T b); // 乘法
        T division(T a, T b);   // 除法
};

template <typename T>
inline Calculation<T>::Calculation()
{}

template <typename T>
inline T Calculation<T>::add(T a, T b)
{
    return a + b;
}

template <typename T>
inline T Calculation<T>::minus(T a, T b)
{
    return a - b;
}

template <typename T>
inline T Calculation<T>::multiplication(T a, T b)
{
    return a * b;
}

template <typename T>
inline T Calculation<T>::division(T a, T b)
{
    if (b)
    {
        return a / b;
    }
    else
    {
        throw std::runtime_error("被除数不能为0");
    }
}

#endif