#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, tmp;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    printf("Nhap d: ");
    scanf("%d", &d);
    if (a >= b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a >= c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (a >= d)
    {
        tmp = a;
        a = d;
        d = tmp;
    }
    if (b >= c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    if (b >= d)
    {
        tmp = b;
        b = d;
        d = tmp;
    }
    if (c >= d)
    {
        tmp = c;
        c = d;
        d = tmp;
    }
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}
