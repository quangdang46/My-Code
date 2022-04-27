// Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
#include <stdio.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    float tong=0;
    for (int i=1;i<=n;i++){
        tong+=n*1.0/(n+1);
    }
    printf("Gia tri S= %f",tong);
}