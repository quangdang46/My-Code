// Bài 260: Cho 2 mảng a, b. Hãy cho biết mảng b có phải là hoán vị của mảng a không
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
void SapXep(int arr[],int n){
    for(int i=0; i < n-1; i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    Xuat(arr,n);
}
bool DieuKien(int arr[],int x,int b[],int y){
    if(x!=y){
        return false;
    }else{
        SapXep(arr,x);
        SapXep(arr,y);
        for(int i=0;i<x; i++){
            if(arr[i]!=b[i]){
                return false;
            }
        }
    }
    return true;

}   
int main(){
    int x,y;
    int arr[100],b[100];
    printf("\nNhap gia tri x: ");
    scanf("%d",&x);
    Nhap(arr,x);
    printf("\nNhap gia tri y: ");
    scanf("%d",&y);
    Nhap(b,y);
    DieuKien(arr,x,b,y);
}