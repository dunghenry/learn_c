#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // ax*x + bx + c = 0
    int a, b, c;
    float delta;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
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
        printf("%f", delta);
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
            float x1 = ((-b) + sqrt(delta)) / (2 * a);
            float x2 = ((-b) - sqrt(delta)) / (2 * a);
            printf("x1 = %.2f, x2 = %.2f", x1, x2);
        }
    }

    return 0;
}
