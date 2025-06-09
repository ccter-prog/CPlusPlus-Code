#include "ReadFile.h"

int main()
{
    try
    {    
        ReadFile i_file("test.txt");
        i_file.print();
    }
    catch (std::exception &i_file_error)
    {
        std::string error(i_file_error.what());
        if (error == "文件打开失败")
        {
            std::cout << error << "\n";
        }
    }
    return 0;
}