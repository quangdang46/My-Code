// Bài 185: Hãy liệt kê các vị trí mà giá trị tại đó là số chính phương trong mảng 1 chiều các số nguyên
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool cp(int n){
    int k=sqrt(n);
    if(k*k==n){
        return true;
    }
    return false;
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n; i++){
        if(cp(arr[i])){
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