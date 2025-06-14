#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string filename("D:/Code/C++/FileOperation/study/01/test.txt");
    std::ofstream fout(filename, std::ios::app);
    // fout.open("test.txt");
    fout << "霄云|27|极漂亮" << "\n";
    fout << "冰冰|22|漂亮" << "\n";
    fout << "幂幂|25|一般" << "\n";
    fout.close();
    std::cout << "操作文件完成" << "\n";
    return 0;
}