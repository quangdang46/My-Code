// Bài 178: Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x, y] cho trước (x, y là các số nguyên)
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    int x,y;
    printf("\nNhap x va y: ");
    scanf("%d%d",&x,&y);
    for(int i=0; i < n; i++){
        if(arr[i]>=x && arr[i]<=y && arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
}
int main(){
    int n;
    int arr[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr, n);
}