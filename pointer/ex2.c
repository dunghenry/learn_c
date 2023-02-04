#include <stdio.h>
#include <conio.h>
void nhap(int *a)
{
    int num;
    do
    {
        printf("Nhap a: ");
        scanf("%d", &num);
        *a = num;
    } while (a < 0);
    // printf("Dia chi %p", a);
}
int gt(int n)
{
    int i;
    int kq = 1;
    for (i = 1; i <= n; i++)
    {
        kq *= i;
    }
    return kq;
}
int main()
{
    int a;
    nhap(&a);
    printf("%d", gt(a));
    return 0;
}
