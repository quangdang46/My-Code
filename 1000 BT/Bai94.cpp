// Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
#include<stdio.h>
int main(){
    for(int i=1; i<100; i+=2){
        if(i==5 || i==7 || i==93){
            continue;
        }else{
            printf("%d ",i);
        }
    }
}
