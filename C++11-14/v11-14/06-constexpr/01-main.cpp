#include <print>

#define PI 3.1415926535

constexpr double calculate_circle_area(double radius)
{
    return PI * radius * radius;
}

int main()
{
    constexpr double area_compile = calculate_circle_area(5.0);
    double radius = 10.0;
    double area_runtime = calculate_circle_area(radius);
    std::println("Compile-time area (r=5): {}", area_compile);
    std::println("Runtime area (r=10): {}", area_runtime);
    return 0;
}