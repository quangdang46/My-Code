// Bài 135: Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về -1
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Duong(int arr[],int n){
    int index;
    for(int i=0; i < n; i++){
        if(arr[i]>0){
            index=i;
            break;
        }
    }
    printf("Gia tri duong dau tien la: %d",arr[index]);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    Duong(arr, n);
}