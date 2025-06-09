#ifndef __LinkedListAPI_H__
#define __LinkedListAPI_H__

#include <iostream>
#include <stdexcept>
#include "Node.h"

template <typename T>
class LinkedListAPI
{
    public:
        LinkedListAPI();
        bool input(T d);
        bool del(T d);
        bool change(T d, T t);
        T &search(T d);
        void print() const;
        virtual ~LinkedListAPI();
    private:
        Node<T> *head;
        Node<T> *tail;
        bool control;
};

template <typename T>
inline LinkedListAPI<T>::LinkedListAPI() : head(nullptr), tail(nullptr), control(false)
{}

template <typename T>
inline bool LinkedListAPI<T>::input(T d)
{
    bool ret = false;
    Node<T> *p = new Node<T>;
    p -> get_data() = d;
    if (head)
    {
        tail -> get_next() = p;
        tail = p;
    }
    else
    {
        head = p;
        tail = p;
        control = true;
    }
    ret = true;
    return ret;
}

template <typename T>
inline bool LinkedListAPI<T>::del(T d)
{
    bool ret = false;
    if (control)
    {
        Node<T> *list = head;
        for (Node<T> *q = nullptr; list != nullptr; q = list, list = list -> get_next())
        {
            if (list -> get_data() == d && !q)
            {
                head = list -> get_next();
                delete list;
                if (!head)
                {
                    control = false;
                }
                ret = true;
                break;
            }
            else if (list -> get_data() == d && list == tail)
            {
                tail = q;
                delete list;
                ret = true;
                break;
            }
            else if (list -> get_data() == d && q)
            {
                q -> get_next() = list -> get_next();
                delete list;
                ret = true;
                break;
            }
        }
        if (!ret)
        {
            std::runtime_error del_s("Delete failed");
            throw del_s;
        }
    }
    else
    {
        std::runtime_error del_s("Not Head Pointer.");
        throw del_s;
    }
    return ret;
}

template <typename T>
inline bool LinkedListAPI<T>::change(T d, T t)
{
    bool ret = false;
    T &temp = search(d);
    if (temp == d)
    {
        temp = t;
        ret = true;
    }
    return ret;
}

template <typename T>
inline T &LinkedListAPI<T>::search(T d)
{
    if (control)
    {
        Node<T> *list = head;
        for (; list != nullptr && list -> get_data() != d; list = list -> get_next());
        if (list && list -> get_data() == d)
        {
            std::cout << "找到了" << "\n";
            return list -> get_data();
        }
        else
        {
            std::runtime_error search_s("No search found");
            throw search_s;
        }
    }
    else
    {
        std::runtime_error search_s("Not Head Pointer.");
        throw search_s;
    }
}

template <typename T>
inline void LinkedListAPI<T>::print() const
{
    if (control)
    {
        for (Node<T> *list = head; list != nullptr; list = list -> get_next())
        {
            std::cout << list -> get_data() << "\n";
        }
    }
}

template <typename T>
inline LinkedListAPI<T>::~LinkedListAPI()
{
    if (head)
    {
        for (Node<T> *list = head -> get_next(); head != nullptr;)
        {
            delete head;
            head = list;
            if (list)
            {
                list = list -> get_next();
            }
        }
    }
    tail = nullptr;
}

#endif