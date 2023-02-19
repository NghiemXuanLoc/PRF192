#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

ll fibo(int n)
{
    ll t1 = 1, t2 = 1, f = 1;
    // t2 la so dung truoc, t1 la so dung sau

    for (int i = 3; i <= n; i++)
    {
        f = t1 + t2;
        t2 = t1;
        t1 = f;
    }
    return f;
}

int main()
{

    int n;
    do
    {
        printf("Enter the value n: ");
        scanf("%d", &n);
        if (n < 1)
        {
            printf("Enter the value n >= 1\n");
        }

    } while (n < 1);
    printf("nth Fibonacci number = %lld\n", fibo(n));
    return 0;
}
