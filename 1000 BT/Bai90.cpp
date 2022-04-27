// Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N
#include<stdio.h>
int main(){
    int n,sum=0;
    int i=0;
    printf("Nhap n: ");
    scanf("%d", &n);
    while(sum<n){
        sum+=i;
        i++;
    }
    printf("Gia tri lon nhat cua m: %d",i);
}