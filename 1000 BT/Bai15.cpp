// Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
#include<stdio.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    int a=0,s=0;
    for(int i=1; i<=n; i++){
        a+=i;
        s+=i+1.0/a;
    }
    printf("Gia tri S= %d",s);
}