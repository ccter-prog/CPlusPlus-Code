#include <iostream>
#include <vector>

/* 使用 using 创建一个模板别名 Map，使得 Map<T> 等价于 std::vector<std::pair<T, T>>。验证其功能。 */

template <typename T>
using Map = std::vector<std::pair<T, T>>;

int main()
{
	Map<int> intMap;
	intMap.push_back({1, 2});
	intMap.push_back({3, 4});
	for (const auto& p : intMap)
	{
		std::cout << "(" << p.first << ", " << p.second << ")" << "\n";
	}
	return 0;
}