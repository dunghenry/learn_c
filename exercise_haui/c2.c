#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char c;
    int ascii;
    printf("Nhap ki tu bat ki: ");
    scanf("%c", &c);
    ascii = c;
    if (ascii >= 97 && ascii <= 122)
    {
        printf("%c", (ascii - 32));
    }
    else if (ascii <= 90 && ascii >= 65)
    {
        printf("%c", (ascii + 32));
    }
    else
    {
        printf("Ki tu ko hop le");
    }

    return 0;
}
