// Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    // Nhập n ( n > 0 )
    do
    {
        printf("\nNhap vao n ( n > 0 ): ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ");
        }

    } while (n <= 0);

    bool CheckGiamDan = true;
    int themang = n;
    int ChuSoCuoi = themang % 10;  // lấy ra chữ số cuối
    themang /= 10;

    printf("\nCac chu so cua %d co giam dan tu trai sang phai khong ?\n ", n);
    while(themang != 0)
    {
        int ChuSoKeCuoi = themang % 10;
        themang /= 10;
        if (ChuSoKeCuoi < ChuSoCuoi)
        {
            CheckGiamDan = false;
            break;
        }
        else
        {
            ChuSoCuoi = ChuSoKeCuoi;  // Cập nhật lại chữ số cho lần so sánh tiếp theo
        }
    }
    if(CheckGiamDan)
        printf("Dung !");
    else
        printf("Sai !");
    

    getch();
    return 0;
}