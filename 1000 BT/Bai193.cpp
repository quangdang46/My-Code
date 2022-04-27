// Bài 193: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị trong mảng có dạng 3^k. 
// Nếu mảng không có giá trị đó thì trả về 0
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
bool Check(int n){
    int h=log10(n)/log10(3);
    if(h==(int)h){
        return true;
    }
    return false;
}
void DieuKien(int arr[],int n){
    int ok=0;
    for(int i=0; i < n; i++){
        if(Check(arr[i])){
            printf("%d ",arr[i]);
            ok=1;
        }
    }
    if(ok==0){
        printf("-1");
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    DieuKien(arr,n);
}