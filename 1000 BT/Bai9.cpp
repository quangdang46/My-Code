// Bài 9: Tính T(n) = 1 x 2 x 3…x N
#include<stdio.h>
int main(){
    int n,s=1;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1; i<n ; i++){
        s*=n;
    }
    printf("Gia tri s=%d",s);
}