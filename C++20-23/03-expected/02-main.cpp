#include <print>
#include <expected>
#include <string>

std::expected<int, std::string> Divide(int a, int b)
{
    if (!b)
    {
        return std::unexpected("Divide by zero!");
    }
    return a / b;
}

int main()
{
    auto result = Divide(12, 3)
        .and_then([](int result)
        {
            return Divide(result, 0);
        })
        .or_else([](const std::string& error)
        {
            std::println("Error: {}", error);
            return std::expected<int, std::string> {0};
        });
    if (result)
    {
        std::println("Result = {}", *result);
    }
    return 0;
}