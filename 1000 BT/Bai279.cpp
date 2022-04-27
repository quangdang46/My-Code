// Bài 279: Xóa tất cả các phần tử xuất hiện nhiều hơn 1 lần trong mảng
// #include<stdio.h>
// void NhapMang(int arr[],int n){
//     for(int i=0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void XuatMang(int arr[],int n){
//     for(int i=0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
// }
// void XoaPhanTu(int arr[],int &n,int k){
//     for(int i=k; i < n; i++){
//         arr[i] = arr[i+1];
//     }
//     n--;
// }
// void DieuKien(int arr[],int &n,int k){
//     for(int i=0; i < n; i++){
//         if(arr[i]==k){
//             XoaPhanTu(arr,n,i);
//             i--;
//         }
//     }
// }
// // 0 3 -8 -10 13 14 16
// int main(){
//     int a[100];
//     int n,k;
//     printf("Nhap n:");
//     scanf("%d",&n);
//     NhapMang(a,n);
//     printf("Nhap k: ");
//     scanf("%d",&k);
//     DieuKien(a,n,k);
//     XuatMang(a,n);
// }


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

void XoaCacPhanTuXuatHienNhieuHon1Lan(int a[], int &n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                Xoa1PhanTu(a, n, j);
                j--;
                flag = 1;
            }
        }
        if(flag == 1)
        {
            Xoa1PhanTu(a, n, i); // Xóa luôn chính nó
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

    XoaCacPhanTuXuatHienNhieuHon1Lan(a, n);
    printf("\nMang sau khi xoa tat cac cac gia tri xuat hien nhieu hon 1 lan: ");
    xuat(a, n);
    getch();
    return 0;
}