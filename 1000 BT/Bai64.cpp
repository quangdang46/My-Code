// 64. Giải phương trình 𝑎𝑥 + 𝑏 = 0.
#include<stdio.h>
int main(){
    int a,b;
    printf("GIAI PT AX+B=0\n");
    printf("\nNhap gia tri a va b: ");
    scanf("%d%d",&a,&b);
    if(a==0){
        if(b==0){
            printf("PT VSN\n");
        }else{
            printf("PT VO NGHIEM\n");
        }
    }else{
        printf("Phuong trinh co nghien duy nhat %f",-1.0*b/a);
    }
}