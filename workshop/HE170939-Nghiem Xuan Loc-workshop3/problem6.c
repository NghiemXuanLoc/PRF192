#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int check(ll n)
{
    ll t2 = 1, t1 = 1, f = 1;
    while (f < n)
    {
        f = t2 + t1;
        t2 = t1;
        t1 = f;
    }
    return f == n;
}

int main()
{
    ll n;
    do
    {
        printf("enter the value n: ");
        scanf("%lld", &n);
        if (n < 1)
        {
            printf("Invalid input value(n >= 1)\n");
        }

    } while (n < 1);
    if (check(n))
    {
        printf("It is a Fibonacci element.\n");
    }
    else
        printf("It is not a Fibonacci element.\n");

    return 0;
}
