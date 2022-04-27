// Bài 112: Viết chương trình in ra hình chữ nhật có kích thước m x n
// Hình chữ nhật đặc
// Hình chữ nhật rỗng
#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap m va n: ");
    scanf("%d%d", &m, &n);
    // cau a
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("___________\n");
    int i,j;
    // Cau b
        for(i=0; i<m;i++){
        for(j=0; j<n;j++){
            if(i==0 || j==0 || i==m-1 ||j==n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}