// Cho số nguyên dương n. Kiểm tra số dương n có phải là số hoàn thiện hay không?
#include<stdio.h>
int TinhUoc(int n){
    int tong=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            tong+=i;
        }
    }
    return tong;
}
int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    if(TinhUoc(n)==n){
        printf("%d la so hoan thien",n);
    }else{
        printf("%d khong la so hoan thien",n);
    }
}
