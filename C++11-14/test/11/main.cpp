#include "Wrapper.h"

int main()
{
    WrapperOfPointer<int> w;
    w.items.push_back(std::make_unique<int>(5));
    return 0;
}