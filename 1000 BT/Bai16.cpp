// Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
#include <stdio.h>
#include<math.h>
int main() {
    int x,n,s=0,a=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=1; i<=n; i++) {
        a+=1;
        s+=1.0*pow(x,i)/a;
    }
    printf("Gia tri s= %d",s);
}