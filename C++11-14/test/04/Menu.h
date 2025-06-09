#ifndef __Menu_H__
#define __Menu_H__

#include "Calculation.h"
#include "enter.h"

template <typename T>
inline T add(void)
{
    T a, b;
    T ret;
    Calculation<T> c;
    std::cout << "请输入要相加的两位数(1)：";
    std::cin >> a;
    std::cout << "请输入要相加的两位数(2)：";
    std::cin >> b;
    ret = c.add(a, b);
    enter();
    std::cout << "结果为：" << ret << "\n";
    enter();
    return ret;
}

template <typename T>
inline T minus(void)
{
    T a, b;
    T ret;
    Calculation<T> c;
    std::cout << "请输入要相减的两位数(1)：";
    std::cin >> a;
    std::cout << "请输入要相减的两位数(2)：";
    std::cin >> b;
    ret = c.minus(a, b);
    enter();
    std::cout << "结果为：" << ret << "\n";
    enter();
    return ret;
}

template <typename T>
inline T multiplication(void)
{
    T a, b;
    T ret;
    Calculation<T> c;
    std::cout << "请输入要相乘的两位数(1)：";
    std::cin >> a;
    std::cout << "请输入要相乘的两位数(2)：";
    std::cin >> b;
    ret = c.multiplication(a, b);
    enter();
    std::cout << "结果为：" << ret << "\n";
    enter();
    return ret;
}

template <typename T>
inline T division(void)
{
    T a, b;
    T ret;
    Calculation<T> c;
    std::cout << "请输入要相除的两位数(1)：";
    std::cin >> a;
    std::cout << "请输入要相除的两位数(2)：";
    std::cin >> b;
    ret = c.division(a, b);
    enter();
    std::cout << "结果为：" << ret << "\n";
    enter();
    return ret;
}

#endif