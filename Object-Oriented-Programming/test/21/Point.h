#ifndef __Point_H__
#define __Point_H__

#include <iostream>

/* 创建一个名为 Point 的类，用于表示二维平面上的一个点，包含 x 和 y 两个坐标。
实现前置和后置递增、递减运算符的重载，递增和递减操作分别对 x 和 y 坐标进行相应的改变。 */

class Point
{
    public:
        Point(int x, int y);
        Point(const Point &p);
        Point &operator ++();
        Point operator ++(int);
        Point &operator --();
        Point operator --(int);
        void print(void) const;
    private:
        int x, y;
};

inline Point::Point(int x, int y) : x(x), y(y)
{}

inline Point::Point(const Point &p) : x(p.x), y(p.y)
{}

inline Point &Point::operator ++()
{
    ++x;
    ++y;
    return *this;
}

inline Point Point::operator ++(int)
{
    Point temp(*this);
    ++x;
    ++y;
    return temp;
}

inline Point &Point::operator --()
{
    --x;
    --y;
    return *this;
}

inline Point Point::operator --(int)
{
    Point temp(*this);
    --x;
    --y;
    return temp;
}

inline void Point::print(void) const
{
    std::cout << x << ", " << y << "\n";
}

#endif