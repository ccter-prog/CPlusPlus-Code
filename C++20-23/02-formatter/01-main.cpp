#include "Point.h"
#include <format>
#include <print>

int main()
{
    Point p {3.0, 4.0};
    std::println("点坐标: {}", p);
    Point p2 {1.5, 2.5};
    std::println("点1: {}, 点2: {}", p, p2);
    return 0;
}