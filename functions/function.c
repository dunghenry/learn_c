#include <stdio.h>

void hello()
{
    printf("Hello everyone!");
}

int getInt()
{
    return 1;
}

float getFloat()
{
    return 1.2;
}
int main(int argc, char const *argv[])
{
    hello();
    printf("\n%d", getInt());
    printf("\n%.2f", getFloat());
    return 0;
}
