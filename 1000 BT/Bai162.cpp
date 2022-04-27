/* 
Bài 162: Cho mảng 1 chiều các số thực. Hãy viết hàm tìm một vị trí trong mảng thỏa 2 điều kiện: 
có 2 giá trị lân cận và giá trị tại đó bằng tích 2 giá trị lân cận.
Nếu mảng không tồn tại giá trị như vậy thì trả về giá trị -1
*/
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int TimGtAm(int arr[],int n){
    for(int i=1; i <n-1; i++){
        if(arr[i]==arr[i-1]*arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    printf("%d",TimGtAm(arr,n));
}