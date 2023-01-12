#include <stdio.h>
float square1(float x)
{
    return x;
}
int square2(int x)
{
    return x;
}
int main()
{
    printf("%.2f\n", square1(1.7));
    printf("%d\n", square2(1));

    return 0;
}
