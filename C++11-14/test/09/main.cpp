#include "printContainer.h"

int main()
{
    std::vector<int> v{1, 2, 3};
    std::list<std::string> l{"A", "B", "C"};
    printContainer(v);
    printContainer(l);
    return 0;
}