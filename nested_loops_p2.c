#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rows;
    int columns;
    int k = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int a[rows][columns];
    int i = 1;
    while (i <= rows)
    {
        int j = 1;
        while (j <= columns)
        {
            printf("%d \t", k);
            k++;
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
