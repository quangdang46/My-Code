// Bài 208: Tính tổng các giá trị chính phương trong mảng 1 chiều các số nguyên
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool scp(int n){
    int k=sqrt(n);
    if(k*k==n){
        return true;
    }
    return false;
}
void DieuKien(int arr[],int n){
    int sum = 0;
    for(int i=0; i < n; i++){
        if(scp(arr[i])){
            sum += arr[i];
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