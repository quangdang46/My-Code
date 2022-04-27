// Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3
#include <stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    for(int i=1;i<=n; i++){
        sum+=pow(i,3);
    }
    printf("S=%d\n",sum);

}