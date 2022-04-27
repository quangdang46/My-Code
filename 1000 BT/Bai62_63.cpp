// Cho hai số nguyên dương a và b. Hãy vẽ lưu đồ tìm ước chung lớn nhất,BCNN của hai giá trị này.
#include<stdio.h>

int main(){
    int a,b,ucln;
    do{
        printf("\nNhap gia tri a: ");
        scanf("%d",&a);
        printf("\nNhap gia tri b: ");
        scanf("%d",&b);
    }while(a<0 || b<0);
    if(a==0 || b==0){
        printf("UCLN %d",a+b);
    }else{
        int bc=a*b;
        while(a!=b){
            if(a>b){
                a=a-b;
            }else{
                b=b-a;
            }
            ucln=a;
        }
        printf("UCLN %d",a);
        printf("\nBCNN %d",bc/a);
    }
}