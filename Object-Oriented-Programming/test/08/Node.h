#ifndef __Node_H__
#define __Node_H__

#include <string>

class Node
{
    public:
        Node();
        std::string name;
        std::string gender;
        int age;
        Node *next;
};

inline Node::Node()
{}

#endif