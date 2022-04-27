// Bài 68: Tính S(x, n) = -x^2 + x^4 + … + (-1)^n * x^2n
#include <stdio.h>
#include<math.h>
int main(){
    int n,x;
    float sum=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for (int i=1; i<=n; i++){
        sum+=pow(-1,i)*pow(x,2*i);
    }
    printf("Tong S=%f",sum);

}