// Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
#include <stdio.h>
int main(){
    int arr[20];
    int n,i,s=0,a=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1; i<n; i++){
        if(n%i==0 && i%2==1){
            arr[a]=i;
            a++;    
        }
    }
    int Max=arr[0];
    for(i = 1;i <= a;i++){
        if (arr[i]>Max){
            Max=arr[i];
        }
    }
    printf("Uoc le lon nhat cua n: %d",Max);
}