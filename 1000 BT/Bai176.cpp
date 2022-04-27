// Bài 176: Hãy liệt kê các số âm trong mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n; i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
}
int main(){
    int n;
    int arr[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr, n);
}