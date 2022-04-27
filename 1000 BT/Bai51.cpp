// Bài 51: Tìm chữ số lớn nhất của số nguyên dương n
#include<stdio.h>

int main(){
    int n,a=0;
    int arr[100];
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        arr[a]=n%10;
        a++;
        n/=10;
    }
    int max=arr[0];
    for(int i= 1;i < a;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nChu so lon nhat trong mang la:%d",max);
}
/*
#include<stdio.h>
#include<conio.h>


int main()
{
    int i, n;
    int max;
    max = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    if(n == 0)
        max = 0;

    do
    {
        i = n % 10;
       if(i > max)
       {
           max = i;
       }
    }while(n /= 10);

    printf("\nChu so lon nhat la %d", max);

    getch();
    return 0;
}
*/