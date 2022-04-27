// Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
#include <stdio.h>
#include<math.h>
int Gt(int n){
    int dem=1;
    for(int i=1; i<=n;i++){
        dem*=i;
    }
    return dem;
}
int main() {
    int x,n,s=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=1; i<=n; i+=2) {
        s+=1.0*pow(x,i)/Gt(i);
    }
    printf("Gia tri s= %d",1+s);
}