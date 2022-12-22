#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    printf("Min = %d\n", MIN(a, b));
    return 0;
}
