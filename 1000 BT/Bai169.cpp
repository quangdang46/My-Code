// Bài 169 (*): Thuật toán tìm số chẵn lớn nhất nhỏ hơn mọi giá trị lẻ có trong mảngCho mảng 1 chiều các số nguyên. 
#include<stdio.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int TimMinLe(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i < n; i++){
        if(arr[i]%2==1 && arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int TimChanTm(int arr[], int n){
    int gt=TimMinLe(arr,n);
    int max=INT_MIN;
    for(int i=0; i < n; i++){
        if(arr[i]%2 && arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("Gia tri tm:%d",TimChanTm(arr,n));
}
/*
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

// Nếu không có lẻ thì trả về -1
int TimViTriLeDauTien(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            return i;
        }
    }
    return -1;
}
int TimSoLeNhoNhat(int a[], int n, int ViTriDauTien)
{
    int MinLe = a[ViTriDauTien];

    for (int i = ViTriDauTien + 1; i < n; i++)
    {
        if (a[i] % 2 != 0 && a[i] < MinLe)
        {
            MinLe = a[i];
        }
    }
    return MinLe;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    
    int ViTriLeDauTien = TimViTriLeDauTien(a, n);
    if (ViTriLeDauTien == -1)
    {
        printf("\nMang khong ton tai so le");
    }
    else
    {
        int MinLe = TimSoLeNhoNhat(a, n, ViTriLeDauTien);
        int SoChanThoa = MinLe - 1;
        printf("\nSo chan lon nhat nho hon toan bo gia tri le trong mang la %d", SoChanThoa);
    }
    getch();
    return 0;
}
*/ 