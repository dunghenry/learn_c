#include <stdio.h>

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void ouput(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *a = new int[n];
    input(a, n);
    printf("Output: \n");
    ouput(a, n);
    return 0;
}
