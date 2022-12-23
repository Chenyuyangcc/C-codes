#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
int isleap(int x);
int countdays(struct date);
int main(void)
{
	struct date now;
	scanf("%d %d %d", &now.year, &now.month, &now.day);
	int totaldays;
	totaldays=countdays(now);
	printf("%d", totaldays);
	return 0;
}
int isleap(int x)
{
	int y;
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		y = 1;
	else
		y = 0;
	return y;
}
int countdays(struct date p)
{
	int monthday[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	int days=0;
	if (isleap(p.year) == 1)
		monthday[2] = 29;
	for (int i = 1; i <= p.month-1; i++)
		days = days + monthday[i];
	days = days + p.day;
	return days;
}