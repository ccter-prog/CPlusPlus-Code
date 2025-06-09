#ifndef __ReadFile_H__
#define __ReadFile_H__

#include <iostream>
#include <fstream>
#include <string>

class ReadFile
{
    public:
        ReadFile(const std::string input_file);
        void print();
        virtual ~ReadFile();
    private:
        std::ifstream input_file;
};

inline ReadFile::ReadFile(const std::string input_file) : input_file(input_file)
{
    if (!this -> input_file.is_open())
    {
        this -> input_file.close();
        throw std::runtime_error("文件打开失败");
    }
}

inline void ReadFile::print()
{
    std::string line;
    while (std::getline(input_file, line))
    {
        std::cout << line << "\n";
    }
}

inline ReadFile::~ReadFile()
{
    input_file.close();
}

#endif