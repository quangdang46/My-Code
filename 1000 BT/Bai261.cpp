// Bài 261: Sắp xếp số dương tăng dần, các số âm giữ nguyên vị trí
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void Xuat(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

void swap(int &x,int &y){
    int tmp = x;
    x=y;
    y=tmp;
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n-1; i++){
        if(arr[i]%2==0){
            for(int j=i+1; j < n; j++){
                if(arr[j]%2==0&& arr[j]<arr[i]){
                    swap(arr[i],arr[j]);
                }   
            }
        }
    }
    Xuat(arr,n);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}