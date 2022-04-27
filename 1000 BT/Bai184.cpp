// Bài 184: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1 chiều các số nguyên
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool nt(int n){
    if(n<2) return false;
    for(int i=2; i < n; i++){
        if(n%2 == 0){
            return false;
        }
    }
    return true;
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n; i++){
        if(nt(arr[i])){
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