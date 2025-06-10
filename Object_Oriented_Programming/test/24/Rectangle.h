#ifndef __Rectangle_H__
#define __Rectangle_H__

#include "Shape.h"

class Rectangle : public Shape
{
    public:
        Rectangle(double l, double w);
        double area() const override;
    private:
        double length;
        double width;
};

inline Rectangle::Rectangle(double l, double w) : length(l), width(w)
{}

inline double Rectangle::area() const
{
    return length * width;
}

#endif