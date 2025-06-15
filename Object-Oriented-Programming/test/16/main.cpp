#include "MyString.h"

int main(void)
{
    MyString a;
    int size;
    std::cout << "请输入字符串的大小：";
    std::cin >> size;
    a.input(size);
    MyString b;
    b = a;
    b.print();
    return 0;
}