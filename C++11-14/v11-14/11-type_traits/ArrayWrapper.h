#pragma once

#include <type_traits>
#include <cstddef>

template <typename T, typename = void>
class ArrayWrapper
{

};

template <typename T>
class ArrayWrapper<T, std::enable_if_t<std::is_array_v<T>>>
{
    public:
        ArrayWrapper(T& array);
        std::size_t get_size() const;
    private:
        T& array_ref;
};

template <typename T>
inline ArrayWrapper<T, std::enable_if_t<std::is_array_v<T>>>::ArrayWrapper(T& array) : array_ref(array)
{

}

template <typename T>
inline std::size_t ArrayWrapper<T, std::enable_if_t<std::is_array_v<T>>>::get_size() const
{
    return std::extent_v<T>;
}