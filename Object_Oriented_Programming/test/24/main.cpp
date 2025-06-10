#include "Circle.h"
#include "Rectangle.h"
#include "UpCast.h"

int main(void)
{
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    upcast(&circle);
    upcast(&rectangle);
    return 0;
}