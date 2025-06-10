#include <iostream>
#include "Score.h"

using namespace std;

Score::Score() : score(0)
{}

/*90分及以上为A，75-89为B，60—74为C，其余为D。*/
char Score::judge()
{
    char c;
    cout << "请输入成绩：";
    cin >> score;
    int grade = 0;
    if(score >= 90)
    {
        grade = 10;
    }
    else if(score >= 75)
    {
        grade = 8;
    }
    else if(score >= 60)
    {
        grade = 6;
    }
    switch(grade)
    {
        case 10:
            c = 'A';
            break;
        case 8:
            c = 'B';
            break;
        case 6:
            c = 'C';
            break;
        default:
            c = 'D';
            break;
    }
    return c;
}