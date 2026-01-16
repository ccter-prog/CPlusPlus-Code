#pragma once

#include <chrono>

class Stopwatch
{
    public:
        // 普通函数
        void start();
        double elapsed_ms() const;
        double elapsed_seconds() const;
    private:
        std::chrono::steady_clock::time_point m_now;
};

inline void Stopwatch::start()
{
    m_now = std::chrono::steady_clock::now();
}

inline double Stopwatch::elapsed_ms() const
{
    auto now = std::chrono::steady_clock::now();
    auto result = now - m_now;
    return std::chrono::duration<double, std::milli>(result).count();
}

inline double Stopwatch::elapsed_seconds() const
{
    auto now = std::chrono::steady_clock::now();
    auto result = now - m_now;
    return std::chrono::duration_cast<std::chrono::duration<double>>(result).count();
}