// Bài 241: Kiểm tra mảng có 2 giá trị 0 liên tiếp hay không? Có trả về 1, không có trả về 0
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

int DieuKien(int arr[],int n){

    for(int i=0;i < n-1; i++){
        if(arr[i]==0 && arr[i+1]==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",DieuKien(arr,n));
}