//  Viết chương trình nhập vào hai số thực. Kiểm tra xem chúng có cùng dấu hay không
#include<stdio.h>

int main(){
    float x,y;
    printf("Nhap 2 so a va b: ");
    scanf("%f%f",&x,&y);
    if(x*y<0){
        printf("a va b trai dau!");
    }else{
        printf("a va b cung dau!");
    }
}