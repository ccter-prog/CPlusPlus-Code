#include <iostream>

namespace Outer
{
    int x = 10;
    namespace Inner
    {
        int y = 20;
        void show()
        {
            std::cout << "x = " << x << ", y = " << y << '\n';
        }
    }
}

int main()
{
    std::cout << Outer::Inner::y << '\n';
    Outer::Inner::show();
    return 0;
}