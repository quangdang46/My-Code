// Bài 139: Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về giá trị  -1
#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
bool CheckSHH(int n){
    int sum =0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum +=i;
        }
    }
    if(n==sum){
        return true;
    }
    return false;
}
void TimSHH(int arr[],int n){
    int ok=0,index;
    for(int i=n-1; i >=0; i--){
        if(CheckSHH(arr[i])){
            ok=1;
            index=i;
            break;
        }
    }
    if(ok==1){
        printf("Vi tri can tim la:%d",index);
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
    TimSHH(arr,n);

}