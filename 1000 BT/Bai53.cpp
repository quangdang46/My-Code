// Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
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
    int dem=0;
    for(int i= 0;i < a;i++){
        if(arr[i]==a){
            dem++;
        }
    }

    printf("\nChu so lon nhat trong mang la:%d so luong %d",max,dem);
}