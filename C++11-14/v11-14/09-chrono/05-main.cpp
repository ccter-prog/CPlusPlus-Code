#include <print>
#include <chrono>
#include <ctime>

int main()
{
    int days = 135;
    auto birthday_day = std::chrono::hours(days * 24);
    auto hourses = birthday_day.count();
    std::println("距离生日还有：{} 天", hourses / 24);

    auto minutes = std::chrono::duration_cast<std::chrono::minutes>(birthday_day);
    std::println("{} 分钟", minutes.count());
    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(birthday_day);
    std::println("{} 秒", seconds.count());
    auto weeks = std::chrono::duration_cast<std::chrono::hours>(birthday_day).count() / static_cast<std::chrono::hours::rep>((24 * 7));
    std::println("{} 周", weeks);
    return 0;
}