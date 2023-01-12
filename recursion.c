#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main(int argc, char const *argv[])
{
    int x, rs;
    printf("Enter a = ");
    scanf("%d", &x);
    rs = fact(x);
    printf("Result = %d\n", rs);
    return 0;
}
