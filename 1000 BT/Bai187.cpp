// Bài 187: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực
#include<stdio.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    int min=INT_MAX;
    for(int i=0; i < n; i++){
        if(arr[i]>0 && arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0; i < n; i++){
        if(arr[i]==min){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}