// Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
#include <stdio.h>
#include<math.h>
int main() {
    int x,n,s=0,a=1;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=2; i<=n; i++) {
        a*=2;
        s+=1.0*pow(x,i)/a;
    }
    printf("Gia tri s= %d",1+s);
}