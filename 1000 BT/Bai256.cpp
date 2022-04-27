// Bài 256: Sắp xếp mảng giảm dần
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void Xuat(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void DieuKien(int arr[],int n){
    for(int i=1; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[j]>arr[i]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j]=tmp;
            }
        }
    }
    Xuat(arr,n);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}