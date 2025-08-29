#include <iostream>
#include <memory>
#include <utility>

class MyClass
{
    public:
        MyClass() { std::cout << "MyClass constructed\n"; }
        ~MyClass() { std::cout << "MyClass destroyed\n"; }
        void doSomething() { std::cout << "Doing something...\n"; }
};

int main()
{
    {
        // std::unique_ptr<MyClass> uptr1(new MyClass());
        auto uptr1 = std::make_unique<MyClass>();
        uptr1 -> doSomething();
        (*uptr1).doSomething();
        std::unique_ptr uptr2 = std::move(uptr1);
        if (uptr1)
        {
            std::cout << "uptr1 owns the object.\n";
        }
        else
        {
            std::cout << "uptr1 is empty.\n";
        }
    }
    return 0;
}