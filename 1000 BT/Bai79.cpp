// Bài 79: Hãy đếm số lượng chữ số của số nguyên dương n
#include<stdio.h>
int main(){
    int n,dem=0;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            dem++;
        }
    }
    printf("\nSo luong uoc nguyen:%d",dem);
}