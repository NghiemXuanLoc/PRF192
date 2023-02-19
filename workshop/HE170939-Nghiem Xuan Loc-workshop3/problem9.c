#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// ham tinh uoc chung lon nhat
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return gcd(b, a % b);
}

// ham tinh boi chung nho nhat cua 2 so a va b

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
int main()
{
    ll a, b;
    do
    {
        printf("enter the values of a and b: ");
        scanf("%lld%lld", &a, &b);
        if (a <= 0 || b <= 0)
        {
            printf("Invalid input value(a > 0 && b > 0)\n");
        }

    } while (a <= 0 || b <= 0);
    printf("greatest common divisor of a and b = %d\nleast common multiple of a va b = %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
