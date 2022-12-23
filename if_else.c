#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is even number", number);
    }
    else
    {
        printf("%d is odd number", number);
    }

    // Program to find the largest number of the three.
    int a, b, c, max;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("Max = %d\n", max);
    return 0;
}
