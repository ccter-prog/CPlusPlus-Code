#include "FileMode.h"

int main()
{
    open_file("data.txt", FileMode::Read);
    open_file("log.txt", FileMode::Append);
    return 0;
}