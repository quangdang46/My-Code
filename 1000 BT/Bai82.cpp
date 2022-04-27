// Viết chương trình tìm số lớn nhất trong ba số thực a, b, c
#include<stdio.h>
int Max2So(int a, int b){
    return a>b?a:b;
}
int main(){
    int a,b,c;
    printf("Nhap a b c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Max 3 so la %d",Max2So(Max2So(a,b),c));
}