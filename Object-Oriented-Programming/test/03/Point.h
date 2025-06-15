#ifndef __Point_H__
#define __Point_H__

/*实现一个“矩形”类‌：
定义一个“矩形”类，包含两个点对象（分别表示矩形的左下角和右上角）。
提供成员函数来计算矩形的面积和周长。
在main函数中创建一个矩形对象，并计算并打印该矩形的面积和周长。*/

class Point
{
    public:
        Point(double x, double y);
        double getX();
        double getY();
    private:
        double x, y;
};

#endif