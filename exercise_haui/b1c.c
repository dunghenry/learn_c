#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    int count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("La so nguyen to");
    }
    else
    {
        printf("Ko la so nguyen to");
    }
    return 0;
}
