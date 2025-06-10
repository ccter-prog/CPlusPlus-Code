#include <iostream>
#include <vector>
#include <string>

/* 用string存储一句话，统计其中元音字母（a, e, i, o, u）的数量。 */

int main(void)
{
    std::vector<std::string> v;
    std::string str;
    std::cout << "请输入：";
    std::getline(std::cin, str);
    v.push_back(str);
    std::vector<std::string>::iterator p;
    int count = 0;
    for (p = v.begin(); p != v.end(); p++)
    {
        for (std::string::size_type i = 0; i < p -> length(); i++)
        {
            char c = (*p)[i];
            if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
            {
                count++;
            }
        }
    }
    std::cout << "元音字母的数量为：" << count << "\n";
    return 0;
}