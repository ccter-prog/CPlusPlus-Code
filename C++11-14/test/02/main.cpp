#include "Menu.h"

int main(void)
{
    bool control = true;
    do
    {
        int select = 4;
        std::cout << "1.整型 2.浮点型 3.字符型 4.退出，请选择要存储的链表类型：";
        std::cin >> select;
        try
        {
            switch (select)
            {
                case 1:
                {
                    enter();
                    Menu<int> a;
                    Node<int> node;
                    a.LinkedListAPI_select();
                    break;
                }
                case 2:
                {
                    enter();
                    Menu<double> f;
                    Node<double> node;
                    f.LinkedListAPI_select();
                    break;
                }
                case 3:
                {
                    enter();
                    Menu<std::string> s;
                    Node<std::string> node;
                    s.LinkedListAPI_select();
                    break;
                }
                case 4:
                {
                    enter();
                    std::cout << "退出" << "\n";
                    control = false;
                    break;
                }
                default:
                {
                    std::cout << "无效输入，请重新输入！" << "\n";
                    select = 4;
                    break;
                }
            }
        }
        catch (...)
        {
            std::cout << "未知错误，程序终止" << "\n";
            goto end;
        }
    } while (control);
end:
    return 0;
}