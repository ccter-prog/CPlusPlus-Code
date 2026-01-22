#include <print>
#include <tuple>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

std::tuple<bool, std::string, int> process_data(const std::string& input)
{
    if (input.empty())
    {
        return {false, "输入不能为空", -1};
    }
    if (input.length() < 5)
    {
        return {false, "输入太短", static_cast<int>(input.length())};
    }
    int processed_chars = static_cast<int>(input.length());
    return {true, "处理成功", processed_chars};
}

void multiple_swap()
{
    int a = 10, b = 20, c = 30;
    std::string s1("Hello");
    std::string s2("World");
    std::println("交换前:\na={}, b={}, c={}\ns1={}, s2={}", a, b, c, s1, s2);
    std::tie(a, b, c, s1, s2) = std::make_tuple(b, c, a, s2, s1);
    std::println("交换后:\na={}, b={}, c={}\ns1={}, s2={}", a, b, c, s1, s2);
}

std::tuple<double, double, double, double> calculate_stats(const std::vector<double>& data)
{
    if (data.empty())
    {
        return std::make_tuple(0.0, 0.0, 0.0, 0.0);
    }
    double min = *std::min_element(data.begin(), data.end());
    double max = *std::max_element(data.begin(), data.end());
    double sum = std::accumulate(data.begin(), data.end(), 0.0);
    double avg = sum / static_cast<double>(data.size());
    return std::make_tuple(min, max, avg, sum);
}

void modify_tuple()
{
    auto person = std::make_tuple(25, 1.75, "张三");
    std::get<0>(person) = 26;
    std::get<1>(person) = 1.76;
    std::get<const char*>(person) = "张三丰";
    auto [age, height, name] = person;
    std::println("{}现在{}岁, {}米", name, age, height);
}

void access_tuple_values()
{
    auto person = std::make_tuple(25, 1.75, "张三");

    // 方法1: std::get<索引>(编译时索引)
    // int age = std::get<0>(person);
    // double height = std::get<1>(person);
    // std::string name(std::get<2>(person));
    // std::println("{}: {}岁, {}米", name, age, height);

    // 方法2: C++17结构化绑定
    // auto [age2, height2, name2] = person;
    // std::println("{}: {}岁, {}米", name2, age2, height2);

    // 方法3: 按类型获取(类型必须唯一)
    auto name3 = std::get<const char*>(person);
    std::println("{}", name3);
}

int main()
{
    auto result1 = process_data("");
    auto [success1, message1, count1] = result1;
    std::println("结果1: {} | 信息: {} | 计数: {}", success1 ? "成功" : "失败", message1, count1);
    auto [success2, message2, count2] = process_data("hello");
    std::println("结果2: {} | 信息: {} | 计数: {}", success2 ? "成功" : "失败", message2, count2);


    // multiple_swap();


    // std::vector<double> scores {85.5, 92.0, 78.5, 88.0, 95.5};
    // auto [min_score, max_score, avg_score, total] = calculate_stats(scores);
    // std::println("成绩统计:\n最低分: {}\n最高分: {}\n平均分: {}\n总分: {}", min_score, max_score, avg_score, total);


    // modify_tuple();


    // access_tuple_values();


    // // 方法1: make_tuple(自动推导类型)
    // auto person1 = std::make_tuple(25, 1.75, "张三");

    // // 方法2: 直接构造
    // std::tuple<int, double, std::string> person2(30, 1.80, "李四");

    // // 方法3: C++17结构化绑定(最方便)
    // auto person3 = std::make_tuple(28, 1.68, "王五");

    return 0;
}