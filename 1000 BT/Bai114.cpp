// Bài 115: Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
#include<stdio.h>
struct SinhVien{
    char ten[20];
    float toan;
    float van;
};
typedef struct SinhVien SV;
float TinhTrungBinh(SV &sv){
    float tb;
    tb=(sv.toan+sv.van)/2.0;
    return tb;
}
void NhapSinhVien(SV &sv){
    getchar();
    printf("Nhap ten sinh vien: ");
    fgets(sv.ten, sizeof(sv.ten),stdin);
    printf("Nhap diem toan: ");
    scanf("%f",&sv.toan);
    printf("Nhap diem van: ");
    scanf("%f",&sv.van);
}

void CapNhatSinhVien(int n,SV arr[]){
    for(int i=1;i<=n; i++){
        NhapSinhVien(arr[i]);
    }
}
void XuatSinhVien(SV sv){
    printf("Ten: %s\n",sv.ten);
    printf("Diem toan: %f\n",sv.toan);
    printf("Diem van: %f\n",sv.van);
    printf("Diem trung binh: %f",TinhTrungBinh(sv));
}
void XuatNSinhVien(int n,SV arr[]){
    for(int i=1;i<=n; i++){
        XuatSinhVien(arr[i]);
    }
}
int main(){
    int n;
    SV arr[100];
    SV sv;
    printf("\nNhap so luong sinh vien: ");
    scanf("%d", &n);
    CapNhatSinhVien(n,arr);
    XuatNSinhVien(n,arr);
}
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
char hoten [30];
int toan;
int van;
float DiemTrungBinh;

void Nhap()
{
    fflush(stdin);
    printf("\nNhap ho ten: ");
    gets(hoten);

    printf("\nNhap toan: ");
    scanf("%d", &toan);

    printf("\nNhap van: ");
    scanf("%d", &van);
}

void XuLy()
{
    DiemTrungBinh = (toan + van) / 2.0;
}

void Xuat()
{
    printf("\nHo ten: %s", hoten);
    printf("\nToan: %d", toan);
    printf("\nVan: %d", van);
    printf("\nDiem Trung Binh: %f", DiemTrungBinh);
}
int main()
{
    Nhap();
    XuLy();
    Xuat();

    getch();
    return 0;
}

*/ 