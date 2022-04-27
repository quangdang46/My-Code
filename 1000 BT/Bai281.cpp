// Bài 281: Hãy đưa chẵn về đầu, lẻ về cuối, phần tử 0 nằm giữa mảng
/*
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
    int cnt=n-1;
    for(int i=0; i < n; i++){
        if(arr[i]%2==0){
            int tmp_1=arr[res];
            arr[res] = arr[i];
            arr[i] = tmp_1;
            res++;
        }else if(arr[i]%2==1){
            int tmp_2=arr[cnt];
            arr[cnt] = arr[i];
            arr[i] = tmp_2;
            cnt--; 
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
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void DuaChanVeDau(int a[], int ViTriDoi)
{
    int tam = a[ViTriDoi];           // biến tạm lưu tất cả các giá trị thỏa ĐK đổi
    for(int i = ViTriDoi; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = tam;
}

void Dua0VaoGiua(int a[], int ViTriDoi, int ViTriChanCuoi)
{
    // Do 0 nằm giữa mảng nên 0 sẽ là giá trị chẵn cuối để thỏa yêu cầu bài toán
    for(int i = ViTriDoi; i > ViTriChanCuoi; i--)
    {
        a[i] = a[i - 1];        
    }
    a[ViTriChanCuoi] = 0;
}

void DuaChanVeDauLeVeCuoi0NamGiuaMang(int a[], int n)
{
    int i, dem;
    int ViTriChanCuoi = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] != 0)
        {
            DuaChanVeDau(a, i);
        }
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            ViTriChanCuoi = i;
            break;
        }
    }
    for(i; i < n; i++) // bỏ khởi tạo i để tránh dư 1 số 0 
    {
        if(a[i] == 0)
        {
            Dua0VaoGiua(a, i, ViTriChanCuoi);
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DuaChanVeDauLeVeCuoi0NamGiuaMang(a, n);
    printf("\nDua chan ve dau, le ve cuoi, 0 nam giua mang: ");
    xuat(a, n);

    getch();
    return 0;
}