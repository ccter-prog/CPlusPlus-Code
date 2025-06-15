#ifndef __Students_H__
#define __Students_H__

class Students
{
    public:
        void setter();  //设置学号和姓名
        void getter();  //获取学号和姓名
        void modify();
    private:
        int number;
        char name[30];
        double score;
};

#endif