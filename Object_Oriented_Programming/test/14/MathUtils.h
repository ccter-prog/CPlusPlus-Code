#ifndef __MathUtils_H__
#define __MathUtils_H__

class MathUtils
{
    public:
        static int add(int num1, int num2);
    private:
        MathUtils();
};

inline MathUtils::MathUtils()
{}

inline int MathUtils::add(int num1, int num2)
{
    return num1 + num2;
}

#endif