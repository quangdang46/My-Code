#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    int tong=0;
    for(int i=1;i<=n; i++){
        tong+=pow(i,2);
    }
    printf("S=%d",tong);
}