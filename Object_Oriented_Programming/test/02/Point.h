#ifndef __Point_H__
#define __Point_H__

class Point
{
    public:
        Point(double x, double y);
        double distanceToOrigin();
    private:
        double x, y;
};

#endif