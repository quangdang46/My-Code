// Bài 273: Xóa tất cả các số âm trong mảng


#include<stdio.h>
void NhapMang(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void XuatMang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void XoaPhanTu(int arr[],int &n,int k){
    for(int i=k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
void DieuKien(int arr[],int &n){
    for(int i=0; i < n; i++){
        if(arr[i]<0){
            XoaPhanTu(arr,n,i);
            i--;
        }
    }
}
// 0 3 -8 -10 13 14 16
int main(){
    int a[100];
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(a,n);
    DieuKien(a,n);
    XuatMang(a,n);
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

void Xoa1PhanTu(int a[], int &n, int ViTriXoa)
{
    for(int i = ViTriXoa; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void XoaCacSoAm(int a[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    int ViTriXoa;
    nhap(a, n);
    xuat(a, n);

    XoaCacSoAm(a, n);
    printf("\nMang sau khi xoa tat cac cac gia tri am: ");
    xuat(a, n);
    getch();
    return 0;
}
*/