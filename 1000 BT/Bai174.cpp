/*
174.(*) Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng 
khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a,b) 
trong mảng thỏa điều kiện a <= b
*/
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    for(int i=0;i < n; i++){
        for(int j=0; j < n; j++){
            if(i==j){
                continue;
            }else{
                if(arr[i]<=arr[j]){
                    printf("(%d,%d),",arr[i],arr[j]);
                }
            }
        }
    }

}
int main(){
    int n;
    int arr[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr, n);
}