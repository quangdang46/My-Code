// 105.Viết chương trình nhập một số nguyên có hai chữ số. Hãy in ra cách đọc của số nguyên này.
#include<stdio.h>
void DocHangChuc(int b){
    switch(b){
        case 1:printf("Muoi");break;
        case 2:printf("Hai muoi");break;
        case 3:printf("Ba muoi");break;
        case 4:printf("Bon muoi");break;
        case 5:printf("Nam muoi");break;
        case 6:printf("Sau muoi");break;
        case 7:printf("Bay muoi");break;
        case 8:printf("Tam muoi");break;
        case 9:printf("Chin muoi");break;
    }
}
void DocDonVi(int a){
    switch(a){
        case 0:break;
        case 1:printf(" mot");break;
        case 2:printf(" hai");break;
        case 3:printf(" ba");break;
        case 4:printf(" bon");break;
        case 5:printf(" nam");break;
        case 6:printf(" sau");break;
        case 7:printf(" bay");break;
        case 8:printf(" tam");break;
        case 9:printf(" chin");break;
    }
}
int main(){
    int n,a,b;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    DocHangChuc(b);
    DocDonVi(a);
}