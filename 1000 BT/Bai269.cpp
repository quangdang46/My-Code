// Bài 269: Thêm x vào trong mảng tăng nhưng vẫn giữ nguyên tính tăng của mảng
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
// void SapXep(int arr[],int n){
//     for(int i=0; i < n-1; i++){
//         for(int j=i+1; j < n; j++){
//             if(arr[j]<arr[i]){
//                 int tmp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = tmp;
//             }
//         }
//     }
// }
// void ChenPhanTu(int arr[],int &n,int k,int x){
//     for(int i=n; i >k; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[k]=x;
//     n++;
// }
// void DieuKien(int arr[],int &n,int x){
//     SapXep(arr,n);
//     for (int i=0;i< n-1; i++){
//         if(x>arr[i]&&arr[i+1]>x){
//             ChenPhanTu(arr,n,i+1,x);
//         }
//     }
// }
// int main(){
//     int a[100];
//     int n,x;
//     printf("Nhap n:");
//     scanf("%d",&n);
//     NhapMang(a,n);
//     printf("Nhap x: ");
//     scanf("%d",&x);
//     DieuKien(a,n,x);
//     XuatMang(a,n);
// }


/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
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

void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SapXepTangDan(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}
/*
Cho chạy từ cuối về đầu, nếu thấy số nào lớn hơn x thì cho nó dịch về sau 1 vị trí.
*/
void ChenXVaoMangTang(int a[], int &n, int x)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        if(x < a[i])
        {
            int temp = x;
            for(j = n; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = temp;
            break;
        }
    }
    n++;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    SapXepTangDan(a, n);
    int PhanTuThem;


    printf("\nNhap vao phan tu can them: ");
    scanf("%d", &PhanTuThem);

    ChenXVaoMangTang(a, n, PhanTuThem);
    printf("\nMang sau khi them:\n");
    xuat(a, n);

    getch();
    return 0;
}