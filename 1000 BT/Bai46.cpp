// Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
#include<stdio.h>
int main(){
    int n,dem=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        int last=n%10;
        n/=10;
        if(last%2==1){
            dem++;
        }
    }
    printf("\nso cac chu so le: %d",dem);
}