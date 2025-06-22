#include <iostream>
#include <string>
#include "Score.h"

int main()
{
	try
	{
		Score a("D:/Code/C++_test/NewProject1/NewProject1/src/test1.dat", 2);
		a.input("六六六", 45);
		a.print();
		a.copy("D:/Code/C++_test/NewProject1/NewProject1/src/temp1.dat");
	}
	catch (std::exception& e)
	{
		std::string error(e.what());
		std::cout << error << "\n";
	}
	return 0;
}