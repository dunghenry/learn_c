#include <stdio.h>
#include <string.h>
void daochuoi(char s1[], char s2[])
{
    int n = strlen(s1);
    for (i = 0; i < n; i++)
    {
        s2[i] = s1[n - i - 1];
        s2[i] = '\0';
    }
}
int main(int argc, char const *argv[])
{
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);
    strrev(str);
    puts(str);
    return 0;
}
