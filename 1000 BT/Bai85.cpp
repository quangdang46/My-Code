// Bài 85: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm
#include<stdio.h>
int main(){
    int n;
    printf("Nhap thang: ");
    scanf("%d", &n);
    if(n>=1 && n<=3)
        printf("QUY 1");
    if(n>=4 && n<=6)
        printf("QUY 2");
    if(n>=7 && n<=9)
        printf("QUY 3");
    if(n>=10 && n<=12)
        printf("QUY 4");
}   