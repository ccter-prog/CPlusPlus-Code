#include "print_type_info.h"

int main()
{
    print_type_info<int>();
    print_type_info<const double&>();
    print_type_info<int*>();
    return 0;
}