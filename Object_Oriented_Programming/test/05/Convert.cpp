#include <iostream>
#include "Convert.h"

using namespace std;

Convert::Convert()
{}

char Convert::convert()
{
    /*输入一个字符，如果是小写字母则转成对应的大写字母，否则如果是大写字母则输出对应的小写字母。*/
    cout << "请输入一个字符：";
    c = getchar();
    if(c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    else if(c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    else
    {
        cout << "不是英文字母" << "\n";
    }
    return c;
}