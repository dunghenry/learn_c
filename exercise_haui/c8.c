#include <stdio.h>

int main(int argc, char const *argv[])
{
    int thang, nam;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    if (nam % 100 == 0 && nam % 400 == 0)
    {
        switch (thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang co 31 ngay");
            break;
        case 2:
            printf("Thang co 29 ngay");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang co 30 ngay");
            break;
        default:
            printf("Khong hop le");
            break;
        }
    }
    else
    {
        switch (thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang co 31 ngay");
            break;
        case 2:
            printf("Thang co 28 ngay");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang co 30 ngay");
            break;
        default:
            printf("Khong hop le");
            break;
        }
    }
    return 0;
}
