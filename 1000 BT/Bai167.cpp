// Bài 167: Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa điều kiện ấy trong mảng 1 chiều các số nguyên. 
// Nếu mảng không có giá trị thỏa điều kiện trên thì trả về 0
#include<stdio.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
bool SoLe(int n){
    while(n!=0){
        int digit =n%10;
        if(digit%2==0){
            return false;
        }
        n/=10;
    }
    return true;
}
void KiemTra(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i < n; i++){
        if(SoLe(arr[i]) && arr[i]>max){
            max=arr[i];
        }
    }
    printf("Gia tri can tim: %d",max);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    KiemTra(arr,n);
}