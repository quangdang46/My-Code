// Bài 159: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003.
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về  -1
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int TimGiaTri(int arr[],int n){
    for(int i=0; i < n; i++){
        if(arr[i]>2003){
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
    printf("%d",TimGiaTri(arr,n));

}
