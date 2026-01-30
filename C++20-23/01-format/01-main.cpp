#include <format>
#include <print>
// #include <locale>
#include <string>
#include <cstddef>
#include <cstdlib>

int main()
{
    // 表头
    std::println("{:<10} {:>8} {:>8} {:>8} {:>8}", "姓名", "语文", "数学", "英语", "平均分");
    std::println("{0:-<10} {0:-<8} {0:-<8} {0:-<8} {0:-<8}", "");

    // 数据
    std::println("{:<10} {:>8.1f} {:>8.1f} {:>8.1f} {:>8.1f}", "张三", 85.5, 92.0, 78.5, (85.5 + 92.0 + 78.5) / 3);
    std::println("{:<10} {:>8.1f} {:>8.1f} {:>8.1f} {:>8.1f}", "李四", 90.0, 88.5, 95.0, (90.0 + 88.5 + 95.0) / 3);
    std::println("{:<10} {:>8.1f} {:>8.1f} {:>8.1f} {:>8.1f}", "王五", 78.0, 85.5, 82.0, (78.0 + 85.5 + 82.0) / 3);
    for (int i = 0; i <= 20; ++i)
    {
        std::println("\r进度: [{:<20}] {:.0f}%", std::string(static_cast<std::size_t>(i), '=') + ">", i * 5.0);
    }
    for (int j = 0; j < 10000000; ++j)
    {

    }
    std::println("完成! ");

    // int number = 255;
    // std::println("十进制: {}", number);
    // std::println("十六进制小写: {:x}", number);
    // std::println("十六进制大写: {:X}", number);
    // std::println("带0x前缀: {:#x}", number);

    // std::println("八进制: {:o}", number);
    // std::println("带0前缀: {:#o}", number);

    // std::println("二进制: {:b}", number);
    // std::println("带0b前缀: {:#b}", number);

    // std::println("正数带+号: {:+}", 42);
    // std::println("正数带空格: {: }", 42);
    // std::println("负数: {:+}", -42);

    // long big_number = 1234567890;
    // std::println("无分隔: {}", big_number);

    // std::string city("北京");
    // int temperature = 25;
    // std::string weather(std::format("城市: {0}\n温度: {1}°C\n今日{0}天气晴朗", city, temperature));
    // std::println("{}", weather);

    // int a = 10, b = 20;
    // std::string math(std::format("{} x {} = {}", a, b, a * b));
    // std::println("{}", math);

    // std::string name("张三");
    // int visit_count = 3;
    // std::string welcome(std::format("欢迎回来, {}! 这是您第{}次访问。", name, visit_count));
    // std::println("{}", welcome);
    return 0;
}