#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    do{
        scanf("%d", &n);
    } while (n < 0 );
    return 0;
}
