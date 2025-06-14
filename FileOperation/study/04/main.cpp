#include <iostream>
#include <fstream>
#include "st_girl.h"

int main()
{
    std::string filename("D:/Code/C++/FileOperation/study/04/test.dat");
    std::ifstream fin;
    fin.open(filename, std::ios::in | std::ios::binary);
    if (!fin.is_open())
    {
        std::cout << "打开文件" << filename << "失败" << "\n";
    }
    else
    {
        while (fin.read((char *)&girl, sizeof(st_girl)))
        {
            std::cout << "name = " << girl.name << ", no = " << girl.no << ", memo = " << girl.memo << ", weight = " << girl.weight << "\n";
        }
    }
    fin.close();
    return 0;
}