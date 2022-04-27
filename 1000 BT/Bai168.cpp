// Bài 168: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị lớn nhất trong mảng có dạng 5^k.
//  Nếu mảng khong tồn tại giá trị 5^k thì hàm sẽ trả về 
#include<stdio.h>
#include<math.h>
#include<limits.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
bool Mu(int n){
    int h=log10(n)/log10(5);
    if(h==(int)h){
        return true;
    }
    return false; 
}
void KiemTra(int arr[],int n){
    int max=INT_MIN,ok=0;
    for(int i=0; i < n; i++){
        if(Mu(arr[i]) && arr[i]>max){
            max=arr[i];
            ok=1;
        }
    }
    if(ok==1){
        printf("Gia tri can tiem la la: %d",max);
    }else{
        printf("-1");
    }

}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    KiemTra(arr, n);
}