// Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
#include<stdio.h>

int main(){
    int n,tong=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        tong+=n%10;
        n/=10;
    }
    printf("\nTong cac chu so: %d",tong);
}
/*

*/ 