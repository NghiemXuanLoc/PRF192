#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

ll giaithua(int n)
{
    ll p = 1;
    for (int i = 2; i <= n; i++)
    {
        p *= i;
    }
    return p;
}

int main()
{
    int n;
    do
    {
        printf("Enter the value n: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Enter the value n > 0\n");
        }
    } while (n < 0);
    
    ll kq = giaithua(n);
    printf("n! = %lld\n", kq);
    return 0;
}
