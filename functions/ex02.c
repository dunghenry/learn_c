#include <stdio.h>
void sum();
int main(int argc, char const *argv[])
{
    printf("Running\n");
    sum();
    return 0;
}

void sum()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, a + b);
}
