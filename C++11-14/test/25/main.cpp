#include <string>
#include <utility>
#include "ContainerWrapper.h"

int main()
{
    ContainerWrapper<std::string> wrapper;
    std::string s1("first");
    std::string s2("second");
    wrapper.push(s1);
    wrapper.push(std::move(s2));
    wrapper.push("third");
    wrapper.print();
    return 0;
}