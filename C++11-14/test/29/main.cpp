#include <iostream>

namespace
{
    int internal_var = 100;
    void internal_function()
    {
        std::cout << "Internal function" << '\n';
    }
}

namespace Library
{
    namespace v1
    {
        void func() { std::cout << "v1\n"; }
    }

    inline namespace v2
    {
        void func() { std::cout << "v2\n"; }
    }
}

namespace A::B::C
{
    int new_value = 100;
}

namespace Short = A::B::C;

int main()
{
    std::cout << Short::new_value << '\n';
    std::cout << A::B::C::new_value << '\n';
    Library::func();
    Library::v1::func();
    Library::v2::func();
    std::cout << internal_var << '\n';
    internal_function();
    return 0;
}