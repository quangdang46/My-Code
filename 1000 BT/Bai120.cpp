// Bài 120: Liệt kê tất cả các số chính phương nhỏ hơn n
#include<stdio.h>
#include<math.h>
bool Check(int n){
    if(n!=pow(sqrt(n),2)){
        return false;
    }
    return true;
}
int main(){
    int n;
    printf("\nNhap gia tri n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(Check(i)){
            printf("%d ",i);
        }
    }
}