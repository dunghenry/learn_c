#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i = 1;
    printf("Enter num: ");
    scanf("%d", &num);
table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
        goto table;

    for (int j = 0; j <= 10; j++)
    {
        if (j > 5)
        {
            goto out;
        }
        printf("j = %d\n", j);
    }
out:
    return 0;
}
