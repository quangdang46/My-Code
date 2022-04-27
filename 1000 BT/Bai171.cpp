// Bài 171: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
int UCLN(int a,int b){
    if(a==0 || b==0){
        return a+b;
    }else{
        while(a!=b){
            if(a>b){
                a-=b;
            }else{
                b-=a;
            }
        }
        return a;
    }
}
int TimUoc(int arr[],int n){
    int ucln;
    ucln=arr[0];
    for(int i=1;i< n; i++){
        ucln=UCLN(ucln,arr[i]);
    }
    return ucln;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("UCLN:%d",TimUoc(arr,n));
}