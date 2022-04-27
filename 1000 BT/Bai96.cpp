// Viết chương trình nhập giá trị x sau khi tính giá trị của hàm số:
#include<stdio.h>
int main(){
    int x,y;
    printf("\nNhap gia tri x: ");
    scanf("%d",&x);
    if(x>=5){
        y=2*x*x+5*x+9;
    }else{
        y=-2*x*x+4*x-9;
    }
    printf("f(x)=%d",y);
}

