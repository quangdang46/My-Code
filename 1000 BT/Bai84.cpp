// Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0
#include<stdio.h>

int main(){
    int a,b;
    printf("Nhap a va b: ");
    scanf("%d%d",&a,&b);
    if(a==0){
        if(b==0){
            printf("Pt vo so nghiem");
        }else{
            printf("Pt vo nghiem");
        }
    }else{
        printf("Pt co nghiem duy nhat: %f",-b*1.0/a);
    }
}