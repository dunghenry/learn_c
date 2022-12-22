#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 1;
    int b = 2;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    int c = a++ + a;
    int d = ++a + b;
    printf("%d\n", a);
    printf("%d\n", c);
    printf("%d\n", d);
    // conditional
    bool isTrue = b > 2 ? true : false;
    printf("%d\n", isTrue); // 0
    return 0;
}
