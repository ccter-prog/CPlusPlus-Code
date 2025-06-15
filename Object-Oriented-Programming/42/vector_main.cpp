#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> x;
    for (int a = 0; a < 1000; a++)
    {
        x.push_back(a);
    }
    std::vector<int>::iterator p;
    for (p = x.begin(); p < x.end(); p++)
    {
        std::cout << *p << " ";
    }
    std::cout.put('\n');
    return 0;
}