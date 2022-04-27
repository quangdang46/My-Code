// Bài 72: Tính S(x, n) = – x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
#include <stdio.h>
#include<math.h>
int main(){
    int n,x,a=1;
    printf("Nhap gia tri x va n:");
    scanf("%d%d",&x,&n);
    float sum = 0;
    for(int i=1; i<=n; i++){
        a*=i;
        sum +=pow(-1,i)*pow(x,i)/a;
    }
    printf("Tong S=%f",sum);
}