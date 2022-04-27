// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
#include <stdio.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1; i<n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}