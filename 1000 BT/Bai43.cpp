// Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
#include<stdio.h>
#include<math.h>
int main(){
    int n,soluong;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    soluong =(int)log10(n)+1;
    printf("\nSo luong chu so cua n: %d",soluong);
}
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long themang, n;
    int sochuso;

    do
    {
    printf("\nNhap n: ");
    scanf("%ld", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    sochuso = 0;
    themang = n;

    if(n == 0)
            sochuso = 1;
    while(themang != 0)
    {
        sochuso = sochuso + 1;
        themang = themang / 10;
    }
    printf("\nSo chu so cua %ld la %d", n, sochuso);

    //int sochuso = n == 0 ? 1 : (int)log10((float)n) + 1;

    getch();
    return 0;
}
*/