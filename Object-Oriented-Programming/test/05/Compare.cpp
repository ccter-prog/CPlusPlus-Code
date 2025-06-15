#include <iostream>
#include "Compare.h"

using namespace std;

Compare::Compare()
{}

void Compare::judge()
{
    /*输入一个字符，判断它是小写英文字母、大写英文字母、数字字符还是其他字符。*/
    cout << "请输入一个字符：";
    c = getchar();
    if(c >= 'A' && c <= 'Z')
    {
        cout << "大写英文字母" << "\n";
    }
    else if(c >= 'a' && c <= 'z')
    {
        cout << "小写英文字母" << "\n";
    }
    else if(c >= '0' && c <= '9')
    {
        cout << "数字字符" << "\n";
    }
    else
    {
        cout << "其它字符" << "\n";
    }
}