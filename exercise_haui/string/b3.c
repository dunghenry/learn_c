#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[100];
    char c;
    printf("Nhap ki tu tim kiem: ");
    scanf("%c", &c);
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            printf("%d", i);
        }
    }

    return 0;
}
