// Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n.
#include<stdio.h>
int TinhTong(int n){
    int tong=0;
    for(int i=1; i<=n; i++){
        tong+=i;
    }
    return tong;
}
int main(){
    int n;
    do{
        printf("Nhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    int arr[100];
    int k=1,a=0;
    while(TinhTong(k)<=n){
        arr[a]=k;
        a++;
        k++;
    }
    printf("Gia tri lon nhat cua k la:%d",arr[a-1]);

}
/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    i = 0;
    S = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("Error: (n >= 0)\n"));
    while(S + i < n)
    {
        i++;         //
        S = S + i;  // tương đương 1 dòng S += ++i;
    }
        printf("\nGia tri k lon nhat de S(k) = 1 + 2 + ... + k < n la %d", i);
    getch();
    return 0;
}
*/ 