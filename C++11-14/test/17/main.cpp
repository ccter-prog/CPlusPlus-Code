#include <iostream>

/* 题目：编写一个无捕获Lambda，接受两个int参数并返回其乘积。
要求：在main中调用该Lambda计算5 * 3。 */

int main()
{
	auto multiply = [](int a, int b) -> int
	{
		return a + b;
	};
	std::cout << multiply(5, 3) << "\n";
	return 0;
}