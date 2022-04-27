// Bài 132: Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void XuatChan(int arr[],int n){
    for(int i=0; i < n; i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    XuatChan(arr,n);
}