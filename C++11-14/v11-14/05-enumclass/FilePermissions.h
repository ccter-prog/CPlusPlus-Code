#pragma once

#include <cstdint>
#include <string>
#include <vector>
#include <cstddef>

enum class FilePermissions : std::uint8_t
{
    None = 0,
    Read = 1,
    Write = 2,
    Execute = 4
};

inline FilePermissions operator|(const FilePermissions& a, const FilePermissions& b)
{
    return static_cast<FilePermissions>(static_cast<std::uint8_t>(a) | static_cast<std::uint8_t>(b));
}

inline FilePermissions operator&(const FilePermissions& a, const FilePermissions& b)
{
    return static_cast<FilePermissions>(static_cast<std::uint8_t>(a) & static_cast<std::uint8_t>(b));
}

inline bool has_permission(const FilePermissions& flags, const FilePermissions& perm)
{
    return (static_cast<std::uint8_t>(flags) & static_cast<std::uint8_t>(perm)) == static_cast<std::uint8_t>(perm);
}

inline std::string permissions_to_string(const FilePermissions& perm)
{
    std::uint8_t value = static_cast<std::uint8_t>(perm);
    if (!value)
    {
        return "None";
    }
    std::vector<std::string> parts;
    if (value & static_cast<std::uint8_t>(FilePermissions::Read))
    {
        parts.emplace_back("Read");
    }
    if (value & static_cast<std::uint8_t>(FilePermissions::Write))
    {
        parts.emplace_back("Write");
    }
    if (value & static_cast<std::uint8_t>(FilePermissions::Execute))
    {
        parts.emplace_back("Execute");
    }
    if (parts.size() == 1)
    {
        return parts[0];
    }
    else if (parts.size() > 1)
    {
        std::string result(parts[0]);
        for (std::size_t i = 1; i < parts.size(); ++i)
        {
            result += "+" + parts[i];
        }
        return result;
    }
    return "Unknown";
}