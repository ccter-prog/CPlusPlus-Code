#include <expected>
#include <string>
#include <cmath>
#include <format>
#include <print>

std::expected<int, std::string> parse_string(const std::string& str)
{
    try
    {
        return std::stoi(str);
    }
    catch (...)
    {
        return std::unexpected("解析失败");
    }
}

std::expected<double, std::string> calculate_sqrt(int value)
{
    if (value < 0)
    {
        return std::unexpected("不能计算负数的平方根");
    }
    return std::sqrt(value);
}

std::expected<std::string, std::string> format_result(double value)
{
    return std::format("结果: {:.2f}", value);
}

void and_then_basic()
{
    std::string input("16");

    // 传统方式：需要多次检查
    auto parsed = parse_string(input);
    if (!parsed)
    {
        std::println("错误: {}", parsed.error());
        return;
    }
    auto sqrt_result = calculate_sqrt(*parsed);
    if (!sqrt_result)
    {
        std::println("错误: {}", sqrt_result.error());
        return;
    }
    auto formatted = format_result(*sqrt_result);
    if (!formatted)
    {
        std::println("错误: {}", formatted.error());
        return;
    }
    std::println("{}", *formatted);

    // 链式调用
    auto result = parse_string(input)
        .and_then(calculate_sqrt)
        .and_then(format_result);
    if (result)
    {
        std::println("链式结果: {}", *result);
    }
    else
    {
        std::println("链式错误: {}", result.error());
    }
}

int main()
{
    and_then_basic();
    return 0;
}