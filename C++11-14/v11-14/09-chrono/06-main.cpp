#include "FPSCounter.h"
#include <print>
#include <thread>
#include <cstdlib>

int main()
{
    FPSCounter fps;
    std::println("开始FPS测试(模拟300帧)...");
    std::println("每帧延迟: 10-30毫秒\n");
    for (int i = 0; i < 300; ++i)
    {
        fps.update();
        int delay_ms = 10 + (std::rand() % 21);
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
        if (i % 30 == 0)
        {
            std::println("[帧{}] FPS: {:.2f} | 帧时间: {:.2f}ms", i, fps.get_fps(), fps.get_frame_time_ms());
        }
    }
    std::println("\n{}", fps.get_stats());
    return 0;
}