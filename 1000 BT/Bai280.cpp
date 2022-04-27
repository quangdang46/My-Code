// Bài 280: Hãy đưa số 1 về đầu mảng


#include<stdio.h>
void NhapMang(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void XuatMang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
// void XoaPhanTu(int arr[],int &n,int k){
//     for(int i=k; i < n; i++){
//         arr[i] = arr[i+1];
//     }
//     n--;
// }
void DieuKien(int arr[],int n){
    int res = 0;
    for(int i=0; i < n; i++){
        if(arr[i] == 1){
            int tmp=arr[res];
            arr[res] = arr[i];
            arr[i] = tmp;
            res++;
        }
    }
}
// 0 3 -8 -10 13 14 16
int main(){
    int a[100];
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(a,n);
    DieuKien(a,n);
    XuatMang(a,n);
}