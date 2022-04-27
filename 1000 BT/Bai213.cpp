// Bài 213: Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng 1 chiều các số thực
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

void DieuKien(int arr[],int n,int x){
    int sum=0;
    int dem = 0;
    for(int i=0;i < n; i++){
        if(arr[i]>x){
            sum+=arr[i];
            dem++;
        }
    }
    printf("S=%d",1.0*sum/dem);
}
int main(){
    int n,x;
    scanf("%d",&n);
    int arr[100];
    printf("\nNhap gia tri n,x: ");
    scanf("%d%d",&n,&x);
    Nhap(arr,n);
    DieuKien(arr,n,x);
}