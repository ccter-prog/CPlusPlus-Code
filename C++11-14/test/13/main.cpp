#include <iostream>

/* 用 using 定义一个别名 IntPtr，表示指向 int 的指针。
再用 typedef 定义 FuncPtr，表示函数指针类型 int(*)(int, int)（接受两个 int 参数，返回 int）。 */

int add(int a, int b)
{
	return a + b;
}

int main()
{
	using IntPtr = int*;
	typedef int (*FuncPtr)(int, int);

	int x = 10;
	IntPtr p = &x;
	std::cout << *p << "\n";

	FuncPtr func = add;
	std::cout << func(3, 5) << "\n";
	return 0;
}