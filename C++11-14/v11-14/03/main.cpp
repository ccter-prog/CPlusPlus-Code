#include <iostream>
#include <memory>

class MyClass
{
    public:
        MyClass() { std::cout << "MyClass constructed\n"; }
        ~MyClass() { std::cout << "MyClass destroyed\n"; };
        void doSomething() { std::cout << "Doing something...\n"; }
};

int main()
{
    std::shared_ptr<MyClass> sptr1 = std::make_shared<MyClass>();
    {
        std::shared_ptr<MyClass> sptr2 = sptr1;
        std::cout << "Use count inside inner scope: " << sptr2.use_count() << '\n';
        std::cout << "Use count: " << sptr1.use_count() << '\n';
    }
    std::cout << "Use count outside inner scope: " << sptr1.use_count() << '\n';
    sptr1.reset();
    if (!sptr1)
    {
        std::cout << "sptr1 is nullptr.\n";
    }
    return 0;
}