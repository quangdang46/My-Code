// Bài 92: Tìm ước số chung lớn nhất của 2 số nguyên dương
#include<stdio.h>
int main(){
    int a,b,ucln;
    printf("Nhap 2 so a va b: ");
    scanf("%d%d",&a,&b);
    if(a>=0 &&b>=0){
        if(a==0 || b==0){
            printf("UCLN: %d",a+b);
        }else{
            while(a!=b){
                if(a>b){
                    a=a-b;
                }else{
                    b=b-a;
                }
                ucln=a;
            }
            printf("UClN: %d",ucln);
        }
    }else{
        printf("Khong ton tai uoc!");
    }
}