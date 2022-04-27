// Bài 191: Hãy liệt kê các giá trị cực đại trong mảng 1 chiều các số thực.
//  Một phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n; i++){
        if(i==0 && arr[0]>arr[1]){
            printf("%d ",arr[0]);
        }
        else if(i==n-1 && arr[i]>arr[n-2]){
            printf("%d ",arr[i]);
        }else{
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                printf("%d ",arr[i]);
            }
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