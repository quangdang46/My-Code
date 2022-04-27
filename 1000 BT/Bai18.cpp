// Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
#include <stdio.h>
#include<math.h>
int Gt(int n){
    int dem=1;
    for(int i=1; i<=n;i++){
        dem*=i;
    }
    return dem;
}
int main(){
    int x,n,s=0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=2; i<=2*n; i+=2) {
        s+=1.0*pow(x,i)/Gt(i);
    }
    printf("Gia tri s= %d",1+s);
}