#pragma once

#include <cstdint>
#include <string>

enum class TrafficLight : std::uint8_t
{
    Red,
    Yellow,
    Green
};

inline TrafficLight next_state(TrafficLight current)
{
    switch (current)
    {
        case TrafficLight::Red:
        {
            return TrafficLight::Green;
        }
        case TrafficLight::Yellow:
        {
            return TrafficLight::Red;
        }
        case TrafficLight::Green:
        {
            return TrafficLight::Yellow;
        }
    }
}

inline std::string to_string(const TrafficLight& light)
{
    switch (light)
    {
        case TrafficLight::Red:
        {
            return "Red";
        }
        case TrafficLight::Yellow:
        {
            return "Yellow";
        }
        case TrafficLight::Green:
        {
            return "Green";
        }
        default:
        {
            return "Unknown";
        }
    }
}