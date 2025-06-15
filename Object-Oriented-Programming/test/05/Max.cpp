#include <iostream>
#include "Max.h"

using namespace std;

Max::Max() : num(0)
{}

void Max::compare()
{
    int shi, ge;
    cout << "请输入0-99的数字：";
    cin >> num;
    shi = num / 10;
    ge = num % 10;
    if(shi > ge)
    {
        cout << shi << "\n";
    }
    else if(shi < ge)
    {
        cout << ge << "\n";
    }
    else
    {
        cout << "它们一样大" << "\n";
    }
}