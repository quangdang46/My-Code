// Bài 116: Viết chương trình nhập n và tính tổng S = 1 + 2 + 3 + … + n
#include<stdio.h>
int TinhTong(int n){
    if(n==0) return 0;
    return n+TinhTong(n-1);
}

int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    printf("Tong cua day tu 1->n: %d",TinhTong(n));
}