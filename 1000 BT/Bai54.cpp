// Bài 54: Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n
#include<stdio.h>
#include<limits.h>
int main(){
    int n,dem=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    int a=n;
    int min=INT_MAX;
    do{
        int last=n%10;
        if(last<min){
            min=last;
        }
    }while(n/=10);

    do{
        int last=a%10;
        if(last==min){
            dem++;
        }
    }while(a/=10);

    printf("\nChu so nho nhat la: %d co so luong %d",min,dem);
}
/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    int min, dem;
    dem = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    min = n % 10;  // khởi tạo min
    if(n == 0)
        min = 0;

    do
    {
        i = n % 10;
        if(i == min)
            dem++;
       if(i < min)
           min = i;
    }while(n /= 10);

    printf("\nChu so nho nhat la %d", min);
    printf("\nSo luong chu so nho nhat la %d", dem);

    getch();
    return 0;
}
*/