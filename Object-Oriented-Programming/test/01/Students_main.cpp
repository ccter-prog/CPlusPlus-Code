#include "Students.h"

/*定义一个简单的“学生”类‌：
包含私有成员变量：学号（int类型）、姓名（string类型）。
包含公有成员函数：用于设置学号和姓名的setter函数，以及用于获取学号和姓名的getter函数。
在main函数中创建一个学生对象，并测试这些成员函数。
在上一个“学生”类的基础上，增加一个成绩（float类型）的私有成员变量。
增加一个用于设置成绩的setter函数和一个用于获取成绩的getter函数。
在main函数中修改学生对象的成绩，并打印出来。*/

int main(void)
{
    Students student;
    student.setter();
    student.getter();
    student.modify();
    return 0;
}