#include "print.h"
#include <bitset>

int main(void)  // <- This's main function.
{
    print(7.5, "hello", std::bitset<16>(377), 42); 
    std::cout << "Hello World" << "\n";
    return 0;
}
