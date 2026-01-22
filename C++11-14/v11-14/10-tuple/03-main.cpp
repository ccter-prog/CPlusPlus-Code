#include <tuple>
#include <cmath>
#include <print>

constexpr std::tuple<double, double> cartesian_to_polar(double x, double y)
{
    double r = std::sqrt((x * x) + (y * y));
    double theta = std::atan2(y, x);
    return std::make_tuple(r, theta);
}

int main()
{
    auto [r, theta] = cartesian_to_polar(1, 0);
    std::println("Point (1, 0): r={}, theta={}", r, theta);
    return 0;
}