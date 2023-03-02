#include <stdio.h>

int main(int argc, char const *argv[])
{
    char Ten[20];
    printf("Nhap ten cua ban: ");
    fflush(stdin);
    gets(Ten);
    // puts(Ten);
    printf("%s", Ten);
    return 0;
}
