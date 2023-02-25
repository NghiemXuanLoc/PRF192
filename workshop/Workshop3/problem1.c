#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int prime(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int main()
{
    ll n;
    do
    {
        printf("enter the value of n: ");
        scanf("%lld", &n);
        if (n < 2)
        {
            printf("enter the value of n >= 2\n");
        }

    } while (n < 2);

    printf("prime numbers from 2 to n: ");
    for (int i = 2; i <= n; i++)
    {
        if (prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
