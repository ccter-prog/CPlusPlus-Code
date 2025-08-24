#include <iostream>
#include <string>

int main()
{
    std::string s1("Hello ");
    std::string s2("World");
    s1 + s2 = s2;
    std::cout << "s1:" << s1 << '\n';
    std::cout << "s2:" << s2 << '\n';
    std::string() = "World";
    return 0;
}