// Bài 188: Hãy liệt kê các vị trí chẵn lớn nhất trong mảng 1 chiều các số nguyên
#include<stdio.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    int max=INT_MIN;
    for(int i=0; i < n; i++){
        if(arr[i]%2==0 && arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i < n; i++){
        if(arr[i]==max){
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