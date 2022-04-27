// Bài 250: Hảy cho biết các phần tử trong mảng có lập thành cấp số cộng hay không? Nếu có chỉ ra công sai d
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

int DieuKien(int arr[],int n){
    int d=arr[1]-arr[0];
    for(int i=1; i < n; i++){
        if((arr[i+1]-arr[i])!=d){
            return 0;
        }
    }
    return d;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",DieuKien(arr,n));
}