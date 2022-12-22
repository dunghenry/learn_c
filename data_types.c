#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    // Basic data type: int, char, float, double
    // Derived data type: array, pointer, struct, union
    // Enumeration data type: enum
    // Void data type: void
    // n bit => -2^(n - 1) -> 2^(n - 1) -1
    // So nguyen:
    // int : 4 byte =  32bit : %d
    // long long int: 8 byte = 64bit: %lld
    // long double int: 16 byte: %Lf
    // double: 8 byte : %lf
    // float: 4 byte : %f
    bool isLoading = false;
    // true:1, false: 0
    printf("Loading: %d", isLoading);
    return 0;
}
