// Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
bool Scp(int n){
    if(n==pow(sqrt(n),2)){
        return true;
    }
    return false;
}
int TimGtAm(int arr[],int n){
    for(int i=1; i <n-1; i++){
        if(Scp(arr[i])){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",TimGtAm(arr,n));
}