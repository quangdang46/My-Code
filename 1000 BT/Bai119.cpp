// Bài 119: Liệt kê tất cả các số nguyên tố nhỏ hơn n
#include<stdio.h>
#include<math.h>
bool Check(int n){
    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int n;
    printf("\nNhap gia tri n:");
    scanf("%d",&n);
    for(int i=2; i<=n; i++){
        if(Check(i)){
            printf("%d ",i);
        }
    }
}