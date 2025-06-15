#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("D:/Code/C++/FileOperation/study/05/bbb.txt");
    char buffer[20];
    std::memset(buffer, 0, sizeof(buffer));
    fin.read(buffer, 20);
    for (char cc : buffer)
    {
        std::cout << (int)cc << "\n";
    }
	return 0;
}
