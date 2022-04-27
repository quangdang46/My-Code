// Bài 244: Kiểm tra mảng thỏa tính chất: mảng không có số hoàn thiện lớn hơn 256. Có trả về 1, không có trả về 0
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool cp(int n){
    int sum = 0;
    for(int i=2; i < n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return true;
    }
    return false;
}
int DieuKien(int arr[],int n){
    for(int i=0;i < n; i++){
        if(cp(arr[i])&& arr[i]>256){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",DieuKien(arr,n));
}