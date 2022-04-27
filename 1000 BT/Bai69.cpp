// Bài 69: Tính S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^2n+1
#include <stdio.h>
#include<math.h>
int main(){
    int n,x;
    float sum=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for (int i=0; i<=n; i++){
        sum+=pow(-1,i)*pow(x,2*i+1);
    }
    printf("Tong S=%f",sum);

}