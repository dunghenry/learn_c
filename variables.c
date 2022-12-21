#include "myfile.c"
#include <stdio.h>
int stack_var1;
static int stack_var2;
int s = 2; // global variable
void function()
{
    int i; // local variable
}
void staticVariable()
{
    int x = 10;
    static int y = 10;
    x = x + 1;
    y = y + 1;
    printf("x = %d, y = %d\n", x, y);
}
int main()
{
    int a;
    float b;
    char c;
    int d, e;
    staticVariable(); // x = 11, y = 11
    staticVariable(); // x = 11, y = 12
    // printf("Variable a inside myfile.h: %d", z);
    printf("%d", z);
    return 0;
}