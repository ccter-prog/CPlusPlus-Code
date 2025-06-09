#include "C.h"
#include "Out.h"

int main()
{
    std::vector<std::string> vs;
    for (const C &elem : vs)
    {
        std::cout << elem << "\n";
    }
    return 0;
}