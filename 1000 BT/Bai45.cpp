// Bài 45: Hãy tính tich các chữ số của số nguyên dương n
#include<stdio.h>
int main(){
    int n,tich=1;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        tich*=n%10;
        n/=10;
    }
    printf("\nTich cac chu so: %d",tich);
}