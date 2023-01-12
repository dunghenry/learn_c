#include <stdio.h>

void change(int *num)
{
    printf("Before adding value inside function num = %d\n", *num); // 100
    *num += 100;
    printf("After adding value inside function num = %d\n", *num); // 200
}
int main(int argc, char const *argv[])
{

    int x = 100;
    printf("Before function call x = %d\n", x); // 100
    change(&x);
    printf("After function call x = %d\n", x); // 200
    return 0;
}
