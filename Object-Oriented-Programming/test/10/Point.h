#ifndef __Point_H__
#define __Point_H__

#include <iostream>

class Point
{
    public:
        Point(int x, int y);
        Point(const Point &p);
        void print(void) const;
    private:
        int x;
        int y;
};

inline Point::Point(int x, int y) : x(x), y (y)
{}

inline Point::Point(const Point &p)
{
    x = p.x;
    y = p.y;
}

inline void Point::print(void) const
{
    std::cout << "Point(" << x << ", " << y << ")" << "\n";
}

#endif