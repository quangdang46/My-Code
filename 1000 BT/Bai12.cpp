// Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
#include <stdio.h>
#include<math.h>
int main() {
    int x,n,s=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=01; i<=n; i++) {
        s+=pow(x,i);
    }
    printf("Gia tri s= %d",s);
}