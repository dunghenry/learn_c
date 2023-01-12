#include <stdio.h>

void getarr(int arr[])
{
    size_t n = sizeof(arr) / sizeof(int);
    // printf("%d", n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int arr[3] = {1, 2, 3};
    getarr(arr);
    return 0;
}
