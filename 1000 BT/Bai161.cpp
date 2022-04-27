/*
Bài 161: Cho mảng 1 chiều các số nguyên, hãy tìm giá trị đầu tiên nằm trong khoảng [x, y] cho trước. 
Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
*/ 
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int TimGtAm(int arr[],int n){
    int x,y;
    printf("\nNhap x va y: ");
    scanf("%d%d",&x,&y);
    for(int i=0; i<n; i++){
        if(arr[i]>=x && arr[i]<=y){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",TimGtAm(arr,n));
}