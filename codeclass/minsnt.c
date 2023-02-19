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
    int n, min_val = INT_MAX, min_pos;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (check(a[i]))
        {
            if (a[i] < min_val)
            {
                min_val = a[i];
                min_pos = i + 1;
            }
        }
    }
    if (min_val == -1)
    {
        printf("khong ton tai so nguyen to trong mang\n");
    }else {
        printf("min_val = %d\nmin_pos = %d\n", min_val, min_pos);
    }
    
    return 0;
}
