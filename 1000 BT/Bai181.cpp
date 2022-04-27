// Bài 181: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị chẵn có ít nhất 1 lân cận cũng là giá trị chẵn
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n; i++){
        if(i==0 && arr[0]%2==0 && arr[2]%2==0){
            printf("%d ",arr[i]);
        }else if(i==n-1 && arr[n-1]%2==0 && arr[n-2]%2==0){
            printf("%d ",arr[n-1]);
        }else{
            if(arr[i]%2==0 && (arr[i+1]%2==0 || arr[i-1]%2==0)){
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