#define _CRT_SECURE_NO_WARNINGS
//�����ֳ���������ν������ָ���� 1 �����������⣬���ܱ��κ���������������
//����17������������Ϊ�����ܱ� 2~16 ����һ����������



//˼·1)������ж�һ������m�Ƿ���������
//ֻ��� m �� 2 ~ m-1 ֮���ÿһ������ȥ����
//��������ܱ���������ô m ����һ��������
//����ʵ�֣�Ĭ���������ֵΪ>=2��������
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
//˼·2)�������жϷ��������Լ򻯡�m ���ر� 2 ~ m-1 ֮���ÿһ������ȥ����
//ֻ�豻 2 ~  ֮���ÿһ������ȥ���Ϳ����ˡ�
//ԭ����һ��������m����������������ӷ�Χ�ڡ�2������m��
//�롾����m��m-1��֮�䣬���߸���mһ������
//��˿�����С��ⷶΧ
//����ʵ��
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