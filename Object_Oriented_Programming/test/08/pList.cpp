#include <iostream>
#include <fstream>
#include "pList.h"

bool pList::write(void)
{
    bool ret = false;
    Node *p = new Node;
    std::cout << "请输入姓名：";
    std::cin >> p -> name;
    std::cout << "请输入性别：";
    std::cin >> p -> gender;
    std::cout << "请输入年龄：";
    std::cin >> p -> age;
    if (head)
    {
        tail -> next = p;
        tail = p;
    }
    else
    {
        head = p;
        tail = p;
    }
    ret = true;
    if (control == 0)
    {
        control = 1;
    }
    return ret;
}

bool pList::search(void)
{
    bool ret = false;
    if (!not_data())
    {
        std::string temp;
        std::cout << "请输入要查找的名字：";
        std::cin >> temp;
        for (list = head; list; list = list -> next)
        {
            if (temp == list -> name)
            {
                std::cout << "姓名：" << list -> name << "\n";
                std::cout << "性别：" << list -> gender << "\n";
                std::cout << "年龄：" << list -> age << "\n";
                ret = true;
                break;
            }
        }
    }
    return ret;
}

bool pList::modify(void)
{
    bool ret = false;
    if (search())
    {
        std::cout << "请输入修改后的姓名：";
        std::cin >> list -> name;
        std::cout << "请输入修改后的性别：";
        std::cin >> list -> gender;
        std::cout << "请输入修改后的年龄：";
        std::cin >> list -> age;
        std::cout << "OK" << "\n";
        ret = true;
    }
    else
    {
        std::cout << "Not search" << "\n";
    }
    return ret;
}

bool pList::del(void)
{
    bool ret = false;
    if (search())
    {
        Node *p, *q;
        for (q = nullptr, p = head; p != list; q = p, p = p -> next);
        if (q)
        {
            q -> next = p -> next;
        }
        else
        {
            head = p -> next;
        }
        delete p;
        std::cout << "OK" << "\n";
        ret = true;
        if (head == nullptr)
        {
            control = 0;
        }
    }
    else
    {
        std::cout << "Not search" << "\n";
    }
    return ret;
}

bool pList::print_file(std::string s)
{
    bool ret = false;
    if (!not_data())
    {
        std::ofstream fout;
        fout.open(s);
        if (!fout.is_open())
        {
            std::cout << "Error!" << "\n";
        }
        else
        {
            for (list = head; list; list = list -> next)
            {
                fout << "姓名：" << list -> name << "\n";
                fout << "性别：" << list -> gender << "\n";
                fout << "年龄：" << list -> age << "\n";
            }
            fout.close();
            std::cout << "文件输出成功" << "\n";
            ret = true;
        }
    }
    return ret;
}