// Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thựcBài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#include<stdio.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int Max(int arr[],int n){
    int max=INT_MIN,index;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("GIa tri max cua mang:%d",Max(arr,n));
}