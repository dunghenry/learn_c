#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a = ");
    scanf("%d", &x);
    printf("Fibonacci = %d", fibonacci(x));
    return 0;
}
