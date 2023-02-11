#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int prime(int n)
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
    int n;
    do
    {
        printf("nhap so nguyen n: ");
        scanf("%d", &n);
        if (n < 2)
        {
            printf("nhap gia tri n >= 2\n");
        }

    } while (n < 2);

    printf("cac so nguyen to tu 2 toi n: ");
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