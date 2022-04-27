// Bài 254: Hãy đếm giá trị trong mảng thỏa: lớn hơn tất cả các giá trị đứng đằng trước nó
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool Check(int arr[],int n){
    for(int i=0; i < n; i++){
        if(arr[n]<arr[i]){
            return false;
        }
    }
    return true;
} 
void DieuKien(int arr[],int n){
    for(int i=1; i < n; i++){
        if(Check(arr,i)){
            printf("%d",arr[i]);
        }
    }
}
int main(){
    int n;
    int arr[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}