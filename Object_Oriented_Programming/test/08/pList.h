#ifndef __pList_H__
#define __pList_H__

#include <iostream>
#include "Node.h"

class pList
{
    public:
        pList();
        bool write(void); // 录入信息并添加至链表尾部
        void print(void);  // 输出链表中的信息
        bool search(void); // 查询信息
        bool modify(void);  // 查询并修改信息
        bool not_data(void);    // 判断是否执行过添加信息
        bool print_file(std::string s); // 输出链表中的信息至文件
        bool del(void); // 查询并删除信息
        virtual ~pList();
    private:
        Node *head;
        Node *list;
        Node *tail;
        int control; // 用来控制not_data函数
};
inline pList::pList() : head(nullptr), list(nullptr), tail(nullptr), control(0)
{}

inline void pList::print(void)
{
    if (!not_data())
    {
        for (list = head; list; list = list -> next)
        {
            std::cout << "姓名：" << list -> name << "\n";
            std::cout << "性别：" << list -> gender << "\n";
            std::cout << "年龄：" << list -> age << "\n";
            if (list -> next)
            {
                putchar('\n');
            }
        }
    }
}

inline bool pList::not_data(void)
{
    bool ret = false;
    if (control == 0)
    {
        std::cout << "没有输入数据" << "\n";
        ret = true;
    }
    // else
    // {
    //     if(head == nullptr)
    //     {
    //         control = 1;
    //     }
    // }
    return ret;
}

inline pList::~pList()
{
    if (head)
    {
        Node *p;
        for(list = head; list; list = p)
        {
            p = list -> next;
            delete list;
        }
    }
}

#endif