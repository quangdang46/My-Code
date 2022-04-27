// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
#include <stdio.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1; i<n; i++){
        if(n%i==0 && i%2==1){
            printf("%d ",i);
        }
    }
}