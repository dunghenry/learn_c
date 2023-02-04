#include <stdio.h>
void nhapmang(int a[10], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[10], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int vtchancc(int a[10], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            return i;
        }
        return -1;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d", &n);
    nhapmang(a, n);
    xuatmang(a, n);
    return 0;
}
