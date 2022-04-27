// Bài 10: Tính T(x, n) = x^n
#include <stdio.h>
#include<math.h>
int main(){
    int n,x;
    printf("\nNhap gia tri x: ");
    scanf("%d",&x);
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    printf("\ngia tri s= %d",pow(x,n));
}