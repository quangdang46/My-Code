#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_strings(char **a, char **b)
{
    char *c = *a;
    *a = *b;
    *b = c;
}

void reverse_strings(int len, char **s)
{

    for (int i = 0; i <= len / 2; i++) {
        if (i == len - i)
            continue;
        swap_strings(&s[i], &s[len - i]);
    }
}

int next_permutation(int n, char **s)
{
    int k, l;

    for (k = n - 2; k >= 0; k--)
        if (strcmp(s[k], s[k + 1]) < 0)
            break;
    if (k < 0)
        return 0;

    for (l = n - 1; l > k; l--)
        if (strcmp(s[k], s[l]) < 0)
            break;
    
    swap_strings(&s[k], &s[l]);

    reverse_strings(n - k - 2, &s[k + 1]);

    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}