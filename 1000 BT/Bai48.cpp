// Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
#include<stdio.h>
int main(){
    int n,tich=1;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        int last=n%10;
        n/=10;
        if(last%2==1){
            tich*=last;
        }
    }
    printf("\nTich cac chu so le: %d",tich);
}