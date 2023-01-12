#include <stdio.h>

void getarr(char *arr)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 'A')
        {
            arr[i] = 'a';
        }
        // printf("%c\t", arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    getarr(arr);
    for (int i = 0; i < 5; i++)
    {

        printf("%c\t", arr[i]);
    }
    return 0;
}
