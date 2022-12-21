#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#define n 1000
int main(void) 
{
	int len;
	char a[n];
	while (scanf("%s", &a) != EOF)
	{
			len = strlen(a);
			for (int i = len - 1; i >= 0; i--)
				printf("%c", a[i]);
			printf("\n");
	}
	return 0;
}
