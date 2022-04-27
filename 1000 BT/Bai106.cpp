// 106.Viết chương trình nhập vào một số nguyên có ba chữ số. Hãy in ra cách đọc của nó.
#include<stdio.h>
void DocHangTram(int c){
    switch(c){
        case 1:printf("Mot tram");break;
        case 2:printf("Hai tram");break;
        case 3:printf("Ba tram");break;
        case 4:printf("Bon tram");break;
        case 5:printf("Nam tram");break;
        case 6:printf("Sau tram");break;
        case 7:printf("Bay tram");break;
        case 8:printf("Tam tram");break;
        case 9:printf("Chin tram");break;
    }
}
void DocHangChuc(int b){
    switch(b){
        case 1:printf(" muoi");break;
        case 2:printf(" hai muoi");break;
        case 3:printf(" ba muoi");break;
        case 4:printf(" bon muoi");break;
        case 5:printf(" nam muoi");break;
        case 6:printf(" sau muoi");break;
        case 7:printf(" bay muoi");break;
        case 8:printf(" tam muoi");break;
        case 9:printf(" chin muoi");break;
    }
}
void DocDonVi(int a){
    switch(a){
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
    int n,a,b,c;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    c=n%10;
    DocHangTram(c);
    DocHangChuc(b);
    DocDonVi(a);
}
