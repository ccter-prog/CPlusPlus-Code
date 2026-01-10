#include <print>

constexpr int sum_array(const int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    constexpr int compile_arr[] = {1, 2, 3, 4, 5};
    constexpr int compile_sum = sum_array(compile_arr, 5);
    int runtime_arr[] = {10, 20, 30, 40, 50};
    int runtime_sum = sum_array(runtime_arr, 5);
    std::println("Compile-time sum: {}", compile_sum);
    std::println("Runtime sum: {}", runtime_sum);
    return 0;
}