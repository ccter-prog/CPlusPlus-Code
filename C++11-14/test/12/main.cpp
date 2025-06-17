#include <iostream>
#include <string>

/* 使用 typedef 将 unsigned long long 定义为 Ull，再用 using 将 std::string 定义为 String。编写代码验证别名。 */

int main()
{
	typedef unsigned long long Ull;
	using String = std::string;
	Ull a = 18446744073709551615ULL;
	String s = "Hello, Type Alias";
	std::cout << a << "\n" << s << std::endl;
	return 0;
}