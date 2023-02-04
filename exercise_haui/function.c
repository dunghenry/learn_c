#include <stdio.h>
#include <math.h>
// Dien tich tam giac S(a, b, c) = sqrt(p(p-a)(p-b)(p-c)) -> p la nua chu vi tam giac
// F(a, b,c, k) = 2020 + 1/q + 1/q *q vs k la 1 so nguyen va q la  dt tam giac vs canh a, b, c
// S(a, b, c,2k)

void nhapabc(float *a, float *b, float *c)
{
    do
    {
        printf("Nhap a: ");
        scanf("%f", a);
        if (a < 0)
        {
            printf("Nhap lai a: ");
            scanf("%f", a);
        }
        printf("Nhap b: ");
        scanf("%f", b);
        if (b < 0)
        {
            printf("Nhap lai b: ");
            scanf("%f", b);
        }
        printf("Nhap c: ");
        scanf("%f", c);

        if (c < 0)
        {
            printf("Nhap lai c: ");
            scanf("%f", c);
        }
    } while (a < 0 || b < 0 || c < 0);
}
void nhapk(int *k)
{
    do
    {
        printf("Nhap k: ");
        scanf("%d", k);

    } while (k < 0);
}

double dientichtamgiac(float a, float b, float c)
{
    double p = a + b + c;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
double F(float a, float b, float c, int k)
{
    double p = a + b + c;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    float sum = 2020;
    int i;
    for (i = 1; i <= k; i++)
    {
        sum += 1.0 / pow(s, i);
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    float a, b, c;
    int k;
    nhapabc(&a, &b, &c);

    printf("Dien tich tam giac: %.2f\n", dientichtamgiac(a, b, c));
    do
    {
        printf("Nhap k: ");
        scanf("%d", &k);

    } while (k < 0);
    printf("S(a, b, c, 2k): %.2f\n", F(a, b, c, 2 * k));
    return 0;
}
