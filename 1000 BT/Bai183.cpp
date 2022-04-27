// Bài 183: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị tại đó là giá trị lớn nhất trong mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    int max=arr[0];
    for(int i=0; i < n; i++){
        if(arr[i]>max){
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