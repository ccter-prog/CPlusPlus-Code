#include <tuple>
#include <string>
#include <vector>
#include <print>

std::tuple<std::string, int, double, char> get_top_student(const std::vector<std::tuple<std::string, int, double>>& students)
{
    std::tuple<std::string, int, double, char> result("", 0, 0.0, '\0');
    auto& [name, age, score, level] = result;
    for (auto& i : students)
    {
        if (score < std::get<2>(i))
        {
            score = std::get<2>(i);
            name = std::get<0>(i);
            age = std::get<1>(i);
        }
    }
    if (score >= 90)
    {
        level = 'A';
    }
    else if (score >= 80 && score <= 89)
    {
        level = 'B';
    }
    else if (score >= 70 && score <= 79)
    {
        level = 'C';
    }
    else
    {
        level = 'D';
    }
    return result;
}

int main()
{
    std::vector<std::tuple<std::string, int, double>> students {{"张三", 15, 85}, {"李四", 18, 89}, {"王五", 20, 76}};
    std::tuple<std::string, int, double, char> result = get_top_student(students);
    auto [name, age, score, level] = result;
    std::println("name={}\nage={}\nscore={}\nlevel={}", name, age, score, level);
    return 0;
}