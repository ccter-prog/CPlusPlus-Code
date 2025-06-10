#include "NumberDisplay.h"
#include <iostream>

using namespace std;

bool NumberDisplay::increase()
{
    bool control = false;
    int temp;
    cout << "请输入翻转条件和当前时间：";
    cin >> limit >> value;
    cout << "请输入要增加的时间：";
    cin >> temp;
    value += temp;
    while(value >= limit)
    {
        value -= limit;
        control = true;
    }
    return control;
}

void NumberDisplay::print(void)
{
    cout << "当前的时间是：" << value << "\n";
}