#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ns, tuoi;
    printf("Nhap nam sinh: ");
    scanf("%d", &ns);
    do
    {
        if (ns <= 0 || ns >= 2023)
        {
            printf("Nhap lai nam sinh: ");
            scanf("%d", &ns);
        }
    } while (ns <= 0 || ns >= 2023);

    tuoi = 2023 - ns;
    printf("Tuoi cua nguoi do la: %d", tuoi);

    return 0;
}
