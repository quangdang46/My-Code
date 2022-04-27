// Bài 180: Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt đối của giá trị đứng liền sau nó và lớn hơn trị tuyệt đối của giá trị đứng liền trước nó
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void DieuKien(int arr[],int n){
    int x,y;
    printf("\nNhap x va y: ");
    scanf("%d%d",&x,&y);
    for(int i=0; i < n; i++){
        if(i==0 || i==n-1){
            continue;
        }else{
            if(arr[i]<abs(arr[i-1]) && arr[i]>abs(arr[i+1])){
                printf("%d ",arr[i]);
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
    DieuKien(arr,n);
}