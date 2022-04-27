// Bài 177: Hãy liệt kê các số trong mảng 1 chiều các số thực thuộc đoạn [x, y] cho trước
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
        if(arr[i]>=x && arr[i]<=y){
            printf("%d ",arr[i]);
        }
    }
}
int main(){
    int n;
    int arr[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    DieuKien(arr,n);
}