#include <stdio.h>
int min(int *arr)
{
    int min = arr[0];
    size_t n = sizeof(arr) / sizeof(int);
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    int rs = min(array);
    printf("Min = %d", rs);
    return 0;
}
