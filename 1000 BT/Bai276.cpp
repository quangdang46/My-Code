// Bài 276: Xóa tất cả các phần tử trùng với x
#include<stdio.h>
void NhapMang(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void XuatMang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void XoaPhanTu(int arr[],int &n,int k){
    for(int i=k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
void DieuKien(int arr[],int &n,int k){
    for(int i=0; i < n; i++){
        if(arr[i]==k){
            XoaPhanTu(arr,n,i);
            i--;
        }
    }
}
// 0 3 -8 -10 13 14 16
int main(){
    int a[100];
    int n,k;
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(a,n);
    printf("Nhap k: ");
    scanf("%d",&k);
    DieuKien(a,n,k);
    XuatMang(a,n);
}