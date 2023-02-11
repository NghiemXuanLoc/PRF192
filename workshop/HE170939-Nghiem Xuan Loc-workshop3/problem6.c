#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int check(int n)
{
    int t2 = 1, t1 = 1, f = 1;
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
    int n;
    do
    {
        printf("nhap vao gia tri n: ");
        scanf("%d", &n);
        if (n < 1)
        {
            printf("gia tri nhap vao khong hop le(n >= 1)\n");
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