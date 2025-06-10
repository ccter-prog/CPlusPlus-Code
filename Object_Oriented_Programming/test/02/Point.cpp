#include "Point.h"
#include "cmath"

/*距离 = sqrt(x^2 + y^2)，其中 x 和 y 就是点的坐标啦。*/

Point::Point(double x, double y) : x(x), y(y)
{}

double Point::distanceToOrigin()
{
    return sqrt(x * x + y * y);
}