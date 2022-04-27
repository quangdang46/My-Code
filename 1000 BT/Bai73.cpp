// Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!

#include <stdio.h>
#include<math.h>
int Gt(int n){
    int gt=1;
    for(int i=1; i<=n; i++){
        gt*=i;
    }
    return gt;
}
int main(){
    int n,x;
    float sum = 0;
    printf("Nhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    for(int i=0;i<=n; i++){
        sum +=pow(-1,i+1)*pow(x,2*i)/Gt(2*i);
    }
    printf("Tong S=%f",sum);

}