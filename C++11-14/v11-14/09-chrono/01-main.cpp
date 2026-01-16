#include <print>
#include <chrono>
#include <thread>

int main()
{
    std::println("开始执行...");
    auto start = std::chrono::steady_clock::now();
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    auto end = std::chrono::steady_clock::now();
    auto result = end - start;
    std::println("{}", std::chrono::duration_cast<std::chrono::milliseconds>(result));
    return 0;
}