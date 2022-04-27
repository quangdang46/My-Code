// Bài 275: Xóa tất cả các số chính phương trong mảng

#include<stdio.h>
#include<math.h>
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
int checkscp(int n){
    if(pow((int)sqrt(n),2)==n){
        return 1;
    }
    return 0;
}

void XoaPhanTu(int arr[],int &n,int k){
    for(int i=k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
void DieuKien(int arr[],int &n){
    for(int i=0; i < n; i++){
        if(checkscp(arr[i])){
            XoaPhanTu(arr,n,i);
            i--;
        }
    }
}
// 0 3 -8 -10 13 14 16
int main(){
    int a[100];
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(a,n);
    DieuKien(a,n);
    XuatMang(a,n);
}