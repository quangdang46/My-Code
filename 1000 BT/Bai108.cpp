// 108.Viết hàm tính S = x^y
#include<stdio.h>
long long NewPow(int x, int y){
    if(y==0) return 1;
    return x*NewPow(x,y-1);
}
int main(){
    int x,y;
    printf("\nNhap x va y: ");
    scanf("%d%d",&x,&y);
    printf("%d^%d = %lld\n",x,y,NewPow(x,y));
}
/*
#include<stdio.h>
#include<conio.h>
double Power_n(double x, long n){
    // n >= 0
    double result = 1;
    while(n--)
    {
        result = result * x;
    }
    return result;
}
double qPower_n(double x, long n){
    // n >= 0
    double result = 1;
    while(n)
    {
        if(n % 2 == 1)
        {
            result = result * x;
        }
        x = x * x;
        n = n / 2;
    }
    return result;
}
int main(){
    double x = 4;
    long n = 2;
    double z;
    z = qPower_n(x, n);
    printf("z = %f", z);

    getch();
    return 0;
}
*/ 