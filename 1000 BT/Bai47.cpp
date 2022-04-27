// Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
#include<stdio.h>
int main(){
    int n,tong=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        int last=n%10;
        n/=10;
        if(last%2==0){
            tong+=last;
        }
    }
    printf("\nTong cac chu so chan: %d",tong);
}