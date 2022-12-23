#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[201] = {0};
	int count[4] = { 0 };
	gets(ch);
	int x = strlen(ch);
	for (int i = 0; i < x; i++)
	{
		if (ch[i] >= 65 && ch[i] <= 90 || ch[i] >= 97 && ch[i] <= 122)
			count[0]++;
		else	if (ch[i] >= 48 && ch[i] <= 57)
			count[1]++;
		else if (ch[i] == 32)
			count[2]++;
		else
			count[3]++;
	}
	for (int i = 0; i < 4; i++)
		printf("%d ", count[i]);
	return 0;
}


