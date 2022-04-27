#include<stdio.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n%2==0);
    float tong=0;
    for(int i=1;i<=n;i+=2){
        tong+=1.0/i;
    }
    printf("\nS=%d",tong);
}