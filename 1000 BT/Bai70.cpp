// Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)
#include <stdio.h>
#include<math.h>
int main(){
    int n,x,a=0;
    float sum=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++){
        a+=i;
        sum+=pow(-1,i+1)*1.0/a;
    }
    printf("Tong S s= %f",sum);
}