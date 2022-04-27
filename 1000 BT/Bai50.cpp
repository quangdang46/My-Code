// Bài 50: Hãy tìm số đảo ngược của số nguyên dương n
#include<stdio.h>

int main(){
    int n,tong=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        tong=tong*10+n%10;
        n/=10;
    }
    printf("\nSo dao nguoc la: %d",tong);
    
}