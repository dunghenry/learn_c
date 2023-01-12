#include <stdio.h>

int check(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int rs, a;
    printf("Enter a: ");
    scanf("%d", &a);
    if (check(a) == 0)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }
    return 0;
}
