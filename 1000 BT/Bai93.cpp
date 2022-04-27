// Bài 93: Viết chương trình kiểm tra 1 số có phải là số nguyên tố hay không
#include<stdio.h>
void Check(int n){
    int check=1,dem=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==2){
        printf("La so nguyen to!");
    }else{
        printf("Khong phai so nguyen to!");
    }
}
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<1);
    Check(n);
}