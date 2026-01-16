#include <chrono>
#include <print>

void time_conversions()
{
    std::chrono::duration<double> cs(2.5);
    std::println("{}", std::chrono::duration_cast<std::chrono::milliseconds>(cs).count());
    std::println("{}", std::chrono::duration_cast<std::chrono::microseconds>(cs).count());
    std::println("{}", std::chrono::duration_cast<std::chrono::seconds>(cs).count());
    auto ms = std::chrono::minutes(1) + std::chrono::seconds(30);
    std::println("{}", std::chrono::duration_cast<std::chrono::seconds>(ms).count());
}

int main()
{
    time_conversions();
    return 0;
}