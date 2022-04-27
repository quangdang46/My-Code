// Bài 156: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void TimGan(int arr[],int n){
    int k;
    printf("Nhap k: ");
    scanf("%d",&k);
    int min=INT_MAX;
    int index;
    for(int i=0; i < n; i++){
        if(abs(k-arr[i])<min){
            k=abs(k-arr[i]);
            index=i;
        }
    }
    printf("Gia tri gan K nhat la: %d",arr[index]);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    TimGan(arr,n);
}