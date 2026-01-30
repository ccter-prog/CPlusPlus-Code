#pragma once

#include <format>
#include <cmath>

class Point
{
    public:
        // 普通成员函数
        double magnitude() const;
    public:
        // 普通成员变量
        double m_x;
        double m_y;
};

template <>
class std::formatter<Point>
{
    public:
        friend class std::formatter<Point>;
    public:
        constexpr auto parse(std::format_parse_context& ctx);
        auto format(const Point& p, std::format_context& ctx) const;
};

inline double Point::magnitude() const
{
    return std::sqrt(m_x * m_x + m_y * m_y);
}

inline constexpr auto std::formatter<Point>::parse(std::format_parse_context& ctx)
{
    return ctx.begin();
}

inline auto std::formatter<Point>::format(const Point& p, std::format_context& ctx) const
{
    return std::format_to(ctx.out(), "({}, {})",  p.m_x, p.m_y);
}