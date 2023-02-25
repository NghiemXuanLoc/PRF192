#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int sum(ll n)
{
    int temp = 0;
    int s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    ll n;
    do
    {
        printf("enter the value of n: ");
        scanf("%lld", &n);
        if (n >= 0)
        {
            printf("sum of digits of n = %d\n", sum(n));
        }
        else
            printf("Invalid input value(n >= 0)\n");

    } while (n >= 0);

    return 0;
}
