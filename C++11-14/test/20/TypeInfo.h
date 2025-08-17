#pragma once

#include <string>

template <typename T>
class TypeInfo
{
    public:
        static const char* name() { return "Unknown"; }
};

template <>
class TypeInfo<int>
{
    public:
        static const char* name() { return "Integer"; }
};

template <typename T>
class TypeInfo<T*>
{
    public:
        static const char* name()
        {
            static std::string s = "Pointer to " + std::string(TypeInfo<T>::name());
            return s.c_str();
        }
};