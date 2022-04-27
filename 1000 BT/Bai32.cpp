//  Cho số nguyên dương n. Kiểm tra số nguyên dương n có phải là số chính phương hay không?
#include<stdio.h>
#include<math.h>
void CheckSCP(int n){
    if(n==sqrt(n)){
        printf("%d la so chinh phuong",n);
    }else{
        printf("%d khong phai la so chinh phuong",n);
    }
}
int main(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    CheckSCP(n);   
}
