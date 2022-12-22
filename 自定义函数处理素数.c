#define _CRT_SECURE_NO_WARNINGS
//素数又称质数。所谓素数是指除了 1 和它本身以外，不能被任何整数整除的数，
//例如17就是素数，因为它不能被 2~16 的任一整数整除。



//思路1)：因此判断一个整数m是否是素数，
//只需把 m 被 2 ~ m-1 之间的每一个整数去除，
//如果都不能被整除，那么 m 就是一个素数。
//代码实现（默认输入测试值为>=2的整数）
//#include <stdio.h>
//void prime(int n);
//int main(void)
//{
//	int x;
//	scanf("%d", &x);
//	prime(x);
//	return 0;
//}
//void prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("not prime");
//			return 0;
//		}
//	}
//	printf("prime");
//	return 0;
//}
//
//思路2)：另外判断方法还可以简化。m 不必被 2 ~ m-1 之间的每一个整数去除，
//只需被 2 ~  之间的每一个整数去除就可以了。
//原因：若一个非素数m，则其存在两个因子范围在【2，根号m】
//与【根号m，m-1】之间，或者根号m一个因子
//因此可以缩小检测范围
//代码实现
#include <stdio.h>
#include <math.h>
void prime(int n);
int main(void)
{
	int x;
	scanf("%d", &x);
	prime(x);
	return 0;
}
void prime(int n)
{

	for (int i = 2; i <=sqrt (n); i++)
			{
				if (n % i == 0)
				{
					printf("not prime");
					return 0;
				}
			}
			printf("prime");
			return 0;
}