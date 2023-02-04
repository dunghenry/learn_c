#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sqrt = sqrt(n);
    if (sqrt * sqrt == n)
    {
        printf("La so chinh phuong")
    }
    else
    {
        printf("Ko la so chinh phuong")
    }

    return 0;
}
