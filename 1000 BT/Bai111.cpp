/*Bài 111: Viết chương trình in ra tam giác cân có độ cao h
Tam giác cân đặc nằm giữa màn hình
Tam giác cân rỗng nằm giữa màn hình
Tam giác  vuông cân đặc
Tam giác  vuông cân rỗng
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    // Câu a:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j < n - i + 1) ? " " : "%c", 234);
        }
        putchar('\n');
    }



    // Câu b:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "%c" : " ", 234);
        }
        putchar('\n');
    }
    printf("\n");
    // Câu c: 
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j <= i) ? "%c" : " ", 234);
        }
        printf("\n\n");
    }

    // Câu d
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j == i || j == 1 || i == n) ? "*" : " ");
        }
        printf("\n");
    }

     
    getch();
    return 0;
}

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    for (int i = 0; i < 255; i++)
//    {
//        printf("ASCII value of character %c: %d\n", i, i);
//    }
//    getch();
//    return 0;
//}