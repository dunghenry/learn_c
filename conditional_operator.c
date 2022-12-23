#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &age);
    (age >= 18) ? printf("Eligible for voting") : printf("Eligible for voting");
    return 0;
}
