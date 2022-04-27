// Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
bool Check(int arr[],int n){
    for(int i=0; i < n; i++){
        if(arr[i]%2==0 && arr[i]<2004){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    for(int i=0;i<n; i++){
        if(Check(arr,n)){
            printf("Da tim thay so thoa man!");
        }else{
            printf("Khong tim thay so thoa man!");
        }
    }
}
