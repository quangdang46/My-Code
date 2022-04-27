// Bài 78: Liệt kê tất cả các ước số của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}