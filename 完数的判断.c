#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int wanshu(int i);
void dayin(int i);
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (wanshu(i) == 1)
			dayin(i);
	}
	return 0;
}
int wanshu(int i)
{
	int a[1000] = { 0 };
	int s = 0,sum = 0;
	for (int k = 1; k < i; k++)
	{
		if (i % k == 0)
		{
			a[s] = k;
			s++;
		}
	}
	for (int k = 0; k < s; k++)
		sum = sum + a[k];
	if (sum == i)
		return 1;
	else
		return 0;
}
void dayin(int i)
{
	int a[1000] = { 0 };
	int s = 0;
	for (int k = 1; k < i; k++)
	{
		if (i % k == 0)
		{
			a[s] = k;
			s++;
		}
	}
	printf("%d ", i);
	printf("its factors are ");
	for (int k = 0; k < s; k++)
		printf("%d ", a[k]);
	printf("\n");

}


