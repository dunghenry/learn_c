#include <stdio.h>
void insertSortIn(int arr[], int n)
{
    int i, j, tmp;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        tmp = arr[i];
        while (arr[j] > tmp && j >= 0)
        {
            printf("%d ", j);
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
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
    insertSortIn(arr, n);
    printf("Result: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
    return 0;
}
