#include <stdio.h>
int main(int argc, char const *argv[])
{
    float dtb;
    printf("\nNhap diem tb: ");
    scanf("%f", &dtb);
    do
    {
        printf("\nNhap lai diem tb: ");
        scanf("%f", &dtb);
        printf("\nDTB = %.2f", dtb);
    } while (dtb < 0 || dtb > 10);
    return 0;
}
