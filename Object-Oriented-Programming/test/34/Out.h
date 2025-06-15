#ifndef __Out_H__
#define __Out_H__

#include <iostream>
#include <fstream>
#include <string>

class Out
{
    public:
        Out(const char *s);
        void out_file();
    private:
        std::ifstream in;
};

inline Out::Out(const char *s)  : in(s)
{}

inline void Out::out_file()
{
    if (!in.is_open())
    {
        throw std::runtime_error("无法打开文件");
    }
    std::string str;
    while (in.eof())
    {
        if (!std::getline(in, str))
        {
            in.close();
            throw std::runtime_error("读取失败");
        }
        else
        {
            std::cout << str << "\n";
        }
    }
    in.close();
}

#endif