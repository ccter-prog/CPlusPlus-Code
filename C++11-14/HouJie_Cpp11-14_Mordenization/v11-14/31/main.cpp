#include <iostream>
#include <tuple>
#include <string>
// #include <complex>

int main()
{
    std::tuple<int, float, std::string> t1(41, 6.3, "nico");
    std::cout << "tuple<int, float, std::string>, sizeof=" << sizeof(t1) << '\n';
    std::cout << std::get<0>(t1) << ' ' << std::get<1>(t1) << ' ' << std::get<2>(t1) << '\n';
    auto t2 = std::make_tuple(22, 44, "stacy");
    std::get<1>(t1) = std::get<1>(t2);
    if (t1 < t2)
    {
        std::cout << "t1 < t2" << '\n';
    }
    else
    {
        std::cout << "t1 >= t2" << '\n';
    }
    t1 = t2;
    std::tuple<int, float, std::string> t3(77, 1.1, "more light");
    int i1;
    float f1;
    std::string s1;
    std::tie(i1, f1, s1) = t3;
    std::cout << i1 << ' ' << f1 << ' ' << s1 << '\n';
    typedef std::tuple<int, float, std::string> Tuple;
    std::cout << std::tuple_size<Tuple>::value << '\n';
    std::tuple_element<1, Tuple>::type f5 = 1.0f;
    typedef std::tuple_element<0, Tuple>::type Int;
    Int f6 = 100;
    std::cout << f5 << ' ' << f6 << '\n';



    // std::string str;
    // std::cout << "string, sizeof=" << sizeof(str) << '\n';
    // std::cout << "double, sizeof=" << sizeof(double) << '\n';
    // std::cout << "float, sizeof=" << sizeof(float) << '\n';
    // std::cout << "int, sizeof=" << sizeof(int) << '\n';
    // std::cout << "complex<double>, sizeof=" << sizeof(std::complex<double>) << '\n';
    // std::tuple<std::string, int, int, std::complex<double>> t;
    // std::cout << "sizeof=" << sizeof(t) << '\n';
    return 0;
}