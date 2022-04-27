// Bài 268: Hãy tạo mảng b từ mảng a các giá trị 0,1 để mảng có tính chẵn lẻ
// #include<stdio.h>
// void NhapMang(int arr[],int n){
//     for(int i=0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void XuatMang(int arr[],int n){
//     for(int i=0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
// }
// void chenvaocuoimang(int arr[],int &n,int k,int res){
//     for(int i=n; i >k; i--){
//         arr[i] =arr[i-1];
//     }
//     arr[k]=res;
//     n++;
// }
// void DieuKien(int arr[],int n,int b[]){
//     for(int i=0; i < n-1; i++){
//         if(arr[i]%2==0 &&arr[i+1]%2==0){
//             chenvaocuoimang(arr,n,i,1);
//         }else if(arr[i]%2!= 0 &&arr[i+1]%2!=0){
//             chenvaocuoimang(arr,n,i,0);
//         }
//     }
//     for(int i=0;i<n; i++){
//         b[i]=arr[i];
//     }
// }
// int main(){
//     int a[100],b[100];
//     int n,x,k;
//     printf("Nhap n:");
//     scanf("%d",&n);
//     NhapMang(a,n);
//     XuatMang(a,n);
//     DieuKien(a,n,b);
//     printf("\n__________\n");
//     XuatMang(b,n);   
// }