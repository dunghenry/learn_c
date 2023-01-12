#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping a = %d, b = %d\n", a, b); // a = 20, b = 10
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    printf("Before swapping a = %d, b = %d\n", a, b); // a = 10, b = 20
    swap(a, b);
    printf("Values a = %d, b = %d\n", a, b); // a = 10, b = 20
    return 0;
}
