#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n");
        for (int j = 1; j <= 10; j++)
        {
            printf("\n %d x %d = %d", i, j, (i * j));
        }
    }
    return 0;
}
