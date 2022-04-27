// Bài 262: Sắp xếp chẵn, lẻ tăng dần nhưng vị trí tương đối giữa các số không thay đổi
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapXepChanLeTangDanNhungViTriTuongDoiGiuaCacSoKoThayDoi(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] > 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(((a[i] % 2 == 0 && a[j] % 2 == 0) || (a[i] % 2 != 0 && a[j] % 2 != 0)) && a[i] > a[j])
                {
                    HoanVi(a[i], a[j]);
                }
            }
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    SapXepChanLeTangDanNhungViTriTuongDoiGiuaCacSoKoThayDoi(a, n);
    printf("\nMang sau khi sap xep chan le tang dan\n nhung vi tri tuong doi giua cac so ko thay doi: ");
    xuat(a, n);

    getch();
    return 0;
}
