// Bài 113: Lập chương trình tính sin(x) với độ chính xác 0.00001 theo công thức:
//  Sin(x) = x – x^3/3! + x^5/5! + … + (-1)^n . x^2n + 1/(2n + 1)!
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define eps 1e-4 // Sai số
int main()
{
    float S, T, x, LuyThua, GiaiThua;
    int i, Dau = -1;

    printf("\nNhap x(radian): ");
    scanf("%f", &x);

    GiaiThua = 1;
    S = T = LuyThua = x;
    for(i = 3; T > eps; i += 2, Dau = -Dau)
    {
        T = (LuyThua *= x * x) / (GiaiThua *= i * (i - 1));
        S += Dau * T;
    }
    printf("\nCong thuc Taylor: sin (%.2f) = %.4f", x, S);
    printf("\nSin () cua math.h: sin(%.2f) = %.4f", x, sin(x));


    getch();
    return 0;
}