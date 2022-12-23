#include <stdio.h>
#define infinite for (;;)
int main(int argc, char const *argv[])
{
    for (;;)
    {
        printf("Hello, world!\n");
    }
    while (1)
    {
        printf("Hello, world!\n");
    }

    do
    {
        printf("Hello, world!\n");
    } while (1);

infinite_loop:
    printf("Hello, world!\n");
    goto infinite_loop;

    // Macros
    infinite
    {
        printf("Hello, world!\n");
    }
    return 0;
}
