#include <string>
#include "Menu.h"

int main()
{
    bool control = true;
    do
    {
        int temp = 3;
        int temp2;
        std::cout << "1.整数运算 2.浮点数运算 3.退出，请选择：";
        std::cin >> temp;
        enter();
        switch (temp)
        {
            case 1:
            {
                std::cout << "1.加法 2.减法 3.乘法 4.除法(被除数不能为0)，请输入：";
                std::cin >> temp2;
                enter();
                switch (temp2)
                {
                    case 1:
                    {
                        add<int>();
                        break;
                    }
                    case 2:
                    {
                        minus<int>();
                        break;
                    }
                    case 3:
                    {
                        multiplication<int>();
                        break;
                    }
                    case 4:
                    {
                        try
                        {
                            division<int>();
                        }
                        catch (std::exception &division_error)
                        {
                            std::string div_error = division_error.what();
                            if (div_error == "被除数不能为0")
                            {
                                enter();
                                std::cout << div_error << "\n";
                                enter();
                            }
                        }
                        break;
                    }
                    default:
                    {
                        std::cout << "无效输入，请重新输入！" << "\n";
                        enter();
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                std::cout << "1.加法 2.减法 3.乘法 4.除法(被除数不能为0)，请输入：";
                std::cin >> temp2;
                enter();
                switch (temp2)
                {
                    case 1:
                    {
                        add<double>();
                        break;
                    }
                    case 2:
                    {
                        minus<double>();
                        break;
                    }
                    case 3:
                    {
                        multiplication<double>();
                        break;
                    }
                    case 4:
                    {
                        try
                        {
                            division<double>();
                        }
                        catch (std::exception &division_error)
                        {
                            std::string div_error = division_error.what();
                            if (div_error == "被除数不能为0")
                            {
                                enter();
                                std::cout << div_error << "\n";
                                enter();
                            }
                        }
                        break;
                    }
                    default:
                    {
                        std::cout << "无效输入，请重新输入！" << "\n";
                        enter();
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                std::cout << "退出程序..." << "\n";
                control = false;
                break;
            }
            default:
            {
                std::cout << "无效输入，请重新输入！" << "\n";
                enter();
                break;
            }
        }
    } while (control);
    return 0;
}