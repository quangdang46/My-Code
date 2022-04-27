// Bài 267: Viết hàm nhập mảng sao cho khi nhập xong thì giá trị trong mảng sắp xếp giảm dần
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
// void SapXepGiam(int arr[],int n){
//     for(int i=0; i < n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]>arr[i]){
//                 int tmp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j]=tmp;
//             }
//         }
//     }   
// }
// int main(){
//     int arr[100];
//     int n;
//     printf("Nhap n:");
//     scanf("%d",&n);
//     NhapMang(arr,n);
//     SapXepGiam(arr,n);
//     XuatMang(arr,n);
// }
/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

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
    
    int i, j, k;
    for(i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
        for(j = 0; j < i; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                for(k = i; k > j; k--)
                {
                    a[k] = a[k - 1];
                }
                a[j] = temp;
                break;
            }
        }
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);


    getch();
    return 0;
}