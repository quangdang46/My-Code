// Tính S(n) = 1 + 2 + 3 + … + n.
#include<stdio.h>

int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    int tong=0;
    for(int i=0;i<n;i++){
        tong+=i;
    }
    printf("S=%d",tong);
}
