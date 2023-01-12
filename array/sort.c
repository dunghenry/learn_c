#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a[5] = {5, 4, 3, 2, 1};
    size_t n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
