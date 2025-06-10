#ifndef __Rectangle_H__
#define __Rectangle_H__

#include "Point.h"

class Rectangle
{
    public:
        Rectangle(Point bl, Point tr);
        double area(); //计算面积
        double perimeter(); //计算周长
    private:
        Point bottomLeft, topRight;
};

#endif