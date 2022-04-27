// Bài 165: Cho mảng 1 chiều các số nguyên. Hãy tìm giá trị đầu tiên có chữ số đầu tiên là chữ số lẻ
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int KiemTra(int n){
    int sl;
    sl=(int)log10(n)+1;
    n=n/pow(10,sl-1);
    if(n%2==1){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    for(int i = 0; i < n; i++){
        if(KiemTra(arr[i])){
            printf("%d",arr[i]);
            break;
        }
    }
}