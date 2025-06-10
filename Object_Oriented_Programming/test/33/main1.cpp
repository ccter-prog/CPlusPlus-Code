#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v;
    for (int temp = 10; temp != 50; temp += 10)
    {
        v.push_back(temp);
    }
    std::vector<int>::iterator p;
    int i = 0;
    for (p = v.begin(); p != v.end(); p++, i++)
    {
        if (*p == 30)
        {
            break;
        }
    }
    std::cout << "下标为：" << i << "\n";
    std::cout.put('\n');
    int a = 10;
    a <<= 2;
    std::cout << "a = " << a << "\n";
    return 0;
}