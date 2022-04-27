// Bài 141: Hãy tìm vị trí giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về  -1
#include<stdio.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Duong(int arr[],int n){
    int index,ok=0;
    int min=INT_MAX;
    for(int i=0; i < n; i++){
        if(arr[i]>0 && arr[i]<min){
            index=i;
            ok=1;

        }
    }    
    if(ok==1){
        printf("Vi tri duong nho nhat la: %d",index);
    }else{
        printf("-1");
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    Duong(arr, n);
}