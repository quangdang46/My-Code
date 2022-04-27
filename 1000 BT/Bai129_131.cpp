// Bài 129 + 131: Viết hàm nhập, xuất mảng 1 chiều các số nguyên
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Xuat(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    Xuat(arr, n);
}