#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int number_of_distinct_characters(const char* a){
    int alphabet[26] = {0};
    int num = 0;
    while (*a != '\0'){
        if (!alphabet[*a - 'a']){
            alphabet[*a - 'a'] = 1;
            num++; 
        }
        a++;
    }
    return num;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int distinct_diff = number_of_distinct_characters(a) - number_of_distinct_characters(b);
    return distinct_diff? distinct_diff: lexicographic_sort(a, b);
    
}

int sort_by_length(const char* a, const char* b) {
    int len_diff = strlen(a) - strlen(b);
    return len_diff? len_diff: lexicographic_sort(a, b);
}

void swap(char** a, char** b){
    char* tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int pivot = len / 2;
    swap(arr + pivot, arr + len - 1);
    int j = -1;
    for (int i = 0; i < len - 1; i++){
        if (cmp_func(*(arr + i), *(arr + len - 1)) <= 0){
            j++;
            swap(arr + j, arr + i);    
        }
    }
    j++;
    swap(arr + j, arr + len - 1);

    return j + 1;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    if (len <= 1){
        return;
    }
    int m = partition(arr, len, cmp_func);
    string_sort(arr + m, len - m, cmp_func);
    string_sort(arr, m - 1, cmp_func);
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}