// 203.Tính tổng các giá trị có chữ số hàng chục là chữ số 5 có trong mảng các số nguyên (tongchuc).
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool TimChuc(int n){
    n/=10;
    int a=n%10;
    if(a==5){
        return true;
    }
    return false;
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n; i++){
        if(TimChuc(arr[i])){
            printf("%d ",arr[i]);
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