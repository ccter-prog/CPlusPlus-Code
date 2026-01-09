#pragma once

#include <cstdint>
#include <string>
#include <print>

enum class FileMode : std::uint8_t
{
    Read,
    Write,
    Append
};

inline void open_file(const std::string& filename, const FileMode& mode)
{
    std::print("Opening {} in ", filename);
    switch (mode)
    {
        case FileMode::Read:
        {
            std::print("read mode");
            break;
        }
        case FileMode::Write:
        {
            std::print("write mode");
            break;
        }
        case FileMode::Append:
        {
            std::print("append mode");
            break;
        }
    }
    std::println();
}