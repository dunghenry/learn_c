#include <stdio.h>

void avg(int a, int b, int c)
{
    float avg;
    avg = (float)(a + b + c) / 3;
    printf("Avg = %f\n", avg);
}
int main(int argc, char const *argv[])
{
    avg(1, 3, 4);
    return 0;
}
