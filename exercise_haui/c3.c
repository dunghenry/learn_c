#include <stdio.h>

int main(int argc, char const *argv[])
{

    // ax + b = 0;
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (a == 0)
    {
        printf("PT vo nghiem");
    }
    else
    {
        if (b == 0)
        {
            printf("PT vo so nghiem");
        }
        else
        {
            float x = (float)-b / a;
            printf("PT co nghiem %.2f", x);
        }
    }

    return 0;
}
