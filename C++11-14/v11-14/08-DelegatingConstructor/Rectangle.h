#pragma once

#include <string>
#include <print>

class Rectangle
{
    public:
        Rectangle();
        Rectangle(double w);
        Rectangle(double w, double h);
        Rectangle(double w, double h, const std::string& c);
    public:
        void print() const;
    private:
        double width;
        double height;
        std::string color;
};

inline Rectangle::Rectangle(double w, double h, const std::string& c) : width(w), height(h), color(c)
{}

inline Rectangle::Rectangle() : Rectangle(1.0, 1.0, "black")
{}

inline Rectangle::Rectangle(double w) : Rectangle(w, 1.0, "black")
{}

inline Rectangle::Rectangle(double w, double h) : Rectangle(w, h, "black")
{}

inline void Rectangle::print() const
{
    std::println("width={}\nheight={}\ncolor={}", width, height, color);
}