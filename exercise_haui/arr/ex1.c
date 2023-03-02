// Nhap so nguyen duong n >= 1 , n <= 30
// Nhap mang n so thuc
// Hien thi mang len mh
// Tinh gt tbc cac so am trong mang
// Sap xep theo chieu giam dan

#include <stdio.h>
void nhap(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
float tbcam(float a[], int n)
{
    int i, count = 0;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            sum += a[i];
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        return (float)sum / count;
    }
}
void xepgiam(float a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                float tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void xepchanle(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[j] % 2 == 0 && a[i] % 2 != 0) || (a[j] % 2 == 0 && a[i] % 2 == 0 && a[i] > a[j]) || ((a[i] % 2 != 0) && (a[j] % 2 != 0) && (a[i] < a[j])))
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    int a[35];
    do
    {
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);
    } while (n <= 1 || n >= 30);
    nhap(a, n);
    // printf("Trung binh cong so am: %.2f", tbcam(a, n));
    // xepgiam(a, n);
    // printf("\n");
    // printf("Xuat mang");
    xepchanle(a, n);
    xuat(a, n);
    return 0;
}
