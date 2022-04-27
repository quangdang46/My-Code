// Bài 248: Kiểm tra mảng có tăng dần hay không
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

int DieuKien(int arr[],int n){
    for(int i=0; i < n-1; i++){
        for(int j=n+1; j < n; j++){
            if(arr[j]<arr[i]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",DieuKien(arr,n));
}