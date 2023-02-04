#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 20;
    int *p;
    p = &num;
    printf("%d\n", num);
    printf("%d\n", *p);
    printf("Address %x\n", p);
    num = 100;
    printf("Change value\n");
    printf("%d\n", num);
    printf("%d\n", *p);
    // printf("%d\n", *num);
    return 0;
}
