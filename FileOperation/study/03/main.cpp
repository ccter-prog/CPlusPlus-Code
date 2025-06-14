#include <iostream>
#include <fstream>
#include "st_girl.h"

int main()
{
    std::string filename("D:/Code/C++/FileOperation/study/03/test.dat");
    std::ofstream fout;
    fout.open(filename, std::ios::out | std::ios::binary);
    if (!fout.is_open())
    {
        std::cout << "文件" << filename << "打开失败" << "\n";
    }
    else
    {
        girl = {"黄霄云", 1, "新生代歌手", 45.8};
        fout.write((const char *)&girl, sizeof(st_girl));
        girl = {"西施", 2, "中国历史第一美女", 45.8};
        fout.write((const char *)&girl, sizeof(st_girl));
    }
    fout.close();
    return 0;
}