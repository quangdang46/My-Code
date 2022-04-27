// Bài 7: Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include <stdio.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    float tong=0;
    for (int i=1;i<=n;i++){
        tong+=(2*n+1)*1.0/(2*n+2);
    }
    printf("Gia tri S= %f",tong);
}