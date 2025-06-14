#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string filename("D:/Code/C++/FileOperation/study/02/test.txt");
    std::ifstream fin;
    fin.open(filename, std::ios::in);
    if (!fin.is_open())
    {
        std::cout << "打开文件" << filename << "失败" << "\n"; 
    }
    else
    {
        std::string buffer;
        while (fin >> buffer)
        {
            std::cout << buffer << "\n";
        }

        // char buffer[101];
        // while (fin.getline(buffer, 100))
        // {
        //     std::cout << buffer << "\n";
        // }

        // std::string buffer;
        // while (std::getline(fin, buffer))
        // {
        //     std::cout << buffer << "\n";
        // }
    }
    fin.close();
    return 0;
}