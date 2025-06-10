#include <iostream>
#include <cstring>
#include "Strcmp.h" 
int main(void)
{
    Strcmp a;
    char str[] = "a";
    std::cout << "This is my strcmp: " <<  a.MyStrcmp(str, "Z") << "\n";
    std::cout << "This is cstring's strcmp: " << strcmp(str, "Z") << "\n";
    return 0;
}