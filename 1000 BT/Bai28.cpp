// Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
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
    printf("Gia tri s= %d",s);
} 