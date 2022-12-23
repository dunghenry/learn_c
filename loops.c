#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 10;
    do
    {
        printf("x = %d\n", x);
        x++;
    } while (x < 10);

    while (x < 20)
    {
        printf("x = %d\n", x);
        x++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("x = %d\n", i);
    }

    return 0;
}
