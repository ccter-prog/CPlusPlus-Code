#pragma once

#include <chrono>
#include <string>
#include <ratio>
#include <algorithm>
#include <format>

class FPSCounter
{
    public:
        // 特殊函数
        FPSCounter();
    public:
        // 普通成员函数
        void update();
        double get_fps() const;
        double get_frame_time_ms() const;
        std::string get_stats() const;
    private:
        // 类型别名
        using SteadyClock = std::chrono::steady_clock;
        using Duration = std::chrono::duration<double>;
    private:
        // 成员变量
        SteadyClock::time_point m_last_frame_time;
        SteadyClock::time_point m_last_fps_update;
        int m_frame_count;
        double m_current_fps;
        double m_frame_time_ms;
        double m_min_fps;
        double m_max_fps;
        double m_avg_fps;
        int m_total_frames;
        Duration m_total_time;
};

inline FPSCounter::FPSCounter() : 
                m_frame_count(0),
                m_current_fps(0.0),
                m_frame_time_ms(0.0),
                m_min_fps(std::numeric_limits<double>::max()),
                m_max_fps(0.0),
                m_avg_fps(0.0),
                m_total_frames(0),
                m_total_time(0.0)
{
    m_last_frame_time = SteadyClock::now();
    m_last_fps_update = m_last_frame_time;
}

inline void FPSCounter::update()
{
    auto steady_now = SteadyClock::now();
    auto frame_duration = steady_now - m_last_frame_time;
    m_frame_time_ms = std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(frame_duration).count();
    ++m_frame_count;
    ++m_total_frames;
    m_total_time += frame_duration;
    auto time_since_fps_update = steady_now - m_last_fps_update;
    if (time_since_fps_update >= std::chrono::seconds(1))
    {
        double seconds = std::chrono::duration<double>(time_since_fps_update).count();
        m_current_fps = m_frame_count / seconds;
        m_min_fps = std::min(m_min_fps, m_current_fps);
        m_max_fps = std::max(m_max_fps, m_current_fps);
        m_avg_fps = m_total_frames / m_total_time.count();
        m_frame_count = 0;
        m_last_fps_update = steady_now;
    }
    m_last_frame_time = steady_now;
}

inline double FPSCounter::get_fps() const
{
    return m_current_fps;
}

inline double FPSCounter::get_frame_time_ms() const
{
    return m_frame_time_ms;
}

inline std::string FPSCounter::get_stats() const
{
    std::string stats(std::format("===FPS统计===\n"
                    "当前FPS: {}\n"
                    "帧时间: {} ms\n"
                    "最小FPS: {}\n"
                    "最大FPS: {}\n"
                    "平均FPS: {}\n"
                    "总帧数: {}\n"
                    "总时间: {} 秒\n", m_current_fps, m_frame_time_ms, m_min_fps, m_max_fps, m_avg_fps, m_total_frames, m_total_time.count()));
    return stats;
}