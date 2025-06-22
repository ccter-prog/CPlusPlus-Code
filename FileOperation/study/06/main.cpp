#include <iostream>
#include <fstream>

int main()
{
	std::string filename = R"(D:\Code\C++_test\NewProject1\NewProject1\src\test.txt)";
	std::fstream fs;
	fs.open(filename, std::ios::in | std::ios::out);
	if (!fs.is_open())
	{
		std::cout << "文件" << filename << "打开失败" << "\n";
	}
	else
	{
		std::string buffer;
		fs.seekg(22);
		while (fs >> buffer)
		{
			std::cout << buffer << "\n";
		}
		fs.close();
	}
	
	//std::string filename = R"(D:\Code\C++_test\NewProject1\NewProject1\src\test2.dat)";
	//std::fstream fout;
	//fout.open(filename, std::ios::app | std::ios::binary);
	//if (!fout.is_open())
	//{
	//	std::cout << "文件" << filename << "打开失败" << "\n";
	//}
	//else
	//{
	//	struct st_girl
	//	{
	//		char name[31];
	//		int no;
	//		char memo[301];
	//		double weight;
	//	} girl;
	//	
	//	std::cout << "fout.tellp()=" << fout.tellp() << ", fout.tellg()=" << fout.tellg() << "\n";
	//	girl = {"大面包", 1, "可爱的大面包", 49};
	//	fout.write((const char*)&girl, sizeof(st_girl));
	//	std::cout << "fout.tellp()=" << fout.tellp() << ", fout.tellg()=" << fout.tellg() << "\n";
	//	girl = {"西施", 2, "中国历史第一美女", 45.8};
	//	fout.write((const char*)&girl, sizeof(st_girl));
	//	std::cout << "fout.tellp()=" << fout.tellp() << ", fout.tellg()=" << fout.tellg() << "\n";
	//	fout.close();
	//}


	//std::string filename = R"(D:\Code\C++_test\NewProject1\NewProject1\src\test.txt)"; 
	//std::ofstream fout;
	//fout.open(filename, std::ios::out);
	//if (!fout.is_open())
	//{
	//	std::cout << "打开文件" << filename << "失败" << "\n";
	//}
	//else
	//{
	//	std::cout << "位置：" << fout.tellp() << "\n";
	//	fout << "大面包|27|极漂亮" << "\n";
	//	std::cout << "位置：" << fout.tellp() << "\n";
	//	fout << "西施|19|极漂亮" << "\n";
	//	std::cout << "位置：" << fout.tellp() << "\n";
	//	fout << "冰冰|22|漂亮" << "\n";
	//	std::cout << "位置：" << fout.tellp() << "\n";
	//	fout << "幂幂|25|漂亮" << "\n";
	//	std::cout << "位置：" << fout.tellp() << "\n";
	//	fout.close();
	//}

	//std::string buffer;
	//std::fstream fin;
	//fin.open(filename, std::ios::in);
	//if (!fin.is_open())
	//{
	//	std::cout << "文件" << filename << "打开失败" << "\n";
	//}
	//else
	//{
	//	std::cout << "位置：tellg()=" << fin.tellg() << ", tellp()=" << fin.tellp() << "\n";
	//	while (fin >> buffer)
	//	{
	//		std::cout << buffer << "\n";
	//		std::cout << "位置：tellg()=" << fin.tellg() << ", tellp()=" << fin.tellp() << "\n";
	//	}
	//	fin.close();
	//}
	return 0;
}