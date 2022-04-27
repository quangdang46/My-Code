// Bài 157: Cho mảng 1 chiều các số thực,
//  hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void TimDoan(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Doan [a,b] la:[%d,%d]",min,max);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    TimDoan(arr, n);
}
