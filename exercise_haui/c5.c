#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a, b, c, d;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    printf("Nhap d: ");
    scanf("%d", &d);
    int min = a;
    if (b < min && b < c && b < d)
    {
        min = b;
    }
    if (c < min && c < b && c < d)
    {
        min = b;
    }
    if (d < min && d < b && d < c)
    {
        min = d;
    }

    printf("Min %d", min);
    return 0;
}
