#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    int s = 0;
    do
    {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 0; i <= n; i++)
    {
        s += i * i;
    }
    printf("s = %d\n", s);
    return 0;
}
