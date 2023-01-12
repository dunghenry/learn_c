#include <stdio.h>
void selectionSortIn(int arr[], int n)
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        if (index != i)
        {
            int tmp = arr[i];
            arr[i] = arr[index];
            arr[index] = tmp;
        }
    }
}
void selectionSortDe(int arr[], int n)
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        if (index != i)
        {
            int tmp = arr[i];
            arr[i] = arr[index];
            arr[index] = tmp;
        }
    }
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
    selectionSortDe(arr, n);
    printf("Result: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
    return 0;
}
