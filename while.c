#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    while (i <= 10)
    {
        printf("\ni = %d", i);
        i++;
    }

    int j = 1;
    while (j += 2, j <= 10)
    {
        printf("\n j = %d", j);
    }
    // printf("\n j = %d", j);

    // infinite loop
    while (1)
    {
        printf("Infinite Loop");
    }

    return 0;
}
