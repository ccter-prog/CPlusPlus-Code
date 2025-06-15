#include <iostream>
#include "Students.h"

using namespace std;

void Students::setter()
{
    cout << "请输入姓名：";
    cin >> name;
    cout << "请输入学号：";
    cin >> number;
    cout << "请输入成绩：";
    cin >> score;
}

void Students::getter()
{
    cout << "你的姓名是：" << name << "\n";
    cout << "你的学号是：" << number << "\n";
    cout << "你的成绩是：" << score << "\n";
}

void Students::modify()
{
    cout << "修改成绩：";
    cin >> score;
    cout << "修改完成" << "\n";
    getter();
}