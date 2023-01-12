#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {1, 2, 3, 4, 5};
    size_t n = sizeof(a) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n", n);
    return 0;
}
