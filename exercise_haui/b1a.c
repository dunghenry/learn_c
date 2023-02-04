#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    printf("Nhap n: ");
    scanf("%d", &n);
    m = n;
    int reverse = 0;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (m == reverse)
    {
        printf("La so doi xung");
    }
    else
    {
        printf("Khong la so doi xung");
    }

    return 0;
}
