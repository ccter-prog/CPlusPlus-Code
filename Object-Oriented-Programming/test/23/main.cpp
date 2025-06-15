#include "Dog.h"
#include "Cat.h"
#include "UpCast.h"

/* 创建一个基类 Animal，其中包含一个虚函数 speak。
再创建两个派生类 Dog 和 Cat，分别重写 speak 函数。
在 main 函数中，创建 Dog 和 Cat 对象，将它们向上转型为 Animal 类型的指针，然后调用 speak 函数。 */

int main(void)
{
    Dog a;
    Cat b;
    upcast(&a);
    upcast(&b);
    return 0;
}