// Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#include<stdio.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int IndexMin(int arr[],int n){
    int min=INT_MAX,index;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            index=i;
            min=arr[i];
        }
    }
    return index;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("Vi tri min cua mang:%d",IndexMin(arr,n));
}