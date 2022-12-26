#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changemaxmin(int *a)
{
	int max=a[0], min=a[0];
	int t1, t2;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			t1 = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			t2 = i;
		}
	}
	printf("max=%d\n min=%d\n", max, min);
	a[t1] = a[9];
	a[9] = max;
	a[t2] = a[0];
	a[0] = min;
}
int main(void)
{
	int a[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	changemaxmin(&a);
	printf("a[0]=%d\n", a[0]);
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}