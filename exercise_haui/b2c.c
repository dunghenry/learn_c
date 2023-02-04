#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i;
    double s = 0;
    do
    {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++)
    {
        // s += (double)1 / i;
        s += 1.0 / i;
    }
    printf("s = %.2f\n", s);
    return 0;
}
