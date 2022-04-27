// Bài 210: Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn trong mảng các số nguyên
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool Chan(int n){
    int k=(int)log10(n);
    int z=n/pow(10,k);
    if(z%2==0){
        return true;
    }
    return false;
}
void DieuKien(int arr[],int n){
    int sum=0;
    for(int i=0;i < n; i++){
        if(Chan(arr[i])){
            sum += arr[i];
        }
    }
    printf("S=%d",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}