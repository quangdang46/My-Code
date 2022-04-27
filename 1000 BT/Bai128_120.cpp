// Bài 128 + 130: Viết hàm nhập, xuất mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(float arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%f",&arr[i]);
    }
}
void Xuat(float arr[],int n){
    for(int i=0; i < n; i++){
        printf("%f ",arr[i]);
    }
}
int main(){
    int n;
    float arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    Xuat(arr, n);
}