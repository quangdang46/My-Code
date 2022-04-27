// Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    int min=INT_MAX;
    do{
        int last=n%10;
        if(last<min){
            min=last;
        }
    }while(n/=10);
    printf("\nChu so nho nhat la: %d",min);
}