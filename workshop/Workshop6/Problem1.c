#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// ham kiem tra ISBN.

int checkISBN(ll n)
{
	int ans = 0;
	int total = 0;
	while (n)
	{
		total += (n % 10) * (++ans);
		n /= 10;
	}
	return total % 11 == 0;
}
int main()
{
	ll n;
	do
	{
		printf("ISBN (0 to quit): ");
		scanf("%lld", &n);
		if (n != 0)
		{
			if (checkISBN(n))
				printf("This is a valid ISBN.\n");
			else
				printf("This is not a valid ISBN.\n");
		}
		else
			printf("Have a Nice Day!\n");
	} while (n != 0);
	return 0;
}

