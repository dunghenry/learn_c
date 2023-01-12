#include <stdio.h>
#include <stdbool.h>
bool check(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(int argc, char const *argv[])
{
    int a;
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
