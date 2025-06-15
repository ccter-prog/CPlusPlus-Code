#include "Rectangle.h"

Rectangle::Rectangle(Point bl, Point tr) : bottomLeft(bl), topRight(tr)
{}

double Rectangle::area()
{
    double width = topRight.getX() - bottomLeft.getX();
    double height = topRight.getY() - bottomLeft.getY();
    return width * height;
}

double Rectangle::perimeter()
{
    double width = topRight.getX() - bottomLeft.getX();
    double height = topRight.getY() - bottomLeft.getY();
    return 2 * (width + height);
}