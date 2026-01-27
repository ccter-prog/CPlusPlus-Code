#include "TypeSelector.h"
#include <print>
#include <typeinfo>

int main()
{
    auto a = choose_type<int>();
    auto b = choose_type<double>();
    auto c = choose_type<float>();

    std::println("{}\n{}\n{}", typeid(a).name(), typeid(b).name(), typeid(c).name());
    return 0;
}