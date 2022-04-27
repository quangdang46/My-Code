// Bài 253: Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b không
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

int DieuKien(int arr[],int n){
    for(int i=1; i < n-1; i++){
        if((arr[i]>arr[i+1]&&arr[i]<arr[i-1])||(arr[i]>arr[i+1]&&arr[i]<arr[i-1])){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    int arr[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",DieuKien(arr,n));
}