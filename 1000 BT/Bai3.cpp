#include<stdio.h>

int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    float tong=0;
    for(int i=1; i<=n;i++){
        tong+=1.0/i;
    }
    printf("S=%f",tong);
}