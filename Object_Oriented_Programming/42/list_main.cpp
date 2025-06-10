#include <iostream>
#include <list>
#include <string>

int main(void)
{
    std::list<std::string> s;
    s.push_back("hello");
    s.push_back("world");
    s.push_front("tide");
    s.push_front("crimson");
    s.push_front("alabama");
    std::list<std::string>::iterator p;
    for (p = s.begin(); p != s.end(); p++)
    {
        std::cout << *p << " ";
    }
    std::cout.put('\n');
    return 0;
}