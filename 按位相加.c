#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define N 10
int main(void)
{
	int a, b;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		int a1[N] = { 0 };
		int	b1[N] = { 0 };
		int c[N] = { 0 };
		int i = 0;
		int k = 0;
		int x;
		for (;a > 0;a = a / 10)
		{
			a1[i] = a % 10;
			i++;
		}
		for (;b > 0;b = b / 10)

		{
			b1[k] = b % 10;
			k++;
		}	
		
		for (int s = 0; s < N; s++)
		{
			x = a1[s] + b1[s];
			if (x < 10)
				c[s] = x;
			else
				c[s] = x % 10;
		}
		int z;
		for  (z = N - 1; z >=0; z--)
		{
			if (c[z] != 0)
				break;
		}
		if (z == -1)
			printf("0");
		else
		{
			for (z; z >= 0; z--)
				printf("%d", c[z]);
		}
		printf("\n");
	}

	return 0;

}