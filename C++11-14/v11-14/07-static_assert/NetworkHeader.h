#pragma once

#include <cstdint>

struct NetworkHeader
{
    std::uint8_t version;
    std::uint8_t flags;
    std::uint16_t length;
    std::uint32_t sequence_number;
};