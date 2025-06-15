#ifndef __NumberDisplay_H__
#define __NumberDisplay_H__

class NumberDisplay
{
    public:
        bool increase(void);
        void print(void);
    private:
        int limit;  //声明时针的翻转条件
        int value;  //当前的时间
};

#endif