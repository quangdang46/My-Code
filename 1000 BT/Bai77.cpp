// Bài 77: Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … + n
#include<stdio.h>
int main(){
    int sum=0,n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    printf("Sum=%d\n",sum);
}