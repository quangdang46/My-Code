#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch[MAX_LEN],s[MAX_LEN],sen[MAX_LEN];
    scanf("%[^\n]%*c",ch);
    scanf("%[^\n]%*c",s);
    scanf("%[^\n]%*c",sen);
    printf("%s\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    
    return 0;
}