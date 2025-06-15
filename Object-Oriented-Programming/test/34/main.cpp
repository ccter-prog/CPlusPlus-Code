#include "Out.h"

int main()
{
    Out out("student.txt");
    try
    {
        out.out_file();
    }
    catch (std::exception &file_error)
    {
        std::string error(file_error.what());
        std::cout << error << "\n";
    }
    return 0;
}