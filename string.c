#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[10];
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter string: ");
    scanf("%s", &str);
    printf("%s\n", str);
    printf("%zu\n", strlen(str));
    printf("%d\n", ch); // 65

    for (int i = 0; i <= 255; i++)
    {
        printf("The ascii value of %c is %d\n", i, i);
    }
    return 0;
}
