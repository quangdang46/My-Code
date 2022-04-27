// Bài 127: Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Xuat(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
void Swap(int &x, int &y){
    int tmp =x;
    x=y;
    y=tmp;
}
void SapXep(int arr[],int n){
    for(int i=0; i < n-1; i++){
        for(int j=i+1; j <n;j++){
            if(arr[i]>arr[i]){
                Swap(arr[i],arr[j]);
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
    SapXep(arr,n);
    Xuat(arr, n);

}