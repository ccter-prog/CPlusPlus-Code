#ifndef __Counter_H__
#define __Counter_H__

#include <iostream>

/* 创建一个名为 Counter 的类，其中包含一个静态成员变量 count 用于记录创建的对象数量。
同时，提供一个静态成员函数 getCount 用于获取对象的数量。
在 main 函数中创建多个 Counter 对象，调用 getCount 函数输出创建的对象数量。 */

class Counter
{
    public:
        Counter();
        static void getCount(void);
    private:
        static int count;
};

inline Counter::Counter()
{
    count++;
}

inline void Counter::getCount(void)
{
    std::cout << count << "\n";
}

#endif