// Bài 117: Viết chương trình nhập n và tính tổng S(n) = x + x^2 + x^3 + … + x^n
#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    printf("\nNhap gia tri x va n: ");
    scanf("%d%d",&x,&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=pow(x,i);
    }
    printf("S=%d",sum);
}