#include <print>
#include <chrono>

int main()
{
    std::chrono::duration<int> birthday_day(138);
    auto today_day = std::chrono::system_clock::now();
    auto result = birthday_day - today_day;
    return 0;
}