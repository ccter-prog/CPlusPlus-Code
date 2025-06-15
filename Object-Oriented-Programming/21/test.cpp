#include <iostream>

int &f(int &c);

int main(void)
{
    int y;
    int &x = y;
    y = 0;
    std::cout << x << "\n";
    x = 1;
    std::cout << y << "\n";
    f(x) = 300;
    std::cout << y << "\n";
    return 0;
}

int &f(int &c)
{
    c = 5;
    return c;
}