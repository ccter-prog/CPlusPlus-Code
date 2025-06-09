#include "A.h"
 
int main(void)
{
    print(10, "hello", "world", 20, 1000);
    for (int i = 0, count = 0; i < 1000; i++, count++)
    {
        std::cout << i << " ";
        if (count == 10)
        {
            std::cout.put('\n');
            count = 0;
        }
    }
    std::cout.put('\n');
    return 0;
}