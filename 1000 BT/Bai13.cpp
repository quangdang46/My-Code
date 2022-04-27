// Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
#include <stdio.h>
#include<math.h>
int main() {
    int x,n,s=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=1; i<=n; i++) {
        s+=pow(x,2*i);
    }
    printf("Gia tri s= %d",s);
}