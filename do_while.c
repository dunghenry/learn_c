#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char c;
    int choice;
    do
    {
        printf("\n1.Print Hello\n2.Print C\n3.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Learn C\n");
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Please enter valid choice\n");
            break;
        }
        printf("Do you want to enter more?");
        scanf("%d", &choice);
        scanf("%c", &c);
    } while (c == 'y');

    return 0;
}
