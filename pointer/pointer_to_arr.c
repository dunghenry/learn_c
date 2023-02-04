#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[4] = {0, 1, 2, 3};
    int *p;
    p = arr;
    size_t n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(p + i));
    }

    int(*pp)[4] = &arr;
    printf("%x\n", pp);
    return 0;
}
