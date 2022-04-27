// Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
#include<stdio.h>
int main(){
    int n,last;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        last=n%10;
        n/=10;
    }
    printf("\nChu so dau tien la: %d",last);
}