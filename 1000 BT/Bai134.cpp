// Bài 134: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int Max(int arr[],int n){
    int max=arr[0];
    for(int i=0; i < n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("Max trong mang:%d",Max(arr,n));
}