// Bài 206: Tính tổng các giá trị lớn hơn các giá trị xung quanh trong mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    int sum = 0;
    for(int i=0; i < n; i++){
        if(i==0 && arr[0]>arr[1]){
            sum += arr[0];
        }else if(i==n-1 && arr[n-1]>arr[n-2]){
            sum+=arr[n-1];
        }else{
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                sum += arr[i];
            }
        }
    }
    printf("Gia tri S=%d",sum);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}