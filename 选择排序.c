#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define n 10
int main(void)
{
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < n - 1 -i; s++)
		{
			if (a[s]>a[s + 1])
			{
				int t;
				t = a[s];
				a[s] = a[s +1];
				a[s + 1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", a[i]);
	return 0;
}