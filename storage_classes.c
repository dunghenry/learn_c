#include <stdio.h>
int d;
int main(int argc, char const *argv[])
{
    // auto
    int a; // auto
    char b;
    float c;
    printf("%d %c %f\n", a, b, c); // 0 0.000000, ''
    extern int d;
    printf("%d", d); // 0
    register int e = 0;
    printf("%u", &e); //
    return 0;
}
