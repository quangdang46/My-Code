// Bài 192: Hãy liệt kê các  giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là số chẵn
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool Check(int n){
    int a;
    while(n!=0){
        a=n%10;
        if(a%2==1){
            return false;
        }
        n/=10;
    }
    return true;
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n; i++){
        if(Check(arr[i])){
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