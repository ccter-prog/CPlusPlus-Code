#ifndef __Menu_H__
#define __Menu_H__

#include <string>
#include "LinkedListAPI.h"
#include "Error.h"
#include "enter.h"

template <typename T>
class Menu
{
    public:
        Menu();
        void LinkedListAPI_select();
};

template <typename T>
inline Menu<T>::Menu()
{}

template <typename T>
void Menu<T>::LinkedListAPI_select()
{
    LinkedListAPI<T> a;
    bool control = true;
    int count = 0;
    do
    {
        int select = 6;
        std::cout << "1.添加 2.查找 3.更改 4.删除 5.输出 6.退出，请选择：";
        std::cin >> select;
        try
        {
            switch (select)
            {
                case 1:
                {
                    bool ret = false;
                    T temp;
                    enter();
                    std::cout << "请输入要添加的数据：";
                    std::cin >> temp;
                    try
                    {
                        ret = a.input(temp);
                    }
                    catch (std::bad_alloc)
                    {
                        Error::input_error();
                    }
                    if (ret)
                    {
                        std::cout << "添加成功" << "\n";
                    }
                    enter();
                    break;
                }
                case 2:
                {
                    T temp;
                    enter();
                    std::cout << "请输入要查找的数据：";
                    std::cin >> temp;
                    try
                    {
                        a.search(temp);
                    }
                    catch (std::exception &search_s)
                    {
                        std::string search_error = search_s.what();
                        if (search_error == "No search found")
                        {
                            Error::search_error();
                        }
                        else
                        {
                            throw;
                        }
                    }
                    enter();
                    break;
                }
                case 3:
                {
                    T temp;
                    T temp2;
                    bool ret = false;
                    enter();
                    std::cout << "请输入要更改的数据：";
                    std::cin >> temp;
                    std::cout << "请输入更改后的数据：";
                    std::cin >> temp2;
                    try
                    {
                        ret = a.change(temp, temp2);
                    }
                    catch (std::exception &search_s)
                    {
                        std::string change_error = search_s.what();
                        if (change_error == "No search found")
                        {
                            Error::search_error();
                        }
                        else
                        {
                            throw;
                        }
                    }
                    if (ret)
                    {
                        std::cout << "更改成功" << "\n";
                    }
                    enter();
                    break;
                }
                case 4:
                {
                    T temp;
                    bool ret = false;
                    enter();
                    std::cout << "请输入要删除的数据：";
                    std::cin >> temp;
                    try
                    {
                        ret = a.del(temp);
                    }
                    catch (std::exception &del_s)
                    {
                        std::string del_error = del_s.what();
                        if (del_error == "Delete failed")
                        {
                            Error::del_error();
                        }
                        else
                        {
                            throw;
                        }
                    }
                    if (ret)
                    {
                        std::cout << "删除成功" << "\n";
                    }
                    enter();
                    break;
                }
                case 5:
                {
                    enter();
                    a.print();
                    enter();
                    break;
                }
                case 6:
                {
                    std::cout << "退出程序，删除链表..." << "\n";
                    control = false;
                    break;
                }
                default:
                {
                    std::cout << "无效输入，请重新输入！" << "\n";
                    count++;
                    if (count >= 5)
                    {
                        enter();
                        count = 0;
                    }
                    break;
                }
            }
        }
        catch (std::exception &head_error)
        {
            std::string error = head_error.what();
            if (error == "Not Head Pointer.")
            {
                enter();
                Error::head_pointer_error();
                enter();
            }
            else
            {
                throw;
            }
        }
    } while (control);
    enter();
}

#endif