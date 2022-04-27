// Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
#include<stdio.h>
int main(){
    int n,a=0;
    int arr[10];
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        arr[a]=n%10;
        a++;
        n/=10;
    }
    bool check=true;
    for(int i=0;i<a; i++){
        if(arr[i]<arr[i+1]){
            check=false;
            break;
        }
    }

    if(check==true){
        printf("Cac chu so tang dan!");
    }else{
        printf("Cac chu so khong tang dan!");
    }
}
/*
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    // Nhập n ( n > 0 )
    do
    {
        printf("\nNhap vao n ( n > 0 ): ");
        scanf_s("%d", &n);

        if (n <= 0)
        {
            printf("\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ");
        }

    } while (n <= 0);

    bool CheckTangDan = true;
    int themang = n;
    int ChuSoCuoi = themang % 10;  // lấy ra chữ số cuối
    themang /= 10;

    printf("\nCac chu so cua %d co tang dan tu trai sang phai khong ?\n ", n);
    while(themang != 0)
    {
        int ChuSoKeCuoi = themang % 10;
        themang /= 10;
        if (ChuSoCuoi < ChuSoKeCuoi)
        {
            CheckTangDan = false;
            break;
        }
        else
        {
            ChuSoCuoi = ChuSoKeCuoi;  // Cập nhật lại chữ số cho lần so sánh tiếp theo
        }
    }
    if(CheckTangDan)
        printf("\Dung !");
    else
        printf("Sai !");
    

    getch();
    return 0;
}
*/