// Bài 138: Tìm vị trí của giá trị chẵn đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì sẽ trả về -1
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Chan(int arr[],int n){
    int index,ok=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            index=i;
            ok=1;
            break;
        }
    }
    if(ok==1){
        printf("Gia tri chan cuoi cung la: %d",arr[index]);
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
    Chan(arr,n);
}