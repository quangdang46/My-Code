// Bài 142: Tìm giá trị nhỏ nhất trong mảng 1 chiều số thực
#include<stdio.h>
#include<conio.h>
#define MAX 100

void nhap (float a[], int &n)
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
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}
float nhonhat(float a[], int n)
{
    float min = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    float a[MAX];
    nhap(a, n);
    xuat(a, n);

    float min = nhonhat(a, n);

    printf("\nPhan tu nho nhat trong mang la %.3f", min);

    getch();
    return 0;
}