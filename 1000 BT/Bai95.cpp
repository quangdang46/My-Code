// Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó
#include<stdio.h>
int TriTuyetDoi(int n){
    return n<0 ? (-1)*n : n;
}
int main(){
    int a,b,c;
    printf("Nhap a b c: ");
    scanf("%d%d%d",&a,&b,&c);
    a=TriTuyetDoi(a);
    b=TriTuyetDoi(b);
    c=TriTuyetDoi(c);
    printf("%d %d %d",a,b,c);

}