#include <stdio.h>
#include <math.h>
void giai(int a, int b, int c)
{
    float delta;
    if (a == 0)
    {
        if (b == 0)
        {
            printf("PT vo nghiem");
        }
        else
        {
            float x = (float)-c / b;
            printf("PT co nghiem: %.2f", x);
        }
    }
    else
    {
        delta = b * b - (4 * a * c);
        // printf("%f", delta);
        if (delta < 0)
        {
            printf("PT vo nghiem");
        }
        else if (delta == 0)
        {
            float x = (float)-b / (2 * a);
            printf("PT co nghiem %.2f", x);
        }
        else
        {
            float x1 = (-b) + sqrt(delta) / (2 * a);
            float x2 = (-b) - sqrt(delta) / (2 * a);
            printf("x1 = %.2f, x2 = %.2f", x1, x2);
        }
    }
}
void nhap(int *a)
{
    int num;
    do
    {
        printf("Nhap: ");
        scanf("%d", &num);
        *a = num;
    } while (a < 0);
}
void nhap2(int *a)
{
    do
    {
        printf("Nhap: ");
        scanf("%d", a);
       
    } while (a < 0);
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    nhap2(&a);
    nhap2(&b);
    nhap2(&c);
    giai(a, b, c);
    return 0;
}
