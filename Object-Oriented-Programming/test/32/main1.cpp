#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        int temp;
        std::cout << "请输入数字：";
        std::cin >> temp;
        v.push_back(temp);
    }
    int sum = 0;
    std::vector<int>::iterator p;
    for (p = v.begin(); p != v.end(); p++)
    {
        sum += *p;
    }
    std::cout << "sum = " << sum << "\n";
    return 0;
}