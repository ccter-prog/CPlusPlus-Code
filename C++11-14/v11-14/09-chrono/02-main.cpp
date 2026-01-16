#include "Stopwatch.h"
#include <print>
#include <thread>

int main()
{
    Stopwatch sw;
    sw.start();
    std::println("计时开始！");
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    std::println("经过时间：{} 毫秒", sw.elapsed_ms());
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::println("现在经过：{} 毫秒", sw.elapsed_ms());
    return 0;
}