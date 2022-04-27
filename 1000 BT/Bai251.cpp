// Bài 251: Hãy cho biết các phần tử trong mảng có bằng nhau không
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

int DieuKien(int arr[],int n){
    for(int i=1; i < n; i++){
        if(arr[i]!=arr[0]){
            return 0;
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