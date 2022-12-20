#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>		
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		int a[100] = {0};
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum = sum + a[i];

		}
		if (n % 2 != 0 && sum % 2 != 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;	
}