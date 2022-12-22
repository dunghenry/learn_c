#include <stdio.h>
int func()
{
    static int count = 0;
    count++;
    return count;
}
int sum()
{
    int count = 0;
    count++;
    return count;
}
int main(int argc, char const *argv[])
{
    printf("%d\n", func()); // 1
    printf("%d\n", func()); // 2
    printf("%d\n", sum());  // 1
    printf("%d\n", sum());  // 1
    return 0;
}
