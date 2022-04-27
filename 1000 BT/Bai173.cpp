// 173.(*) Cho mảng một chiều các số nguyên. Hãy viết hàm tìm chữ số xuất hiện ít nhất trong mảng (timchuso)
#include<stdio.h>
void Nhap(int arr[],int n){

    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void Tim(int arr[],int n,int b[]){
    for(int i=0; i < n; i++){
        for(int j=i;  j< n; j++){
            if(arr[j]==arr[j]){
                b[i]++;
            }
        }
    }
    int min=0;
    for(int i=0;i<n; i++){
        if(b[i]<min){
            min=b[i];
        }
    }
    for(int i=0; i < n; i++){
        if(b[i]==min){
            printf("Gia tri %d co so lan xuat hien %d",arr[i],b[i]);
        }
    }
}
int main(){
    int n;
    int arr[100],b[100]={0};
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    Tim(arr, n,b);
}