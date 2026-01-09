#include "TrafficLight.h"
#include <print>

int main()
{
    std::print("Red -> {}\n", to_string(next_state(TrafficLight::Red)));
    std::print("Green -> {}\n", to_string(next_state(TrafficLight::Green)));
    std::print("Yellow -> {}\n", to_string(next_state(TrafficLight::Yellow)));
    return 0;
}