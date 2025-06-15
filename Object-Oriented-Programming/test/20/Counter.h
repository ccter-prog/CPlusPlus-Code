#ifndef __Counter_H__
#define __Counter_H__

#include <iostream>

/* 创建一个名为 Counter 的类，用于实现一个简单的计数器。
该类包含一个私有成员变量 count 来记录计数器的值。
实现前置和后置递增、递减运算符的重载。 */

class Counter
{
    public:
        Counter(int num);
        Counter(const Counter &p);
        Counter &operator ++();
        Counter operator ++(int);
        Counter &operator --();
        Counter operator --(int);
        void print(void) const;
    private:
        int count;
};

inline Counter::Counter(int num) : count(num)
{}

inline Counter::Counter(const Counter &p) : count(p.count)
{}

inline Counter &Counter::operator ++()
{
    ++count;
    return *this;
}

inline Counter Counter::operator ++(int)
{
    Counter temp(*this);
    ++count;
    return temp;
}

inline Counter &Counter::operator --()
{
    --count;
    return *this;
}

inline Counter Counter::operator --(int)
{
    Counter temp(*this);
    --count;
    return temp;
}

inline void Counter::print(void) const
{
    std::cout << count << "\n";
}

#endif