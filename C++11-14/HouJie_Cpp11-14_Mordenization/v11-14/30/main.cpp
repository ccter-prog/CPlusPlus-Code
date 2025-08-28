#include <iostream>
#include <string>
#include <functional>

int main()
{
    void* p = (void*)(new int(100));
    std::cout << std::hash<int>()(123) << '\n';
    std::cout << std::hash<long>()(123L) << '\n';
    std::cout << std::hash<std::string>()(std::string("Ace")) << '\n';
    std::cout << std::hash<const char*>()("Ace") << '\n';
    std::cout << std::hash<char>()('A') << '\n';
    std::cout << std::hash<float>()(3.141592653f) << '\n';
    std::cout << std::hash<double>()(3.141592653) << '\n';
    std::cout << std::hash<void*>()(p) << '\n';
    return 0;
}