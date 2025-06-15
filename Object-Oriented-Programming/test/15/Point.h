#ifndef __Point_H__
#define __Point_H__

#include <iostream>

/* 创建一个名为 Point 的类，该类包含两个私有成员变量 x 和 y，
分别表示二维平面上点的横纵坐标。为这个类重载赋值运算符 =，确保在进行赋值操作时，对象的 x 和 y 成员能够正确复制。 */

class Point
{
    public:
        Point(int a, int b);
        Point &operator =(const Point &p);
        void print(void);
    private:
        int x;
        int y;
};

inline Point::Point(int a, int b) : x(a), y(b)
{}

inline Point &Point::operator =(const Point &p)
{
    x = p.x;
    y = p.y;
    std::cout << "调用了赋值运算符重载" << "\n";
    return *this;
}

inline void Point::print(void)
{
    std::cout << "x = " << x << ", y = " << y << "\n";
}

#endif