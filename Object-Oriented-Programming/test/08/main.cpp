#include <iostream>
#include "pList.h"

int main()
{
    int control = 1;
    std::string str;
    pList a;
    do
    {
        std::cout << "1.录入信息 2.输出信息 3.输出至文件 4.搜索信息 5.修改信息 6.删除信息 0.退出，请输入：";
        std::cin >> control;
        switch (control)
        {
            case 1:
                a.write();
                break;
            case 2:
                a.print();
                break;
            case 3:
                std::cout << "请输入要输出进的文件名称：";
                std::cin >> str;
                a.print_file(str);
                break;
            case 4:
                if (a.search() != true)
                {
                    std::cout << "没找到" << "\n";
                }
                break;
            case 5:
                a.modify();
                break;
            case 6:
                if (a.del() != true)
                {
                    std::cout << "删除失败" << "\n";
                }
                break;
            case 0:
                std::cout << "退出" << "\n";
                break;
            default:
                std::cout << "不是有效操作，请重新输入" << "\n";
                control = 1;
                break;
        }
    } while (control);
    return 0;
}