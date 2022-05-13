#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int cnt[MAX_LEN]={0};
    char str[MAX_LEN];
    gets(str);
    for(int i = 0; i < strlen(str); i++) {
        cnt[str[i]-'0']++;
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", cnt[i]);
    }
    return 0;
}