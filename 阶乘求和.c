#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	if (n == 0)
		printf("1");
	else
	{
		long long int sum = 0;
		long long int x = 1;
		for (int i = 1; i <= n; i++)
		{
			x = x * i;
			sum = sum + x;
		}
		printf("%lld", sum);
	}
	return 0;
}