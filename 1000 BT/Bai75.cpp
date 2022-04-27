// Bài 75: Kiểm tra số nguyên 4 byte có dạng 2^k hay không
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float x;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    x=log10(n)/log10(2);
    if(x==(int)x){
        printf("La so co dang 2^k");
    }else{
        printf("La so khong co dang 2^k");
    }
}