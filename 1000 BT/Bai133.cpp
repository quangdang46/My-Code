// Bài 133: Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực
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
void IndexAm(int arr[],int n,int b[]){
    int a=0;
    for(int i=0; i < n; i++){
        if(arr[i]<0){
            b[a]=i;
            a++;
        }
    }
    printf("Vi tri cac so am: ");
    Xuat(b,a);
}
int main(){
    int n;
    int arr[100],b[20];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    IndexAm(arr,n,b);

}