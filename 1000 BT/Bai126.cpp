// Bài 126: Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int Tong(int arr[],int n){
    int sum = 0;
    for(int i=0; i < n; i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("\nTong cac so am trong mang:%d",Tong(arr,n));
}