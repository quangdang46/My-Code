// Bài 21: Tính tổng tất cả các “ước số” của số nguyên dương n
#include <stdio.h>
int main(){
    int n,s=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1; i<n; i++){
        if(n%i==0){
            s+=i;
        }
    }
    printf("Tong cac uoc nguyen s= %d",s);
}