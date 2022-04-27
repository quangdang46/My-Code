// Bài 257: Sắp xếp lẻ tăng dần nhưng giá trị khác giữ nguyên vị trí
// #include<stdio.h>
// void Nhap(int arr[],int n){
//     for(int i=0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void Xuat(int arr[],int n){
//     for(int i=0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
// }
// void SapXep(int arr[],int n){
//     for(int i=0; i < n-1; i++){
//         for(int j=i+1; j < n; j++){
//             if(arr[j]<arr[i]){
//                 int tmp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=tmp;
//             }
//         }
//     }
// }
// void DieuKien(int arr[],int n,int b[],int &j){
//     j=0;
//     for(int i=0; i < n; i++){
//         if(arr[i]%2==1){
//             b[j]=arr[i];
//             j++;
//         }
//     }
//     j=0;
//     SapXep(b,j);
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==1){
//             arr[i]=b[j];
//             j++;
//         }
//     }
//     Xuat(arr, n);
// }
// int main(){
//     int n,j;
//     int arr[100],b[10];
//     printf("\nNhap gia tri n: ");
//     scanf("%d",&n);
//     Nhap(arr,n);
//     DieuKien(arr,n,b,j);
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

void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapXepLeTangDan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] % 2 != 0)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] % 2 != 0 && a[i] > a[j])
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

    SapXepLeTangDan(a, n);
    printf("\nMang sau khi sap xep le tang dan: ");
    xuat(a, n);

    getch();
    return 0;
}