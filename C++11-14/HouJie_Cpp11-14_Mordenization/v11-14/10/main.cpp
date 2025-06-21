#include <iostream>

int main()
{
	int id = 0;
	auto f = [&id](int param)
	{
		std::cout << "id:" << id << "\n";
		++id;
		++param;
		std::cout << param << "\n";
	};
	id = 42;
	f(7);
	f(7);
	f(7);
	return 0;
}