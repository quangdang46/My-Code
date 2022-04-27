// Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
#include <stdio.h>
#include<math.h>
int main() {
    int x,n,s=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=01; i<=n; i++) {
        s+=pow(x,2*i+1);
    }
    printf("Gia tri s= %d",s);
}