// Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
#include <stdio.h>
#include<math.h>
int main(){
    int n,x;
    float sum=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for (int i=1; i<=n; i++){
        sum+=pow(-1,i+1)*pow(x,i);
    }
    printf("Tong S=%f",sum);

}