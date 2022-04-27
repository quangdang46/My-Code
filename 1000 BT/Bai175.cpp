/*
Bài 175 (*): Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một.
 Hãy viết hàm tìm 2 giá trị gần nhau nhất trong mảng (Lưu ý: Mảng có các giá trị khác nhau từng đôi một còn có tên là mảng phân biệt)
*/ 
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){

    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n,int b[]){
    b[0]==abs(arr[0]-arr[1]);
    b[n-1]==abs(arr[n-1]-arr[n-2]);
    for(int i=1; i <n-1;i++){
        b[i]==abs(arr[i]-arr[i+1]);
    }
    int min=b[0];
    for(int i=0;i<n; i++){
        if(b[i]<min){
            min=b[i];
        }
    }
    for(int i=0; i < n; i++){
        if(b[i]==min){
            printf("Hai gia tri thoa man %d %d",arr[i],arr[i+1]);
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