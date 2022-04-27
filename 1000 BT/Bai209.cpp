// Bài 209: Tính tổng các giá trị đối xứng trong mảng các số nguyên
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

void DieuKien(int arr[],int n){
    int sum = 0;
    int a=0,b=n-1;
    while(a<=b){
        if(arr[a]==arr[b]){
            sum+= arr[a];
        }
        a++;
        b--;
    }
    printf("Gia tri S=%d",sum);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}