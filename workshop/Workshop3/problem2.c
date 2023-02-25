#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int checkLeapYear(int n)
{
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		return 1;
	return 0;
}

int checkDate(int d, int m, int y)
{
	if (m >= 1 && m <= 12 && y > 0)
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			return d <= 31;
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			return d <= 30;
		}
		else if (checkLeapYear(y))
			return d <= 29;
		else
			return d <= 28;
	}
	return 0;
}
int main()
{
	int d, m, y;
	printf("Enter from the keyboard 1 day's data: ");
	scanf("%d%d%d", &d, &m, &y);
	if (checkDate(d, m, y))
	{
		printf("valid date\n");
	}
	else
		printf("invalid date\n");

	return 0;
}
