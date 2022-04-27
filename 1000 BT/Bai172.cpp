// .Cho mảng một chiều các số nguyên dương. Hãy viết hàm tìm bội 
// chung nhỏ nhất của tất cả các phần tử trong mảng.
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
int BCNN(int a,int b){
    if(a==0 || b==0){
        return 0;
    }else{
        int bc=a*b;
        while(a!=b){
            if(a>b){
                a-=b;
            }else{
                b-=a;
            }
        }
        return bc/a;
    }
}
int TimBoi(int arr[],int n){
    int bcnn;
    bcnn=BCNN(arr[0],arr[1]);
    for(int i=2;i< n; i++){
        bcnn=BCNN(bcnn,arr[i]);
    }
    return bcnn;
}
/*
int UCLN(int a, int b){
    if(a==b) return a;
    if(a>b) 
        UCLN(a-b,b);
    else
        UCLN(a,b-a);
}
int BCNN(int a, int b){
    return (a*b/UCLN(a,b) );

*/
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("BCNN:%d",TimBoi(arr,n));
}