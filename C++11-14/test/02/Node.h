#ifndef __Node_H__
#define __Node_H__

template <typename T>
class Node
{
    public:
        Node();
        T &get_data();
        Node *&get_next();
        virtual ~Node();
    private:
        T data;
        Node *next;     
};

template <typename T>
inline Node<T>::Node() : data{}, next(nullptr)
{}

template <typename T>
inline T &Node<T>::get_data()
{
    return data;
}

template <typename T>
inline Node<T> *&Node<T>::get_next()
{
    return next;
}

template <typename T>
inline Node<T>::~Node()
{
    next = nullptr;
}

#endif