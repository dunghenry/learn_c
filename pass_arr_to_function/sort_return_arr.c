#include <stdio.h>
int *sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    return arr;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int *rs = sort(arr, n);
    for (int j = 0; j < n; j++)
    {
        printf("%d", *(rs + j));
    }
    return 0;
}
