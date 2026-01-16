#pragma once

#include <print>

class Time
{
    public:
        Time();
        Time(int h);
        Time(int h, int m);
        Time(int h, int m, int s);
    public:
        void print() const;
    private:
        int hour;
        int minute;
        int second;
};

inline Time::Time(int h, int m, int s) : hour(h), minute(m), second(s)
{}

inline Time::Time() : Time(0, 0, 0)
{}

inline Time::Time(int h) : Time(h, 0, 0)
{}

inline Time::Time(int h, int m) : Time(h, m, 0)
{}

inline void Time::print() const
{
    std::println("{}:{}:{}", hour, minute, second);
}