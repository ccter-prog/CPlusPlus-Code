#include <iostream>
#include <map>
#include <string>

int main(void)
{
    std::map<std::string, double> price;
    price["snapple"] = 0.75;
    price["coke"] = 0.50;
    std::string item;
    double total = 0;
    while (std::cin >> item)
    {
        std::cout << (total += price[item]) << "\n";
    }
    return 0;
}