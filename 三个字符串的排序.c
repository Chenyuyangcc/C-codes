#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch1[1000], ch2[1000], ch3[1000];
	int a1=0, a2=0, a3=0;
	gets(ch1);
	gets(ch2);
	gets(ch3);
	a1 = strcmp(ch1, ch2);
	a2 = strcmp(ch1, ch3);
	a3 = strcmp(ch2, ch3);
	if (a1 <= 0 && a2 <= 0 && a3 <= 0)
		printf("%s\n%s\n%s", ch1, ch2, ch3);
	else if (a1 <= 0 && a2 <= 0 && a3 >= 0)
			printf("%s\n%s\n%s", ch1, ch3, ch2);
	else if (a1 >= 0 && a2 <= 0 && a3 <= 0)
	printf("%s\n%s\n%s", ch2, ch1, ch3);
	else if (a1 >= 0 && a2 >= 0 && a3 <= 0)
	printf("%s\n%s\n%s", ch2, ch3, ch1);
	else if (a1 >= 0 && a2 >= 0 && a3 >= 0)
	printf("%s\n%s\n%s", ch3, ch2, ch1);
	else if (a1 <= 0 && a2 >= 0 && a3 >= 0)
		printf("%s\n%s\n%s", ch3, ch1, ch2);
	return 0;
}