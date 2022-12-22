#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    bool x = true;
    if (x == true)
    {
        printf("The value of x is true\n");
    }
    else
    {
        printf("The value of x is false\n");
    }
    // operator or, and , not

    bool y = false;
    bool z = true;

    printf("%d\n", y && z); // 0: false
    printf("%d\n", y || z); // 1: true
    printf("%d\n", !y);     // 1: true
    return 0;
}
