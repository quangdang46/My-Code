// Bài 125: Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
bool Check(int n){
    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    int dem = 0;
    for(int i=0;i<n; i++){
        if(Check(arr[i])==true && arr[i]<100){
            dem++;
        }
    }
    printf("So luong so nguyen to:%d",dem);
}