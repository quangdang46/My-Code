// Bài 158: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void TimDoan(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    if(abs(max)>abs(min)){
        if(max>0){
            printf("Doan [x,-x]:[-%d,%d]",max,max);
        }else{
            printf("Doan [x,-x]:[%d,%d]",max,(-1)*max);
        }
    }
    if(abs(min)>abs(max)){
        if(min>0){
        printf("Doan [x,-x]:[-%d,%d]",min,min);
        }else{
            printf("Doan [x,-x]:[%d,%d]",min,(-1)*min);
        }
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    TimDoan(arr, n);
}
