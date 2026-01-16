#include <print>
#include <chrono>

constexpr long long sum_squares(int n)
{
    long long total = 0;
    for (int i = 1; i <= n; ++i)
    {
        total += static_cast<long long>(i) * static_cast<long long>(i);
    }
    return total;
}

void measure_function()
{
    std::println("测量 sum_squares(1000000) 的执行时间");
    auto start = std::chrono::steady_clock::now();
    long long result = sum_squares(1000000);
    auto end = std::chrono::steady_clock::now();
    auto temp = end - start;
    std::println("{}", std::chrono::duration_cast<std::chrono::milliseconds>(temp).count());
    std::println("结果：{}", result);
}

int main()
{
    measure_function();
    return 0;
}