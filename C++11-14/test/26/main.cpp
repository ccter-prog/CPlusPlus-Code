#include <iostream>

namespace MyNamespace
{
    int value = 42;
    void print()
    {
        std::cout << "Hello from MyNamespace" << '\n';
    }
    class MyClass
    {};
}

int main()
{
    using namespace MyNamespace;
    std::cout << value << '\n';
    print();

    // using MyNamespace::value;
    // using MyNamespace::print;
    // std::cout << value << '\n';
    // print();

    // std::cout << MyNamespace::value << '\n';
    // MyNamespace::print();
    return 0;
}