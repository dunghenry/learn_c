#include <stdio.h>
int sum();
int main(int argc, char const *argv[])
{
    printf("Running\n");
    int rs = sum();
    printf("%d\n", rs);
    return 0;
}

int sum()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    return a + b;
}