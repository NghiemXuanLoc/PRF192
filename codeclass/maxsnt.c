#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int main()
{
    int n, max_val = -1, max_pos;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (check(a[i]))
        {
            if (a[i] > max_val)
            {
                max_val = a[i];
                max_pos = i + 1;
            }
        }
    }
    if (max_val == -1)
    {
        printf("khong ton tai so nguyen to trong mang\n");
    }else {
        printf("max_val = %d\nmax_pos = %d\n", max_val, max_pos);
    }
    

    return 0;
}
