#pragma once

#include <type_traits>
#include <utility>

template <typename T>
class has_size_method
{
    public:
        constexpr static bool value = decltype(test<T>(0))::value;
    private:
        // 静态模板函数
        template <typename U>
        static auto test(int) -> decltype(std::declval<U>().size(), std::true_type {});
        template <typename>
        static std::false_type test(...);
};