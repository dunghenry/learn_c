#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("\ni = %d", i);
    }

    for (; i < 5; i++)
    {
        printf("\ni = %d", i);
    }
    // infinite loop
    for (i = 0;; i++)
    {
        printf("\nInfinite loop");
    }
    for (;;)
    {
        printf("\nInfinite loop");
    }
    return 0;
}
