// Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000.
#include<stdio.h>
int main(){
    int i=0,sum=0;
    while(sum<1000){
        sum+=i;
        i++;
    }
    printf("Gia tri n nha nhat la:%d",i+1);
}