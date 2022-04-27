// Bài 194: Cho mảng 1 chiều các số nguyên có nhiều hơn 2 giá trị. Hãy viết hàm liệt kê các cặp giá trị gần nhau nhất
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void KhoangCach(int arr[],int n,int b[]){
    for(int i=0; i < n; i++){
        if(i==n-1){
            b[i] =abs(arr[i]-arr[i-1]);
        }else{
            b[i]=abs(arr[i]-arr[i+1]);
        }
    }
}
void DieuKien(int arr[],int n,int b[]){
    int min=b[0];
    for (int i =0;i<n; i++){
        if(b[i]<min){
            min=b[i];
        }
    }
    for(int i=0; i < n; i++){
        if(b[i]==min && i==n-1){
            printf("(%d,%d) ",arr[i],arr[i-1]);           
        }
        else if(b[i]==min){
            printf("(%d,%d) ",arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n;
    int arr[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n,b);
}