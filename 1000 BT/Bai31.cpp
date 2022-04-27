// Cho số nguyên dương n. Kiểm tra số nguyên dương n có phải là số nguyên tố hay không?
#include<stdio.h>
int CheckSNT(int n){
    int check=0;
    for(int i=0; i<=n;i++){
        if(n%i==0){
            check+=1;
        }
    }
    return check;
}
int main(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    if(CheckSNT(n)==2){
        printf("%d la so nguyen to ",n);
    }else{
        printf("%d khong phai so hoan thien",n);
    }
}
