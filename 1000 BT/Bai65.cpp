//65. Giải phương trình 𝑎𝑥^2 + 𝑏𝑥 + 𝑐 = 0.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    int denta;
    float x1,x2;
    printf("Nhap a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    denta =pow(b,2)-4*a*c;
    if(denta<0){
        printf("Pt vo NGHIEM");
    }else if(denta=0){
        printf("Phuong trinh co nghiem duy nhat :%f",-1.0*b/(2*a));
    }else{
        x1=(-b+sqrt(denta))/(2*a);
        x2=(-b-sqrt(denta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet: %f \n %f",x1,x2);
    }
}