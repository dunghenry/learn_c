#include <stdio.h>
#include <stdbool.h>
void bubbleSortIn(int arr[], int n)
{
    bool isSwapped;
    for (int i = 0; i < n - 1; i++)
    {
        isSwapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
        }
    }
}
void bubbleSortDe(int arr[], int n)
{
    bool isSwapped;
    for (int i = 0; i < n - 1; i++)
    {
        isSwapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
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
    bubbleSortDe(arr, n);
    printf("Result: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
