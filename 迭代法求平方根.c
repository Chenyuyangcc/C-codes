#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    double a;
	scanf("%lf", &a);
	double x1, x0;
	x0 = a;
	while (1)
	{
		x1 = (x0 + a / x0) / 2;
		if ((x0 - x1) < 0.00001)
			break;
		x0 = x1;
	}
	printf("%.3lf", x1);
	return 0;
}