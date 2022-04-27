// Bài 89: Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
#include<stdio.h>
int main(){
    int n,sum=0;
    for(int i=1;i<=n; i+=2){
        sum+=i;
    }
    printf("%d\n",sum);
}