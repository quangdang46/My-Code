// Bài 160: Cho mảng 1 chiều các số thực, hãy tìm giá trị âm cuối cùng lớn hơn giá trị -1. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int TimGtAm(int arr[],int n){
    for(int i=n-1; i >=0; i--){
        if(arr[i]<0 && arr[i]>(-1)){
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


