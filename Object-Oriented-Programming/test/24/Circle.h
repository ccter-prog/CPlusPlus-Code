#ifndef __Circle_H__
#define __Circle_H__

#include "Shape.h"

extern const double PI;

class Circle : public Shape
{
    public:
        Circle(double r);
        virtual double area() const override;
    private:
        double radius;
};

inline Circle::Circle(double r) : radius(r)
{}

inline double Circle::area() const
{
    return PI * radius * radius;
}

#endif