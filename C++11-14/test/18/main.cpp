#include <iostream>

/* 题目：捕获局部变量a（值捕获）、b（引用捕获），在Lambda中返回a + b。
要求：a=5, b=10，调用后修改b=20，验证结果。 */

int main()
{
	int a = 5;
	int b = 10;
	auto mix_capture = [a, &b]() -> int
	{
		return a + b;
	};
	std::cout << mix_capture() << "\n";
	b = 20;
	std::cout << mix_capture() << "\n";
	return 0;
}