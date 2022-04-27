// Bài 137: Tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Min(int arr[],int n){
    int min=arr[0],index;
    for(int i=0; i < n; i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
    printf("Vi tri Min= %d",index);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);

}