#ifndef __Date_H__
#define __Date_H__

#include <iostream>

/* 创建一个名为 Date 的类，用于表示日期，包含年、月、日三个成员变量。
实现前置和后置递增、递减运算符的重载，递增和递减操作分别对日期进行相应的改变，
同时要处理日期的合法性，例如当日期递增到月底时，要正确处理月份和年份的变化。 */

class Date
{
    public:
        Date(int year, int month, int day);
        Date(const Date &p);
        Date &operator ++();
        Date operator ++(int);
        Date &operator --();
        Date operator --(int);
        void print(void) const;
    private:
        int year;
        int month;
        int day;
};

inline Date::Date(int year, int month, int day) : year(year), month(month), day(day)
{}

inline Date::Date(const Date &p) : year(p.year), month(p.month), day(p.day)
{}

inline Date &Date::operator ++()
{
    if (day < 30)
    {
        ++day;
    }
    else
    {
        day = 1;
        if (month < 12)
        {
            ++month;
        }
        else
        {
            month = 1;
            ++year;
        }
    }
    return *this;
}

inline Date Date::operator ++(int)
{
    Date temp(*this);
    if (day < 30)
    {
        ++day;
    }
    else
    {
        day = 1;
        if (month < 12)
        {
            ++month;
        }
        else
        {
            month = 1;
            ++year;
        }
    }
    return temp;
}

inline Date &Date::operator --()
{
    if (day > 1)
    {
        --day;
    }
    else
    {
        day = 30;
        if (month > 1)
        {
            --month;
        }
        else
        {
            month = 12;
            --year;
        }
    }
    return *this;
}

inline Date Date::operator --(int)
{
    Date temp(*this);
    if (day > 1)
    {
        --day;
    }
    else
    {
        day = 30;
        if (month > 1)
        {
            --month;
        }
        else
        {
            month = 12;
            --year;
        }
    }
    return temp;
}

inline void Date::print() const
{
    std::cout << year << "年" << month << "月" << day << "日" << "\n";
}

#endif