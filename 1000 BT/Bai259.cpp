// Bài 259: Sắp xếp số hoàn thiện giảm dần nhưng giá trị khác giữ nguyên vị trí
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
bool nt(int n){
    int sum = 0;
    for(int i=2; i < n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    n==sum ? true : false;
}
void swap(int &x,int &y){
    int tmp = x;
    x=y;
    y=tmp;
}
void DieuKien(int arr[],int n){
    for(int i=0; i < n-1; i++){
        if(nt(arr[i])){
            for(int j=i+1; j < n; j++){
                if(nt(arr[j])&& arr[j]<arr[i]){
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