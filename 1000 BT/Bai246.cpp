// Bài 246: Kiểm tra mảng có đối xứng không? Có trả về 1, không có trả về 0
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

int DieuKien(int arr[],int n){
    int a=0,b=n-1;
    while(a<=b){
        if(arr[a]!=arr[b]){
            return 0;
        }
        a++;
        b--;
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