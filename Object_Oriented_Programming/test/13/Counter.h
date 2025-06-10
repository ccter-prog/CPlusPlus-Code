#ifndef __Counter_H__
#define __Counter_H__

class Counter
{
    public:
        Counter();  // 迭代计数器
        static int count;
};

inline Counter::Counter()
{
    count++;
}

#endif