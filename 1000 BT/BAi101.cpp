// .Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày.
#include<stdio.h>
bool NamNhuan(int nam){
    if(nam%4==0 && nam%100!=0 || nam%400==0){
        return true;
    }
    return false;
}
int main(){
    int thang,nam;
    printf("Nhap thang va nam: ");
    scanf("%d%d", &thang, &nam);
    switch(thang) {
        case 4: case 6: case 9: case 11:{
            printf("Thang co 30 ngay!\n");
            break;
        }
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
            printf("Thang co 31 ngay!\n");
            break;
        }
        case 2:{
            if(NamNhuan(nam)){
                printf("Thang co 28 ngay!\n");
            }else{
                printf("Thang co 29 ngay!\n");
            }
            break;
        }
        default:{
            printf("Thang khong hop le!");
        }
    }
}