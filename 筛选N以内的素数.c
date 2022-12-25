#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int isprime(int i)
{
	for (int s = 2; s <= sqrt(i); s++)
	{
		if (i % s == 0)
		{
			return -1;
		}
	}
	return 1;
}
int main(void)
{
	int x;
	scanf("%d", &x);
	for (int i = 2; i <= x; i++)
	{
        if(isprime(i)==1)
		printf("%d\n", i);
	}
	return 0;
}




