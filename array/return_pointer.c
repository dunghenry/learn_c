#include <stdio.h>
int *getarray(int *a)
{

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    return a;
}
int main()
{
    int *n;
    int a[5];
    n = getarray(a);
    printf("Result: \t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", n[i]);
    }
    return 0;
}