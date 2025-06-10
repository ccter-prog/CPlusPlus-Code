#include "Rectangle.h"
#include <iostream>

using namespace std;

int main(void)
{
    Point bl(0, 0); //左下角
    Point tr(4, 3); //右上角
    Rectangle rect(bl, tr);
    cout << "The area of the rectangle is: " << rect.area() << "\n";    //输出矩形的面积
    cout << "The perimeter of the rectangle is: " << rect.perimeter() << "\n";  //输出矩形的周长
    return 0;
}